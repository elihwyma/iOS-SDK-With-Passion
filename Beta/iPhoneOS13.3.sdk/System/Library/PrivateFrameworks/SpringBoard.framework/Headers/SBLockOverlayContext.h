/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class SBLockOverlayViewController;

@interface SBLockOverlayContext : NSObject

{
    SBLockOverlayViewController *_viewController;
    unsigned long long _priority;
    CDUnknownBlockType _activationBlock;
    CDUnknownBlockType _deactivationBlock;
}

@property (nonatomic, readonly) SBLockOverlayViewController *viewController;
@property (nonatomic, readonly) unsigned long long priority;
@property (copy, nonatomic) CDUnknownBlockType activationBlock;
@property (copy, nonatomic) CDUnknownBlockType deactivationBlock;

- (id)initWithOverlayViewController:(id)arg1 priority:(unsigned long long)arg2;

@end
