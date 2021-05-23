/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUQuickControlViewController.h>

@class MRPlatterViewController, NSArray, NSString;

@interface HUQuickControlMediaPlayerViewController : HUQuickControlViewController

{
    MRPlatterViewController *_mediaControlViewController;
    NSArray *_mediaControlViewControllerConstraints;
    NSString *_mediaRoutingIdentifier;
    long long _mediaAccessoryItemType;
}

@property (retain, nonatomic) MRPlatterViewController *mediaControlViewController;
@property (retain, nonatomic) NSArray *mediaControlViewControllerConstraints;
@property (retain, nonatomic) NSString *mediaRoutingIdentifier;
@property (nonatomic, readonly) long long mediaAccessoryItemType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)controlItemPredicate;
+ (Class)controlItemClass;

- (id)title;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (void)_updateConstraints;
- (void)platterViewController:(id)arg1 didReceiveInteractionEvent:(id)arg2;
- (id)initWithControlItems:(id)arg1 home:(id)arg2 itemUpdater:(id)arg3;
- (void)setPreferredFrameLayoutGuide:(id)arg1;
- (_Bool)hasSingleControlView;
- (void)_addMediaControlView;
- (void)_updateMediaControlAppearanceForTraitCollection:(id)arg1;
- (void)platterViewController:(id)arg1 didUpdateEndpointWithReason:(id)arg2;

@end
