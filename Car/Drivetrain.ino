void Drivetrain() {
  switch(results.value){
    case 0xFF629D: Forward(); break;
    case 0xFFC23D: Right(); break;
    case 0xFF22DD: Left(); break;
    case 0xFFA857: Back(); break;
    case 0xFF02FD: Stop(); break;
  }
}

