/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKCFaceDetailEditOptionHorizontalSectionController.h>

@class NSString, NTKCompanionKaleidoscopeEditor, UIImagePickerController, UIViewController;

@protocol NTKCFaceDetailEditOptionSectionDelegate;

@interface NTKCFaceDetailKaleidoscopeContentSectionController : NTKCFaceDetailEditOptionHorizontalSectionController

{
    NTKCompanionKaleidoscopeEditor *_editor;
    UIImagePickerController *_presentedPicker;
    _Bool _externalAssetSet;
    id <NTKCFaceDetailEditOptionSectionDelegate> delegate;
    UIViewController *_parentViewController;
}

@property (weak, nonatomic) UIViewController *parentViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)hasSectionForFace:(id)arg1 forEditMode:(long long)arg2;
+ (_Bool)supressesSectionForExternalAssets:(id)arg1;

- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)_presentPhotoPicker;
- (void)setSelectedOptions:(id)arg1;
- (_Bool)collectionChanged:(id)arg1 withSelectedOptions:(id)arg2;
- (void)kaleidoscopeEditOptionCellDidSelectUserOption:(id)arg1;
- (id)initWithTableViewController:(id)arg1 face:(id)arg2 inGallery:(_Bool)arg3 editOptionCollection:(id)arg4 faceView:(id)arg5;
- (void)setExternalAsset:(id)arg1;
- (void)_customizeActionRow:(id)arg1 withEditOption:(id)arg2;
- (_Bool)_canDisplayActionRowForCustomEditMode:(long long)arg1 andOption:(id)arg2;
- (_Bool)_handleDidSelectActionRowForOption:(id)arg1;
- (Class)editCellClass;
- (void)_setPhotoFromDictionary:(id)arg1;
- (void)_setPhotoFromAsset:(id)arg1;
- (void)_setRawPhoto:(id)arg1;
- (void)_finalizeEditor;

@end
