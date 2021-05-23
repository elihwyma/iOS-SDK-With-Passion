/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSString;

@interface SBLockScreenDisabledAssertionManager : NSObject

{
    NSMutableSet *_disableLockScreenIfPossibleAssertions;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (_Bool)shouldAutoUnlockForSource:(int)arg1;
- (_Bool)isLockScreenDisabledForAssertion;
- (void)addLockScreenDisableAssertion:(id)arg1;
- (void)removeLockScreenDisableAssertion:(id)arg1;

@end
