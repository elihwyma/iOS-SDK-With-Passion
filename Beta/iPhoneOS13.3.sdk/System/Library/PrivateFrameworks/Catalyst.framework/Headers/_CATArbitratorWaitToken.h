/*
 Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_group, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _CATArbitratorWaitToken : NSObject

{
    _Atomic int mState;
    NSMutableDictionary *mTokenByKey;
    NSObject<OS_dispatch_queue> *mDelegateQueue;
    NSObject<OS_dispatch_group> *mGroup;
    CDUnknownBlockType mCompletionBlock;
}

- (void)cancel;
- (void)resume;
- (id)initWithDelegateQueue:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)waitForRegistrationEntry:(id)arg1 forKey:(id)arg2 exclusive:(_Bool)arg3;
- (void)performCompletionBlock;
- (_Bool)whenStateIs:(int)arg1 atomicallySwapWith:(int)arg2;

@end
