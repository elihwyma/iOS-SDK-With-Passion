/*
 Image: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
 */

#import <Foundation/NSObject.h>

@class NSMapTable;

@interface TPSController : NSObject

{
    struct os_unfair_lock_s _delegateLock;
    NSMapTable *_delegateToQueue;
}

@property (nonatomic) struct os_unfair_lock_s delegateLock;
@property (nonatomic, readonly) NSMapTable *delegateToQueue;

- (id)init;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (void)performAtomicDelegateBlock:(CDUnknownBlockType)arg1;

@end
