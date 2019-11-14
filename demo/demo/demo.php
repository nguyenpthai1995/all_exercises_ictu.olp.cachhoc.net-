<!DOCTYPE html>
<html>
<head>
	<title>demo</title>
	<meta http-equiv="Refresh" content="10;url=demo.php" />
	<link rel="stylesheet" type="text/css" href="demo.css">
</head>
<body>
		<?php 
			$host = "localhost";
			$database = "demo";
			$username = "root";
			$password = "";

			$conn = mysqli_connect($host,$username,$password,$database);

			if($conn->connect_error){
				exit("ket noi that bai: ".$conn->connect_error);
			}

			$sql = 'SELECT nhietdo, doduc, doph FROM bang WHERE stt IN (SELECT MAX(stt) FROM bang)';

			$retval = mysqli_query($conn,$sql);

			if(! $retval){
				die("khong the lay du lieu: ".mysql_error());
			}

			while($row = mysqli_fetch_array($retval, MYSQLI_ASSOC)){
				$nd = $row['nhietdo'];
				$dd = $row['doduc'];
				$dph = $row['doph'];
			}

			echo('<div>
					<table>
					<tr>
						<th>Nhiệt độ</th>
						<th>Độ đục</th>
						<th>Độ pH</th>	
					</tr>
					<tr>
						<th>'.$nd.'</th>
						<th>'.$dd.'</th>
						<th>'.$dph.'</th>	
					</tr>
					</table>
				</div>');
			$conn->close();
		?>
</body>
</html>