sszie_t rio_readn(int fd,void *usrbuf,size_t n){
    size_t nleft = n;
    sszie_t nread;
    char * bufp = usrbuf;

    while(nleft > 0){
        if((nread = read(fd,bufp,nleft) < 0))
    }
}