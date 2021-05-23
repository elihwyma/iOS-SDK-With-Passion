/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUItemTableModuleController.h>

@class HFNamingComponents, HUNameItemModule, NSString;

@interface HUNameItemModuleController : HUItemTableModuleController

{
    _Bool _nameFieldHasClearButton;
    _Bool _showIcon;
    _Bool _shouldUseAccessoryName;
    HUNameItemModule *_nameModule;
    HFNamingComponents *_namingComponent;
}

@property (retain, nonatomic) HUNameItemModule *nameModule;
@property (nonatomic, readonly) _Bool supportsCustomIconEditing;
@property (retain, nonatomic) HFNamingComponents *namingComponent;
@property (nonatomic) _Bool nameFieldHasClearButton;
@property (nonatomic) _Bool showIcon;
@property (nonatomic) _Bool shouldUseAccessoryName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)prepareForCommit;
- (void)_setBuilderName:(id)arg1;
- (id)_builderName;
- (void)_cleanupTextFieldSetBuilderName;
- (void)nameAndIconEditorCellDidTapIcon:(id)arg1;
- (void)iconPickerDidCancel:(id)arg1;
- (void)iconPicker:(id)arg1 didPickIconDescriptor:(id)arg2;
- (id)initWithModule:(id)arg1 host:(id)arg2;
- (Class)cellClassForItem:(id)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 animated:(_Bool)arg3;
- (_Bool)shouldManageTextFieldForItem:(id)arg1;
- (id)placeholderTextForTextField:(id)arg1 item:(id)arg2;
- (id)currentTextForTextField:(id)arg1 item:(id)arg2;
- (void)textDidChange:(id)arg1 forTextField:(id)arg2 item:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1 item:(id)arg2;
- (void)cancelNameEdit;

@end
