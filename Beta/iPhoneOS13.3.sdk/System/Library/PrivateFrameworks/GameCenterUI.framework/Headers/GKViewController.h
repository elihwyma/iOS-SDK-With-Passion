/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UIViewController.h>

@class GKColorPalette;

@interface GKViewController : UIViewController

{
    _Bool _shouldUpdateContentOnlyWhenAuthenticated;
    GKViewController *_rootViewController;
    GKColorPalette *_colorPalette;
    long long _gkFocusBubbleType;
}

@property (nonatomic) long long gkFocusBubbleType;
@property (retain, nonatomic) GKColorPalette *colorPalette;
@property (nonatomic) _Bool shouldUpdateContentOnlyWhenAuthenticated;
@property (retain, nonatomic) GKViewController *rootViewController;

+ (_Bool)_shouldForwardViewWillTransitionToSize;

- (void)dealloc;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)popToRootViewControllerAnimated:(_Bool)arg1;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (_Bool)displayUsingSplitNavigationBar;

@end
