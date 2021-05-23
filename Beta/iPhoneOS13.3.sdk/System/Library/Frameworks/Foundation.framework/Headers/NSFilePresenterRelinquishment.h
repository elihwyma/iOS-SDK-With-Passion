/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class NSCountedSet, NSMutableArray;

__attribute__((visibility("hidden")))
@interface NSFilePresenterRelinquishment : NSObject

{
    struct os_unfair_lock_s _lock;
    NSCountedSet *_blockingAccessClaimIDs;
    NSMutableArray *_relinquishReplies;
    CDUnknownBlockType _reacquirer;
    NSMutableArray *_blockingPrerelinquishReplies;
    _Bool _prerelinquishInProgress;
}

- (void)dealloc;
- (void)removeAllBlockingAccessClaimIDs;
- (void)removeBlockingAccessClaimID:(id)arg1;
- (void)performRemoteDeletePrerelinquishmentIfNecessaryUsingBlock:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)setReacquirer:(CDUnknownBlockType)arg1;
- (void)performRelinquishmentToAccessClaimIfNecessary:(id)arg1 usingBlock:(CDUnknownBlockType)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)removeBlockingAccessClaimID:(id)arg1 thenContinue:(CDUnknownBlockType)arg2;
- (void)_locked_addPrerelinquishReply:(CDUnknownBlockType)arg1;
- (_Bool)_locked_addRelinquishReply:(CDUnknownBlockType)arg1;
- (void)didRelinquish;

@end
