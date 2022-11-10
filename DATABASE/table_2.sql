-- phpMyAdmin SQL Dump
-- version 5.2.0
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Nov 10, 2022 at 05:37 AM
-- Server version: 10.4.25-MariaDB
-- PHP Version: 8.1.10

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `assignment`
--

-- --------------------------------------------------------

--
-- Table structure for table `table_2`
--

CREATE TABLE `table_2` (
  `FirstName` varchar(10) DEFAULT NULL,
  `LastName` varchar(10) DEFAULT NULL,
  `Address` varchar(20) DEFAULT NULL,
  `City` varchar(10) DEFAULT NULL,
  `Age` int(11) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `table_2`
--

INSERT INTO `table_2` (`FirstName`, `LastName`, `Address`, `City`, `Age`) VALUES
('Mickey', 'Mouse', '123 Fantasy Way', 'Anaheim', 73),
('Bat', 'Man', '321 Canven Ave', 'Gotham', 54),
('Wonder', 'Woman', '987 Truth Way', 'Paradise', 39),
('Donald', 'Duck', '555 Quack Street', 'Mallard', 65),
('Bugs', 'Bunny', '567 Carrot Street', 'Rascal', 58),
('Wiley', 'Coyote', '999 Acme Way', 'Canyon', 61),
('Cat', 'Woman', '234 Purrfect Street', 'Hairball', 32),
('Tweety', 'Bird', '543', 'Itotltaw', 28);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
