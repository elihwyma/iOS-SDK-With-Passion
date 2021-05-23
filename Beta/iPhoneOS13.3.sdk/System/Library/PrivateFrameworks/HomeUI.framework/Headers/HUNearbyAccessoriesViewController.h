/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUServiceGridViewController.h>

@class HMAccessory, HUNearbyAccessoriesItemManager, NSArray, UILabel;

@protocol HUNearbyAccessoriesViewControllerDelegate;

@interface HUNearbyAccessoriesViewController : HUServiceGridViewController

{
    _Bool _supportsQuickControls;
    id <HUNearbyAccessoriesViewControllerDelegate> _nearbyAccessoriesDelegate;
    HMAccessory *_currentAccessory;
    UILabel *_userInfoHeading;
    UILabel *_userInfoDescription;
    NSArray *_userInfoConstraints;
}

@property (retain, nonatomic) HMAccessory *currentAccessory;
@property (nonatomic, readonly) HUNearbyAccessoriesItemManager *itemManager;
@property (retain, nonatomic) UILabel *userInfoHeading;
@property (retain, nonatomic) UILabel *userInfoDescription;
@property (retain, nonatomic) NSArray *userInfoConstraints;
@property (nonatomic) _Bool supportsQuickControls;
@property (weak, nonatomic) id <HUNearbyAccessoriesViewControllerDelegate> nearbyAccessoriesDelegate;

- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)updateViewConstraints;
- (void)doneButtonPressed:(id)arg1;
- (void)itemManager:(id)arg1 didUpdateResultsForSourceItem:(id)arg2;
- (void)configureCell:(id)arg1 forItem:(id)arg2;
- (_Bool)presentationCoordinator:(id)arg1 shouldBeginPresentationWithContext:(id)arg2;
- (id)layoutOptionsForSection:(long long)arg1;
- (_Bool)presentationCoordinatorShouldProvideCancellationFeedback:(id)arg1;
- (id)initWithSourceItem:(id)arg1 supportsQuickControls:(_Bool)arg2;

@end
