/*
 Image: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
 */

#import <Foundation/NSObject.h>

@interface NFUnfairLock : NSObject

{
    struct os_unfair_lock_s _unfairLock;
    unsigned int _unfairLockOptions;
}

@property (nonatomic) struct os_unfair_lock_s unfairLock;
@property (nonatomic) unsigned int unfairLockOptions;

- (id)init;
- (id)initWithOptions:(long long)arg1;
- (void)lock;
- (void)unlock;
- (void)performWithLockSync:(CDUnknownBlockType)arg1;

@end
