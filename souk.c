
undefined8 FUN_001013b2(void)

{
  long lVar1;
  char *__s;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long in_FS_OFFSET;
  undefined auStack72 [4];
  int local_44;
  int local_40;
  int i;
  long local_38;
  char *local_30;
  char *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = (long)DAT_00104020 + -1;
  uVar2 = (((long)DAT_00104020 + 0xfU) / 0x10) * 0x10;
  for (puVar4 = auStack72; puVar4 != auStack72 + -(uVar2 & 0xfffffffffffff000);
      puVar4 = puVar4 + -0x1000) {
    *(undefined8 *)(puVar4 + -8) = *(undefined8 *)(puVar4 + -8);
  }
  lVar1 = -(ulong)((uint)uVar2 & 0xfff);
  if ((uVar2 & 0xfff) != 0) {
    *(undefined8 *)(puVar4 + ((ulong)((uint)uVar2 & 0xfff) - 8) + lVar1) =
         *(undefined8 *)(puVar4 + ((ulong)((uint)uVar2 & 0xfff) - 8) + lVar1);
  }
  local_30 = puVar4 + lVar1;
  *(undefined8 *)(puVar4 + lVar1 + -8) = 0x101491;
  memset(puVar4 + lVar1,0,(long)DAT_00104020);
  *(undefined8 *)(puVar4 + lVar1 + -8) = 0x1014a2;
  printf("Quel est le mot de passe ? ");
  __s = local_30;
  *(undefined8 *)(puVar4 + lVar1 + -8) = 0x1014bd;
  local_28 = fgets(__s,DAT_00104020,stdin);
  if (local_28 == (char *)0x0) {
    *(undefined8 *)(puVar4 + lVar1 + -8) = 0x1014d4;
    puts("Ce que tu dis est une cacophonie, je n\'ai pas compris");
    uVar3 = 1;
  }
  else {
    for (i = 0; i < DAT_00104020; i = i + 1) {
      *(int *)(&DAT_00104040 + (long)i * 4) =
           *(int *)(&DAT_00104040 + (long)i * 4) + (int)local_30[i];
    }
    *(undefined8 *)(puVar4 + lVar1 + -8) = 0x101552;
    FUN_00101316(&DAT_00104040,DAT_00104020,0);
    *(undefined8 *)(puVar4 + lVar1 + -8) = 0x10156b;
    FUN_00101316(&DAT_00104160,DAT_00104020,1);
    local_40 = 1;
    for (local_44 = 0; local_44 < DAT_00104020; local_44 = local_44 + 1) {
      if (*(int *)(&DAT_00104040 + (long)local_44 * 4) !=
          *(int *)(&DAT_00104160 + (long)((DAT_00104020 + -1) - local_44) * 4)) {
        local_40 = 0;
      }
    }
    if (local_40 == 0) {
      *(undefined8 *)(puVar4 + lVar1 + -8) = 0x1015ec;
      puts(&DAT_001020d0);
    }
    else {
      *(undefined8 *)(puVar4 + lVar1 + -8) = 0x1015de;
      puts(&DAT_00102060);
    }
    uVar3 = 0;
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}

