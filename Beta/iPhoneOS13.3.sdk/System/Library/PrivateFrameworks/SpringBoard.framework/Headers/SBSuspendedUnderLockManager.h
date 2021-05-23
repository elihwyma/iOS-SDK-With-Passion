/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@protocol SBSuspendedUnderLockManagerDelegate;

@interface SBSuspendedUnderLockManager : NSObject

{
    id <SBSuspendedUnderLockManagerDelegate> _delegate;
    _Bool _suspendedUnderLock;
}

@property (weak, nonatomic) id <SBSuspendedUnderLockManagerDelegate> delegate;
@property (nonatomic, getter=isSuspendedUnderLock) _Bool suspendedUnderLock;

- (id)initWithDelegate:(id)arg1;
- (void)interceptUpdateForScene:(id)arg1 withNewSettings:(id)arg2;
- (_Bool)_sceneShouldBeBackgroundUnderLockWithSceneSettings:(id)arg1;

@end
