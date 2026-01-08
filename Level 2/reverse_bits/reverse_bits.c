unsigned char	reverse_bits(unsigned char octet){
    unsigned char reversed = 0;
    if(octet & 1)
        reversed |= 0x80;
    if(octet & 2)
        reversed |= 0x40;
    if(octet & 4)
        reversed |= 0x20;
    if(octet & 8)
        reversed |= 0x10;
    if(octet & 16)
        reversed |= 0x08;
    if(octet & 32)
        reversed |= 0x04;
    if(octet & 64)
        reversed |= 0x02;
    if(octet & 128)
        reversed |= 0x01;
    return (reversed);
}
