/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUISettingDescription.h>

@class NSOperationQueue, NSRegularExpression, NSString, SKUISettingValueStore, UIImage;

__attribute__((visibility("hidden")))
@interface SKUIEditProfileSettingDescription : SKUISettingDescription

{
    CDUnknownBlockType _commitBlock;
    _Bool _editing;
    NSOperationQueue *_operationQueue;
    NSRegularExpression *_handleValidation;
    _Bool _suggestedHandlesDisplayed;
    SKUISettingValueStore *_valueStore;
    _Bool _handleValid;
}

@property (nonatomic, readonly, getter=isEditing) _Bool editing;
@property (copy, nonatomic) NSString *handle;
@property (nonatomic, readonly, getter=isHandleValid) _Bool handleValid;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic, readonly) UIImage *photo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)allowsEdit;
+ (Class)_viewClassForSettingDescription:(id)arg1;

- (void)dealloc;
- (void)beginEditing;
- (void)_reloadData;
- (_Bool)allowsSelection;
- (id)_valueStore;
- (void)_updateValidity;
- (id)initWithViewElement:(id)arg1 parent:(id)arg2;
- (void)cancelEdits;
- (_Bool)commitEdits:(CDUnknownBlockType)arg1;
- (void)discardEdits;
- (void)_fetchAccountInfo;
- (void)_fetchProfilePhoto;
- (void)profileImagePicker:(id)arg1 didPickProfileImage:(id)arg2 withCropRect:(id)arg3;
- (void)profileImagePickerDidCancel:(id)arg1;
- (void)_authenticateOnCompletion:(CDUnknownBlockType)arg1;
- (void)suggestedHandlesSettingsHeaderFooterDescription:(id)arg1 didSelectSuggestedHandle:(id)arg2;
- (void)chooseNewProfilePhoto;
- (void)setPhoto:(id)arg1 withCropRect:(struct CGRect)arg2;
- (void)_enterEditMode;
- (void)_uploadProfileImage:(id)arg1;
- (void)_updateAccountInfo;
- (void)_finalizeCommitWithSuccess:(_Bool)arg1 error:(id)arg2;
- (void)_leaveEditMode;
- (void)_displayFooter:(id)arg1;
- (void)_displayRules:(_Bool)arg1;
- (void)_displaySuggestedHandles:(id)arg1;
- (void)_fetchSuggestedHandles;
- (void)_hideFooter;
- (_Bool)_validateName:(id)arg1;
- (_Bool)_validateHandle:(id)arg1;
- (void)_hideSuggestedHandles;

@end
