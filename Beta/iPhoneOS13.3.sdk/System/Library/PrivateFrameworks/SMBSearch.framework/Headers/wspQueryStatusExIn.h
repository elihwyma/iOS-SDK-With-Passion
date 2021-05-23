/*
 Image: /System/Library/PrivateFrameworks/SMBSearch.framework/SMBSearch
 */

#import <Foundation/NSObject.h>

@class wspContext;

@interface wspQueryStatusExIn : NSObject

{
    CDStruct_8451e1c8 msghdr;
    unsigned int _bmk;
    wspContext *_wctx;
}

@property (retain) wspContext *wctx;
@property unsigned int bmk;

- (int)encodeBuffer:(id)arg1 BufferOffset:(unsigned int)arg2 BytesWritten:(unsigned int *)arg3;
- (id)initWithCtx:(id)arg1;

@end
