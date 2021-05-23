/*
 Image: /System/Library/PrivateFrameworks/SMBSearch.framework/SMBSearch
 */

#import <Foundation/NSObject.h>

@interface wspHeader : NSObject

{
    unsigned int _msgid;
    unsigned int _status;
    unsigned int _checksum;
    unsigned int _reserved2;
}

@property unsigned int msgid;
@property unsigned int status;
@property unsigned int checksum;
@property unsigned int reserved2;

- (id)init;
- (int)decodeBuffer:(id)arg1 BufferOffset:(unsigned int)arg2 BytesDecoded:(unsigned int *)arg3;

@end
