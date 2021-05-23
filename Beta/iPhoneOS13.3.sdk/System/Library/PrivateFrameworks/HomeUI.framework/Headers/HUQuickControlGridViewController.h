/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUQuickControlViewController.h>

@class HUQuickControlCollectionViewController;

@interface HUQuickControlGridViewController : HUQuickControlViewController

{
    HUQuickControlCollectionViewController *_collectionViewController;
}

@property (nonatomic, readonly) HUQuickControlCollectionViewController *collectionViewController;

+ (id)controlItemPredicate;

- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (id)initWithControlItems:(id)arg1 home:(id)arg2 itemUpdater:(id)arg3;
- (id)childQuickControlContentViewControllers;
- (id)hu_preloadContent;
- (void)_subclass_configureQuickControlViewController:(id)arg1;

@end
