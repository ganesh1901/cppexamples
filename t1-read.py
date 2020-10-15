import sys
import bitstruct

def getvalue(val, offset, scale):
    temp = (val*scale)-offset
    print "val- %d offset- %d scale- %d result- %f" % (val, offset, scale, temp)
    return 


if __name__ == "__main__":
    if len(sys.argv) != 2:
            print " Usage python script.py 1)filename"
            sys.exit()
    f = open(sys.argv[1], "rb")
    if f:
        data = f.read()
        data = data[::-1]
        unpack_data = bitstruct.unpack("u18u19u19", data)
        getvalue(unpack_data[0], 60000, 1)
        getvalue(unpack_data[1], 150000, 1)
        getvalue(unpack_data[2], 150000, 1)


    else:
        print "file open error %s "%(sys.argv[1])
