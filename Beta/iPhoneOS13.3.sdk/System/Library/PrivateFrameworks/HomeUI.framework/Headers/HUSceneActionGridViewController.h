/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUServiceGridViewController.h>

@class HFActionSetBuilder, HUContainedServicesGridViewController, NSSet, NSString;

@interface HUSceneActionGridViewController : HUServiceGridViewController

{
    HFActionSetBuilder *_actionSetBuilder;
    NSSet *_blacklistedServices;
    NSSet *_whitelistedServices;
    HUContainedServicesGridViewController *_presentedServiceGroupDetailsViewController;
}

@property (weak, nonatomic) HUContainedServicesGridViewController *presentedServiceGroupDetailsViewController;
@property (nonatomic, readonly) HFActionSetBuilder *actionSetBuilder;
@property (copy, nonatomic) NSSet *blacklistedServices;
@property (copy, nonatomic) NSSet *whitelistedServices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLoad;
- (id)initWithActionSetBuilder:(id)arg1;
- (void)actionSetValueSource:(id)arg1 didUpdateValuesForActionBuilders:(id)arg2;
- (void)configureCell:(id)arg1 forItem:(id)arg2;
- (_Bool)presentationCoordinator:(id)arg1 shouldBeginInteractivePresentationWithTouchLocation:(struct CGPoint)arg2;
- (_Bool)presentationCoordinator:(id)arg1 shouldBeginPresentationWithContext:(id)arg2;
- (_Bool)hasDetailsActionForPresentationCoordinator:(id)arg1 item:(id)arg2;
- (id)detailsViewControllerForPresentationCoordinator:(id)arg1 item:(id)arg2;
- (id)initWithItemManager:(id)arg1;
- (id)layoutOptionsForSection:(long long)arg1;
- (_Bool)hasDetailsActionForContainedServiceGridViewController:(id)arg1 item:(id)arg2;
- (id)detailsViewControllerForContainedServiceGridViewController:(id)arg1 item:(id)arg2;
- (void)_removeActionsInServiceActionItem:(id)arg1;
- (void)serviceActionControlsViewController:(id)arg1 removeServiceActionItem:(id)arg2;

@end
