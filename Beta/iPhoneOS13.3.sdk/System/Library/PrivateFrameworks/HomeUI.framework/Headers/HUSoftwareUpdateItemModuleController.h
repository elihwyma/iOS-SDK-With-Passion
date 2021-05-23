/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUItemTableModuleController.h>

@class HUSoftwareUpdateItemModule, NSString;

@protocol HUSoftwareUpdateItemModuleControllerDelegate;

@interface HUSoftwareUpdateItemModuleController : HUItemTableModuleController

{
    id <HUSoftwareUpdateItemModuleControllerDelegate> _delegate;
}

@property (nonatomic, readonly) HUSoftwareUpdateItemModule *module;
@property (weak, nonatomic, readonly) id <HUSoftwareUpdateItemModuleControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithModule:(id)arg1;
- (_Bool)canSelectItem:(id)arg1;
- (unsigned long long)didSelectItem:(id)arg1;
- (Class)cellClassForItem:(id)arg1;
- (void)updateCell:(id)arg1 forItem:(id)arg2 animated:(_Bool)arg3;
- (id)softwareUpdateUIManager:(id)arg1 dismissViewController:(id)arg2;
- (id)softwareUpdateUIManager:(id)arg1 presentViewController:(id)arg2;
- (id)initWithModule:(id)arg1 delegate:(id)arg2;
- (void)_startUpdateOnAccessories:(id)arg1;

@end
