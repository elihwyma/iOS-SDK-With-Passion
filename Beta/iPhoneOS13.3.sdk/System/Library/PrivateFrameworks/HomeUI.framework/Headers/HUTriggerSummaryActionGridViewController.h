/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUServiceGridViewController.h>

@class HFTriggerBuilder, HUContainedServicesGridViewController, HUServiceGridItemManager, NSString;

@protocol HUTriggerSummaryActionGridViewControllerDelegate;

@interface HUTriggerSummaryActionGridViewController : HUServiceGridViewController

{
    HFTriggerBuilder *_triggerBuilder;
    unsigned long long _style;
    HUServiceGridItemManager *_serviceGridItemManager;
    HUContainedServicesGridViewController *_presentedServiceGroupDetailsViewController;
}

@property (weak, nonatomic) HUServiceGridItemManager *serviceGridItemManager;
@property (weak, nonatomic) HUContainedServicesGridViewController *presentedServiceGroupDetailsViewController;
@property (nonatomic, readonly) HFTriggerBuilder *triggerBuilder;
@property (weak, nonatomic) id <HUTriggerSummaryActionGridViewControllerDelegate> delegate;
@property (nonatomic, readonly) unsigned long long style;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (CDUnknownBlockType)_actionSetItemProviderFilterForTriggerBuilder:(id)arg1;

- (void)viewDidLoad;
- (void)reloadActions;
- (void)actionSetValueSource:(id)arg1 didUpdateValuesForActionBuilders:(id)arg2;
- (void)configureCell:(id)arg1 forItem:(id)arg2;
- (_Bool)presentationCoordinator:(id)arg1 shouldBeginInteractivePresentationWithTouchLocation:(struct CGPoint)arg2;
- (_Bool)presentationCoordinator:(id)arg1 shouldBeginPresentationWithContext:(id)arg2;
- (_Bool)hasDetailsActionForPresentationCoordinator:(id)arg1 item:(id)arg2;
- (id)detailsViewControllerForPresentationCoordinator:(id)arg1 item:(id)arg2;
- (id)initWithItemManager:(id)arg1;
- (_Bool)hasDetailsActionForContainedServiceGridViewController:(id)arg1 item:(id)arg2;
- (id)detailsViewControllerForContainedServiceGridViewController:(id)arg1 item:(id)arg2;
- (_Bool)_hasTapActionForItem:(id)arg1;
- (id)initWithTriggerBuilder:(id)arg1 withStyle:(unsigned long long)arg2;
- (void)_removeActionsInServiceActionItem:(id)arg1;
- (void)serviceActionControlsViewController:(id)arg1 removeServiceActionItem:(id)arg2;
- (void)sceneEditor:(id)arg1 removeActionSetBuilderFromTrigger:(id)arg2;

@end
