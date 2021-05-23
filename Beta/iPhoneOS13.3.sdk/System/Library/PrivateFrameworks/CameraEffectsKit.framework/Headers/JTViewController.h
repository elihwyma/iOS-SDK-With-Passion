/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <UIKit/UIViewController.h>

@class JTView, NSMutableArray, NSMutableDictionary;

@interface JTViewController : UIViewController

{
    _Bool _debuggingUIEnabled;
    UIViewController *_viewControllerDrivingStatusAppearance;
    NSMutableDictionary *_suspendedChildViewControllerRequests;
    NSMutableArray *_suspendInteractionTags;
}

@property (retain, nonatomic) JTView *view;
@property (retain, nonatomic) NSMutableDictionary *suspendedChildViewControllerRequests;
@property (retain, nonatomic) NSMutableArray *suspendInteractionTags;
@property _Bool debuggingUIEnabled;
@property (retain, nonatomic) UIViewController *viewControllerDrivingStatusAppearance;

- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (_Bool)prefersHomeIndicatorAutoHidden;
- (_Bool)prefersStatusBarHidden;
- (void)logSuspendedChildViewControllersToString:(id)arg1 indentLevel:(int)arg2;
- (void)setChildViewControllerInteractionEnabledWithRequest:(id)arg1 enabled:(_Bool)arg2;
- (void)timeoutInteractionSuspended:(id)arg1;
- (void)resumeInteractionForChildViewControllersWithTag:(id)arg1;
- (void)resumeInteractionWithTag:(id)arg1;
- (void)suspendInteractionWithTag:(id)arg1;
- (void)logSuspendedViewControllers;
- (void)suspendChildViewControllersInteractionWithTag:(id)arg1 timeout:(double)arg2 excluding:(id)arg3;

@end
