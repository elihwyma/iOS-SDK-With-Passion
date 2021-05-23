/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, _DKSyncCompositeOperation, _DKSyncType;

@interface _DKSync2State : NSObject

{
    _Bool _isPending;
    _DKSyncType *_type;
    _DKSyncCompositeOperation *_parent;
    NSMutableArray *_completions;
}

@property (retain) NSMutableArray *completions;
@property _Bool isPending;
@property (retain) _DKSyncType *type;
@property (retain) _DKSyncCompositeOperation *parent;

- (void)addCompletionBlock:(CDUnknownBlockType)arg1;
- (void)mergeType:(id)arg1;
- (id)initWithType:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)finishWithError:(id)arg1;

@end
