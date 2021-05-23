/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBWindow.h>

@class NSArray;

@interface SBPIPWindow : SBWindow

@property (nonatomic, readonly) NSArray *containerViewControllers;

- (id)init;
- (_Bool)isActive;
- (void)setRootViewController:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (long long)interfaceOrientationForContainerViewController:(id)arg1;
- (id)_pipWindowRootVC;
- (void)addContainerViewController:(id)arg1;
- (void)removeContainerViewController:(id)arg1;

@end
