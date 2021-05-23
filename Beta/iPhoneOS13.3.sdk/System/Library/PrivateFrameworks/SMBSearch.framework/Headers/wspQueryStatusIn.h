/*
 Image: /System/Library/PrivateFrameworks/SMBSearch.framework/SMBSearch
 */

#import <Foundation/NSObject.h>

@class wspContext;

@interface wspQueryStatusIn : NSObject

{
    CDStruct_8451e1c8 msghdr;
    wspContext *_wctx;
}

@property (retain) wspContext *wctx;

- (int)encodeBuffer:(id)arg1 BufferOffset:(unsigned int)arg2 BytesWritten:(unsigned int *)arg3;
- (id)initWithCtx:(id)arg1;

@end
