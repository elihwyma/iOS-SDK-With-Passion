/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, SKUIClientContext, SKUIGroupViewElement, SKUISettingsContext, SKUISettingsGroupController, SKUISettingsGroupsDescription, SKUISettingsHeaderFooterDescription, SKUISettingsObjectStore;

__attribute__((visibility("hidden")))
@interface SKUISettingsGroupDescription : NSObject

{
    NSMutableSet *_editableSettings;
    SKUISettingsHeaderFooterDescription *_footerDescription;
    SKUISettingsHeaderFooterDescription *_headerDescription;
    SKUISettingsObjectStore *_settingDescriptions;
    SKUISettingsContext *_settingsContext;
    SKUISettingsGroupController *_controller;
    SKUISettingsGroupsDescription *_parent;
    SKUIGroupViewElement *_viewElement;
}

@property (nonatomic, readonly) SKUIClientContext *clientContext;
@property (weak, nonatomic) SKUISettingsGroupController *controller;
@property (weak, nonatomic) SKUISettingsGroupsDescription *parent;
@property (retain, nonatomic) SKUIGroupViewElement *viewElement;

- (id)description;
- (_Bool)isEmpty;
- (unsigned long long)index;
- (void)recycle;
- (void)reloadData;
- (void)_presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)hasHeader;
- (id)indexPathForSettingDescription:(id)arg1;
- (void)deleteSettingDescription:(id)arg1;
- (void)_dismissViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dispatchUpdate:(id)arg1;
- (void)hideSettingDescription:(id)arg1;
- (_Bool)isSettingDescriptionHidden:(id)arg1;
- (void)reloadSettingDescription:(id)arg1;
- (void)revealSettingDescription:(id)arg1;
- (void)_updatedEditsValid;
- (void)addSettingDescription:(id)arg1;
- (void)deleteSettingsGroup;
- (void)hideSettingsGroup;
- (void)_dispatchUpdateForSettingDescription:(id)arg1 updateType:(long long)arg2;
- (_Bool)hasFooter;
- (void)revealSettingsGroup;
- (id)settingDescriptionAtIndex:(unsigned long long)arg1;
- (id)initWithParent:(id)arg1 settingsContext:(id)arg2;
- (void)addSettingViewElement:(id)arg1;
- (void)addSibling:(id)arg1;
- (id)editableSettingDescriptions;
- (id)footerDescription;
- (_Bool)hasEditableSettingDescriptions;
- (_Bool)hasNoVisibleSettings;
- (id)headerDescription;
- (id)newSiblingWithClass:(Class)arg1;
- (unsigned long long)numberOfSettings;
- (void)requestLayoutForWidth:(double)arg1 context:(id)arg2;
- (void)setFooterDescription:(id)arg1;
- (void)setFooterViewElement:(id)arg1;
- (void)setHeaderDescription:(id)arg1;
- (void)setHeaderViewElement:(id)arg1;
- (id)viewElementForSettingAtIndex:(unsigned long long)arg1;

@end
