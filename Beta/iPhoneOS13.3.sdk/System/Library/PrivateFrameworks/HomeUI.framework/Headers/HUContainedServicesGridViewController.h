/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUServiceGridViewController.h>

@class HFItem, NSString;

@protocol HUContainedServiceGridViewControllerDelegate, HUPresentationDelegate, HUServiceContainerItem><NSCopying;

@interface HUContainedServicesGridViewController : HUServiceGridViewController

{
    _Bool _requiresPresentingViewControllerDismissal;
    _Bool _presentedModally;
    id <HUPresentationDelegate> _presentationDelegate;
    HFItem<HUServiceContainerItem><NSCopying> *_serviceContainerItem;
    id <HUContainedServiceGridViewControllerDelegate> _serviceGridDelegate;
}

@property (nonatomic, getter=isPresentedModally) _Bool presentedModally;
@property (copy, nonatomic, readonly) HFItem<HUServiceContainerItem><NSCopying> *serviceContainerItem;
@property (weak, nonatomic) id <HUContainedServiceGridViewControllerDelegate> serviceGridDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <HUPresentationDelegate> presentationDelegate;
@property (nonatomic) _Bool requiresPresentingViewControllerDismissal;

- (void)viewDidLoad;
- (void)_done:(id)arg1;
- (void)itemManager:(id)arg1 performUpdateRequest:(id)arg2;
- (_Bool)hasDetailsActionForPresentationCoordinator:(id)arg1 item:(id)arg2;
- (id)detailsViewControllerForPresentationCoordinator:(id)arg1 item:(id)arg2;
- (void)_edit:(id)arg1;
- (id)finishPresentation:(id)arg1 animated:(_Bool)arg2;
- (id)initWithServiceContainerItem:(id)arg1 isPresentedModally:(_Bool)arg2 valueSource:(id)arg3;
- (id)initWithItemManager:(id)arg1;
- (id)layoutOptionsForSection:(long long)arg1;
- (void)_updateRightBarButtons;
- (id)initWithServiceContainerItem:(id)arg1;

@end
