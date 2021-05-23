/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUQuickControlViewController.h>

@class HFChildServiceControlItem, HUQuickControlCollectionViewController;

@interface HUQuickControlChildServiceGridViewController : HUQuickControlViewController

{
    HUQuickControlCollectionViewController *_collectionViewController;
}

@property (nonatomic, readonly) HUQuickControlCollectionViewController *collectionViewController;
@property (nonatomic, readonly) HFChildServiceControlItem *controlItem;

+ (id)controlItemPredicate;

- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (id)initWithControlItems:(id)arg1 home:(id)arg2 itemUpdater:(id)arg3;
- (id)childQuickControlContentViewControllers;
- (id)hu_preloadContent;
- (id)initWithChildServiceControlItem:(id)arg1 home:(id)arg2 itemUpdater:(id)arg3;
- (void)_subclass_configureQuickControlViewController:(id)arg1;

@end
