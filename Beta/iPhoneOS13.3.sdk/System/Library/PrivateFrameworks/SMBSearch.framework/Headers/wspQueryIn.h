/*
 Image: /System/Library/PrivateFrameworks/SMBSearch.framework/SMBSearch
 */

#import <Foundation/NSObject.h>

@class cNodeRestriction, wspContext;

@interface wspQueryIn : NSObject

{
    CDStruct_8451e1c8 msghdr;
    wspContext *_wctx;
    cNodeRestriction *_primaryCnodeRestriction;
    cNodeRestriction *_secondaryCnodeRestriction;
}

@property (retain) wspContext *wctx;
@property (retain) cNodeRestriction *primaryCnodeRestriction;
@property (retain) cNodeRestriction *secondaryCnodeRestriction;

- (id)initWithCtx:(id)arg1;
- (id)makePrimaryCnodeRestriction;
- (id)makeSecondaryCnodeRestriction;
- (int)encodePrimaryQuery:(id)arg1 BufferOffset:(unsigned int)arg2 BytesWritten:(unsigned int *)arg3;
- (int)encodeSecondaryQuery:(id)arg1 BufferOffset:(unsigned int)arg2 BytesWritten:(unsigned int *)arg3;

@end
