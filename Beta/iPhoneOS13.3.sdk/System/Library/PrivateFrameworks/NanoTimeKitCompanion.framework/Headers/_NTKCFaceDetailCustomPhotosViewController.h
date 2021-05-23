/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UICollectionViewController.h>

@class NSArray, NSMutableIndexSet, NTKBasePhotosFaceView, NTKCompanionCustomPhotosEditor, NTKFace, UIBarButtonItem;

@protocol NTKCFaceDetailCustomPhotosViewControllerDelegate;

@interface _NTKCFaceDetailCustomPhotosViewController : UICollectionViewController

{
    UIBarButtonItem *_saveButton;
    UIBarButtonItem *_selectButton;
    UIBarButtonItem *_doneButton;
    UIBarButtonItem *_selectAllButton;
    UIBarButtonItem *_deselectAllButton;
    UIBarButtonItem *_deleteButton;
    UIBarButtonItem *_addButton;
    UIBarButtonItem *_spinnerButton;
    NSArray *_defaultToolBarItems;
    NSArray *_editingToolBarItems;
    NSMutableIndexSet *_selectedIndexes;
    _Bool _deleteConfirmed;
    _Bool _inGallery;
    _Bool _externalImagesSet;
    NTKCompanionCustomPhotosEditor *_editor;
    NTKFace *_face;
    id <NTKCFaceDetailCustomPhotosViewControllerDelegate> _delegate;
    NTKBasePhotosFaceView *_faceView;
}

@property (retain, nonatomic) NTKCompanionCustomPhotosEditor *editor;
@property (retain, nonatomic) NTKFace *face;
@property (weak, nonatomic) id <NTKCFaceDetailCustomPhotosViewControllerDelegate> delegate;
@property (nonatomic) _Bool inGallery;
@property (retain, nonatomic) NTKBasePhotosFaceView *faceView;
@property (nonatomic) _Bool externalImagesSet;

- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)_updateButtons;
- (_Bool)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)_updateTitle;
- (void)_donePressed;
- (void)_deletePressed;
- (id)initWithPhotosEditor:(id)arg1 forFace:(id)arg2 inGallery:(_Bool)arg3 faceView:(id)arg4 externalImagesSet:(_Bool)arg5;
- (void)_savePressed;
- (void)_selectPressed;
- (void)_selectAllPressed;
- (void)_addPressed;
- (void)_updateButtonsForSelectionChanged;
- (id)_currentSelectAllButton;
- (_Bool)_allPhotosSelected;
- (void)_selectAllPhotos;

@end
