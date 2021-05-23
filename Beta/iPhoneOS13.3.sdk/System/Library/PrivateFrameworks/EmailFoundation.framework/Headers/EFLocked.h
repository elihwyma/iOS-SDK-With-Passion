/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <Foundation/NSObject.h>

@interface EFLocked : NSObject

{
    struct os_unfair_lock_s _lock;
    id _object;
}

@property (nonatomic, readonly) struct os_unfair_lock_s *unfairLockForTesting;

- (id)description;
- (id)debugDescription;
- (id)initWithObject:(id)arg1;
- (void)performWhileLocked:(CDUnknownBlockType)arg1;

@end
