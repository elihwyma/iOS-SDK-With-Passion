/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUItemTableModuleController.h>

@class HUAccessorySettingsProfileModule, NSString;

@protocol HUAccessorySettingsProfileModuleControllerDelegate;

@interface HUAccessorySettingsProfileModuleController : HUItemTableModuleController

{
    id <HUAccessorySettingsProfileModuleControllerDelegate> _delegate;
}

@property (nonatomic, readonly) HUAccessorySettingsProfileModule *module;
@property (weak, nonatomic) id <HUAccessorySettingsProfileModuleControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithModule:(id)arg1;
- (void)profileViewControllerDidSelectRemoveProfile:(id)arg1;
- (unsigned long long)didSelectItem:(id)arg1;
- (Class)cellClassForItem:(id)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2;

@end
