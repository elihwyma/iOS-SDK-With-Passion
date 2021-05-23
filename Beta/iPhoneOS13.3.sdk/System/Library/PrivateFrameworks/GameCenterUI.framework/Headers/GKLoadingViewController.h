/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UIViewController.h>

@class GKLoadableContentStateMachine, NSArray, NSString, UIActivityIndicatorView;

@interface GKLoadingViewController : UIViewController

{
    NSArray *_viewsToHideWhileLoading;
    double _loadingIndicatorDelay;
    GKLoadableContentStateMachine *_loadingMachine;
    UIActivityIndicatorView *_activityIndicator;
}

@property (retain, nonatomic) GKLoadableContentStateMachine *loadingMachine;
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (retain, nonatomic) NSString *loadingState;
@property (retain, nonatomic) NSArray *viewsToHideWhileLoading;
@property (nonatomic) double loadingIndicatorDelay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)showLoadingIndicator;
- (void)didEnterLoadingState;
- (void)didExitLoadingState;
- (void)didEnterLoadedState;
- (void)didExitLoadedState;
- (void)didEnterRefreshingState;
- (void)didExitRefreshingState;
- (void)setViewsToHideHidden:(_Bool)arg1;

@end
