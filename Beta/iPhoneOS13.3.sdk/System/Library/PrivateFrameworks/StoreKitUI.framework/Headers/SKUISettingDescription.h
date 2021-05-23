/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class SKUISettingsGroupDescription, SKUIViewElement;

__attribute__((visibility("hidden")))
@interface SKUISettingDescription : NSObject

{
    SKUIViewElement *_viewElement;
    _Bool _editsValid;
    SKUISettingsGroupDescription *_parent;
}

@property (nonatomic, readonly) _Bool allowsSelection;
@property (weak, nonatomic) SKUISettingsGroupDescription *parent;
@property (nonatomic, readonly) _Bool editsValid;
@property (retain, nonatomic) SKUIViewElement *viewElement;

+ (_Bool)allowsEdit;
+ (Class)_viewClassForSettingDescription:(id)arg1;
+ (Class)viewClassForSettingDescription:(id)arg1;

- (void)beginEditing;
- (id)indexPath;
- (_Bool)_isHidden;
- (void)reloadData;
- (void)_presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)_initiallyHidden;
- (void)_dismissViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithViewElement:(id)arg1 parent:(id)arg2;
- (void)cancelEdits;
- (_Bool)commitEdits:(CDUnknownBlockType)arg1;
- (void)discardEdits;
- (void)handleSelectionOnCompletion:(CDUnknownBlockType)arg1;
- (void)reloadWithViewElement:(id)arg1 parent:(id)arg2;
- (void)_deleteSetting;
- (void)_dispatchUpdate:(id)arg1;
- (void)_hideSetting;
- (void)_reloadSetting;
- (void)_revealSetting;
- (void)_setEditsValid:(_Bool)arg1;

@end
