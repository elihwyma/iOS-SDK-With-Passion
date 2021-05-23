/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKCFaceDetailEditOptionVerticalSectionController.h>

@class NSArray, NSString, NTKBasePhotosFaceView, NTKCompanionCustomPhotosEditor, NTKCompanionMemoriesEditor, NTKCompanionSyncedAlbumEditor, NTKCompanionTransientCustomPhotosEditor, UIViewController;

@protocol NTKCFaceDetailPhotosSectionDelegate;

@interface NTKCFaceDetailPhotosSectionController : NTKCFaceDetailEditOptionVerticalSectionController

{
    _Bool _canDeleteCustomPhotos;
    unsigned long long _currentContent;
    UIViewController *_parentViewController;
    NTKCompanionCustomPhotosEditor *_customPhotosEditor;
    NTKCompanionSyncedAlbumEditor *_syncedAlbumEditor;
    NTKCompanionMemoriesEditor *_memoriesEditor;
    NTKCompanionTransientCustomPhotosEditor *_transientEditor;
    NSArray *_externalAssets;
}

@property (retain, nonatomic) NTKBasePhotosFaceView *faceView;
@property (retain, nonatomic) NTKCompanionCustomPhotosEditor *customPhotosEditor;
@property (retain, nonatomic) NTKCompanionSyncedAlbumEditor *syncedAlbumEditor;
@property (retain, nonatomic) NTKCompanionMemoriesEditor *memoriesEditor;
@property (retain, nonatomic) NTKCompanionTransientCustomPhotosEditor *transientEditor;
@property (retain, nonatomic) NSArray *externalAssets;
@property (weak, nonatomic) UIViewController *parentViewController;
@property (weak, nonatomic) id <NTKCFaceDetailPhotosSectionDelegate> delegate;
@property (nonatomic, readonly) _Bool hasChanges;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)hasPhotosSectionForFace:(id)arg1 forEditMode:(long long)arg2;

- (id)_currentEditor;
- (void)setSelectedOptions:(id)arg1;
- (void)faceDidChange;
- (void)faceDidChangeResourceDirectory;
- (id)initWithTableViewController:(id)arg1 face:(id)arg2 inGallery:(_Bool)arg3 editOptionCollection:(id)arg4 faceView:(id)arg5 externalAssets:(id)arg6;
- (_Bool)canAddFace;
- (void)saveChangesWithCompletion:(CDUnknownBlockType)arg1;
- (id)_actionNameForOption:(id)arg1;
- (void)_customizeActionRow:(id)arg1 withEditOption:(id)arg2;
- (_Bool)_canDisplayActionRowForCustomEditMode:(long long)arg1 andOption:(id)arg2;
- (_Bool)_handleDidSelectOption:(id)arg1;
- (_Bool)_handleDidSelectActionRowForOption:(id)arg1;
- (id)_overrideTextForOption:(id)arg1;
- (void)_updatePhotosSection;
- (void)_setPhotos:(id)arg1;
- (void)customPhotosControllerDidFinish:(id)arg1;

@end
