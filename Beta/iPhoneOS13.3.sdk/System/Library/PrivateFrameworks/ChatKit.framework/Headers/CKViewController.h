/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UIViewController.h>

@interface CKViewController : UIViewController

{
    _Bool _appeared;
    _Bool _deferredAppeared;
    _Bool _appearing;
    _Bool _dissapearing;
}

@property (nonatomic) _Bool appeared;
@property (nonatomic) _Bool deferredAppeared;
@property (nonatomic) _Bool appearing;
@property (nonatomic) _Bool dissapearing;

- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)significantTimeChange;
- (void)systemApplicationWillEnterForeground;
- (void)viewDidAppearDeferredSetup;
- (void)prepareForResume;
- (void)prepareForSuspend;
- (void)parentControllerDidResume:(_Bool)arg1 animating:(_Bool)arg2;
- (void)parentControllerDidBecomeActive;
- (void)performResumeDeferredSetup;
- (void)childViewControllersPerform:(SEL)arg1;

@end
