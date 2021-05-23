/*
 Image: /System/Library/PrivateFrameworks/SMBSearch.framework/SMBSearch
 */

#import <Foundation/NSObject.h>

@class wspHeader;

@interface wspQueryStatusOut : NSObject

{
    unsigned int _qStatus;
    wspHeader *_whdr;
}

@property (retain) wspHeader *whdr;
@property unsigned int qStatus;

- (id)init;
- (int)decodeBuffer:(id)arg1 BufferOffset:(unsigned int)arg2 BytesDecoded:(unsigned int *)arg3;

@end
