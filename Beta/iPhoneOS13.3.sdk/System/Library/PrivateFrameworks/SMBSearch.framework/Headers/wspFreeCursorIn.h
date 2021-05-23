/*
 Image: /System/Library/PrivateFrameworks/SMBSearch.framework/SMBSearch
 */

#import <Foundation/NSObject.h>

@interface wspFreeCursorIn : NSObject

{
    CDStruct_8451e1c8 msghdr;
    unsigned int _cursorToFree;
}

@property unsigned int cursorToFree;

- (id)initWithCursor:(unsigned int)arg1;
- (int)encodeBuffer:(id)arg1 BufferOffset:(unsigned int)arg2 BytesWritten:(unsigned int *)arg3;

@end
