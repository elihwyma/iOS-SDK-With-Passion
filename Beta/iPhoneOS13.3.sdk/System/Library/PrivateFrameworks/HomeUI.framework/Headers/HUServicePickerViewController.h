/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUSelectableServiceGridViewController.h>

@class NSSet;

@protocol HUServicePickerViewControllerDelegate;

@interface HUServicePickerViewController : HUSelectableServiceGridViewController

{
    _Bool _isPresentedModally;
    NSSet *_preselectedServices;
}

@property (weak, nonatomic) id <HUServicePickerViewControllerDelegate> delegate;
@property (nonatomic) _Bool isPresentedModally;
@property (retain, nonatomic) NSSet *preselectedServices;

- (void)viewDidLoad;
- (void)_cancel:(id)arg1;
- (void)_done:(id)arg1;
- (void)itemManager:(id)arg1 performUpdateRequest:(id)arg2;
- (id)initWithHome:(id)arg1 selectedServices:(id)arg2 isPresentedModally:(_Bool)arg3 delegate:(id)arg4;
- (_Bool)serviceGridItemManager:(id)arg1 shouldHideItem:(id)arg2;
- (void)_setUpNavButtons;
- (id)_servicesForItems:(id)arg1;
- (id)_servicesForItem:(id)arg1;
- (_Bool)_isItemPreselected:(id)arg1;
- (_Bool)_preselectedServicesContainsService:(id)arg1;
- (id)initWithHome:(id)arg1 isPresentedModally:(_Bool)arg2 delegate:(id)arg3;

@end
