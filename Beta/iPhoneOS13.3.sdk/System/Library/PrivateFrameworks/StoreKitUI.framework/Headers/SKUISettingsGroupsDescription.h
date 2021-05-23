/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSMapTable, NSString, SKUIClientContext, SKUISettingsContext, SKUISettingsObjectStore;

@protocol SKUISettingsGroupsDescriptionDelegate;

__attribute__((visibility("hidden")))
@interface SKUISettingsGroupsDescription : NSObject

{
    NSMapTable *_controllers;
    SKUISettingsObjectStore *_groupDescriptions;
    SKUISettingsContext *_settingsContext;
    SKUIClientContext *_clientContext;
    id <SKUISettingsGroupsDescriptionDelegate> _delegate;
}

@property (weak, nonatomic) SKUIClientContext *clientContext;
@property (weak, nonatomic) id <SKUISettingsGroupsDescriptionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)recycle;
- (void)reloadData;
- (void)_presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (unsigned long long)numberOfGroups;
- (void)_dismissViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dispatchUpdate:(id)arg1;
- (void)_updatedEditsValid;
- (void)deleteSettingsGroupDescription:(id)arg1;
- (void)hideSettingsGroupDescription:(id)arg1;
- (unsigned long long)indexOfSettingsGroupDescription:(id)arg1;
- (void)revealSettingsGroupDescription:(id)arg1;
- (_Bool)hasEditableSettingDescriptions;
- (void)requestLayoutForWidth:(double)arg1 context:(id)arg2;
- (id)owningViewControllerForSettingsGroupController:(id)arg1;
- (id)settingDescriptionAtIndexPath:(id)arg1;
- (unsigned long long)numberOfSettingsInGroupAtIndex:(unsigned long long)arg1;
- (id)footerDescriptionForGroupAtIndex:(unsigned long long)arg1;
- (_Bool)shouldShowHeaderForGroupAtIndex:(unsigned long long)arg1;
- (id)headerDescriptionForGroupAtIndex:(unsigned long long)arg1;
- (_Bool)shouldShowFooterForGroupAtIndex:(unsigned long long)arg1;
- (id)createEditTransaction;
- (id)initWithDelegate:(id)arg1 settingsContext:(id)arg2;
- (void)addSettingsGroupWithViewElement:(id)arg1;
- (void)settingsGroupController:(id)arg1 reloadSettingDescription:(id)arg2;
- (id)settingsGroupController:(id)arg1 viewForSettingDescription:(id)arg2;
- (void)_addSettingsGroupWithViewElement:(id)arg1 controller:(id)arg2;
- (id)_gatherEditableSettings;
- (void)_dispatchUpdateForSettingsGroupDescription:(id)arg1 atIndex:(unsigned long long)arg2 withUpdateType:(long long)arg3;
- (id)_controllerForGroupElement:(id)arg1;
- (void)deleteSettingAtIndexPath:(id)arg1;
- (id)viewElementForSettingAtIndexPath:(id)arg1;

@end
