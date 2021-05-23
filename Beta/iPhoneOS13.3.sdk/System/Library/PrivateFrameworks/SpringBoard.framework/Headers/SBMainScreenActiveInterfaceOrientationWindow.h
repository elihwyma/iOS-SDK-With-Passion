/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBWindow.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSCountedSet, NSString, UIViewController;

@interface SBMainScreenActiveInterfaceOrientationWindow : SBWindow <Swift>

{
    NSCountedSet *_orientationUpdateDisableReasons;
    _Bool _passesTouchesThrough;
    NSString *_debugName;
    UIViewController *_sb_rootViewController;
}

@property (copy, nonatomic, readonly) NSString *debugName;
@property (retain, nonatomic, setter=sb_setRootViewController:) UIViewController *sb_rootViewController;
@property (nonatomic) _Bool passesTouchesThrough;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)isActive;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)setHidden:(_Bool)arg1;
- (void)setRootViewController:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)activeInterfaceOrientationWillChangeToOrientation:(long long)arg1;
- (void)activeInterfaceOrientationDidChangeToOrientation:(long long)arg1 willAnimateWithDuration:(double)arg2 fromOrientation:(long long)arg3;
- (id)initWithDebugName:(id)arg1;
- (_Bool)isDisablingInterfaceOrientationChanges;
- (void)disableInterfaceOrientationChangesForReason:(id)arg1;
- (void)enableInterfaceOrientationChangesForReason:(id)arg1;
- (void)_updateInterfaceOrientationToCurrentActiveInterfaceOrientationWithDuration:(double)arg1;

@end
