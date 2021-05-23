/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKViewController.h>

@class GKLoadableContentStateMachine, NSArray, NSString, UIActivityIndicatorView;

@interface GKLoadableContentViewController : GKViewController

{
    UIActivityIndicatorView *_activityIndicator;
    NSArray *_viewsToHideWhileLoading;
    double _loadingIndicatorDelay;
    GKLoadableContentStateMachine *_loadingMachine;
}

@property (retain, nonatomic) GKLoadableContentStateMachine *loadingMachine;
@property (retain, nonatomic) NSString *loadingState;
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (retain, nonatomic) NSArray *viewsToHideWhileLoading;
@property (nonatomic) double loadingIndicatorDelay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)didEnterLoadingState;
- (void)didExitLoadingState;
- (void)didEnterLoadedState;
- (void)didExitLoadedState;

@end
