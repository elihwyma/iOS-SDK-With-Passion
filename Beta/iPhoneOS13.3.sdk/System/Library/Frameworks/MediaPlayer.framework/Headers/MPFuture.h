/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class NSMapTable, NSString;

@protocol OS_dispatch_queue;

@interface MPFuture : NSObject

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    _Bool _finalized;
    id _result;
    id _error;
    NSObject<OS_dispatch_queue> *_lazyBlockQueue;
    CDUnknownBlockType _lazySyncBlock;
    CDUnknownBlockType _lazyAsyncBlock;
    NSMapTable *_successBlocks;
    NSMapTable *_failureBlocks;
    NSMapTable *_completionBlocks;
    _Bool _finished;
    NSString *_name;
}

@property (copy, nonatomic, readonly) NSString *name;
@property (nonatomic, readonly, getter=isFinished) _Bool finished;

+ (id)calloutQueue;
+ (id)futureWithName:(id)arg1 result:(id)arg2;
+ (id)futureWithName:(id)arg1 error:(id)arg2;
+ (id)futureWithName:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (id)futureWithName:(id)arg1 block:(CDUnknownBlockType)arg2 queue:(id)arg3;
+ (id)futureWithName:(id)arg1 asyncBlock:(CDUnknownBlockType)arg2;
+ (id)futureWithName:(id)arg1 asyncBlock:(CDUnknownBlockType)arg2 queue:(id)arg3;

- (id)description;
- (id)initWithName:(id)arg1;
- (id)result:(id *)arg1;
- (id)onSuccess:(CDUnknownBlockType)arg1;
- (id)onSuccess:(CDUnknownBlockType)arg1 queue:(id)arg2;
- (id)onFailure:(CDUnknownBlockType)arg1;
- (id)onFailure:(CDUnknownBlockType)arg1 queue:(id)arg2;
- (id)onCompletion:(CDUnknownBlockType)arg1;
- (id)onCompletion:(CDUnknownBlockType)arg1 queue:(id)arg2;
- (void)_loadResultIfNeeded;
- (void)_onQueue_finalizeWithResult:(id)arg1 error:(id)arg2;

@end
