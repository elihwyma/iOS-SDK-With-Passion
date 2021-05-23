/*
 Image: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
 */

#import <SpotlightUI/SPUISpotlightRemoteViewController.h>

@class SPUISpotlightSearchBarView;

@protocol SPUISearchBarDelegate;

@interface SPUISearchBarController : SPUISpotlightRemoteViewController

{
    _Bool _roundedCornerVisible;
    id <SPUISearchBarDelegate> _delegate;
    double _heightOfBar;
}

@property (retain) SPUISpotlightSearchBarView *view;
@property double heightOfBar;
@property (weak, nonatomic) id <SPUISearchBarDelegate> delegate;
@property (nonatomic) _Bool roundedCornerVisible;

+ (id)todayViewSearchBar;
+ (id)notificationCenterSearchBar;

- (void)loadView;
- (void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;
- (id)backgroundBlurView;
- (void)setBlurProgress:(double)arg1 animated:(_Bool)arg2;
- (void)updateSceneSettingsWithBlock:(CDUnknownBlockType)arg1;
- (void)didInvalidateSceneWhenForeground;
- (id)sceneSpecification;
- (struct CGSize)initialFittingSize;
- (_Bool)setSceneFrameOnRotation;

@end
