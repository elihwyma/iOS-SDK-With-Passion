/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <Foundation/NSObject.h>

@class NSError, NSMapTable, NSMutableArray, NSString;

@protocol OS_dispatch_queue;

@interface MPCFuture : NSObject

{
    _Bool _finalized;
    _Bool _invalid;
    id _result;
    NSError *_error;
    NSString *_debugLabel;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSMutableArray *_successBlocks;
    NSMutableArray *_failureBlocks;
    NSMutableArray *_completionBlocks;
    NSMapTable *_invalidBlocks;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *accessQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *calloutQueue;
@property (nonatomic, readonly) NSMutableArray *successBlocks;
@property (nonatomic, readonly) NSMutableArray *failureBlocks;
@property (nonatomic, readonly) NSMutableArray *completionBlocks;
@property (nonatomic, readonly) NSMapTable *invalidBlocks;
@property (nonatomic, readonly) id result;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly, getter=isFinalized) _Bool finalized;
@property (nonatomic, readonly, getter=isInvalid) _Bool invalid;
@property (copy, nonatomic) NSString *debugLabel;

- (void)dealloc;
- (id)description;
- (void)invalidate;
- (id)initWithQueue:(id)arg1;
- (void)finishWithError:(id)arg1;
- (id)onSuccess:(CDUnknownBlockType)arg1;
- (id)onFailure:(CDUnknownBlockType)arg1;
- (id)onCompletion:(CDUnknownBlockType)arg1;
- (id)onInvalid:(CDUnknownBlockType)arg1;
- (void)finishWithValue:(id)arg1;
- (void)_onQueue_finalize;

@end
