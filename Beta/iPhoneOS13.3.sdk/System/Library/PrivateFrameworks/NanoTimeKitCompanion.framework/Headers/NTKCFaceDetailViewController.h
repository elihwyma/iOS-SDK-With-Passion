/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UIViewController.h>

#import <NanoTimeKitCompanion/Swift-Protocol.h>

@class NSArray, NSMutableArray, NSString, NTKCFaceContainerView, NTKCFaceDetailDescriptionSectionController, NTKCFaceDetailKaleidoscopeContentSectionController, NTKCFaceDetailKaleidoscopeStyleSectionController, NTKCFaceDetailOtherSectionController, NTKCFaceDetailPhotosSectionController, NTKCompanionFaceViewController, NTKFace, NTKFaceCollection, UIActivityIndicatorView, UILabel, UITableView, UITableViewCell, UIView, _NTKCDetailActionButton, _NTKCDetailHeaderView;

@protocol NTKCFaceDetailViewControllerDelegate;

@interface NTKCFaceDetailViewController : UIViewController <Swift>

{
    _Bool _shared;
    _Bool _inGallery;
    _Bool _faceHasBeenEdited;
    NTKFace *_face;
    id <NTKCFaceDetailViewControllerDelegate> _delegate;
    NTKFaceCollection *_library;
    NTKCompanionFaceViewController *_faceVC;
    NSArray *_externalAssets;
    double _intrinsicHeaderHeight;
    _NTKCDetailHeaderView *_headerView;
    UILabel *_faceName;
    _NTKCDetailActionButton *_addButton;
    UIActivityIndicatorView *_addSpinner;
    UIView *_headerSeparator;
    UITableView *_tableView;
    NSMutableArray *_currentSections;
    NTKCFaceDetailDescriptionSectionController *_descriptionSection;
    NSMutableArray *_editOptionSections;
    NTKCFaceDetailPhotosSectionController *_photosSection;
    NTKCFaceDetailKaleidoscopeContentSectionController *_kaleidoscopeContentSection;
    NTKCFaceDetailKaleidoscopeStyleSectionController *_kaleidoscopeStyleSection;
    NTKCFaceDetailOtherSectionController *_otherSection;
    CDUnknownBlockType _selectionFinishedHandler;
    UITableViewCell *_editOptionToMakeFullyVisible;
    NTKCFaceContainerView *_faceContainer;
    struct CGSize _headerFaceSize;
}

@property (retain, nonatomic) NTKFaceCollection *library;
@property (retain, nonatomic) NTKFace *face;
@property (retain, nonatomic) NTKCompanionFaceViewController *faceVC;
@property (nonatomic) struct CGSize headerFaceSize;
@property (nonatomic) _Bool inGallery;
@property (copy, nonatomic) NSArray *externalAssets;
@property (nonatomic) double intrinsicHeaderHeight;
@property (retain, nonatomic) _NTKCDetailHeaderView *headerView;
@property (retain, nonatomic) UILabel *faceName;
@property (retain, nonatomic) _NTKCDetailActionButton *addButton;
@property (retain, nonatomic) UIActivityIndicatorView *addSpinner;
@property (retain, nonatomic) UIView *headerSeparator;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSMutableArray *currentSections;
@property (retain, nonatomic) NTKCFaceDetailDescriptionSectionController *descriptionSection;
@property (retain, nonatomic) NSMutableArray *editOptionSections;
@property (retain, nonatomic) NTKCFaceDetailPhotosSectionController *photosSection;
@property (retain, nonatomic) NTKCFaceDetailKaleidoscopeContentSectionController *kaleidoscopeContentSection;
@property (retain, nonatomic) NTKCFaceDetailKaleidoscopeStyleSectionController *kaleidoscopeStyleSection;
@property (retain, nonatomic) NTKCFaceDetailOtherSectionController *otherSection;
@property (copy, nonatomic) CDUnknownBlockType selectionFinishedHandler;
@property (retain, nonatomic) UITableViewCell *editOptionToMakeFullyVisible;
@property (nonatomic, readonly) _Bool faceHasBeenEdited;
@property (retain, nonatomic) NTKCFaceContainerView *faceContainer;
@property (weak, nonatomic) id <NTKCFaceDetailViewControllerDelegate> delegate;
@property (nonatomic) _Bool shared;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UITableView *ntk_tableView;

- (void)dealloc;
- (void)scrollViewDidScroll:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)viewSafeAreaInsetsDidChange;
- (_Bool)_isEditable;
- (void)_addTapped;
- (void)_updateAddButton;
- (void)faceCollectionDidLoad:(id)arg1;
- (void)faceCollection:(id)arg1 didAddFace:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)faceCollection:(id)arg1 didRemoveFace:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)faceConfigurationDidChange:(id)arg1;
- (void)faceResourceDirectoryDidChange:(id)arg1;
- (void)face:(id)arg1 didChangeOptionsForEditMode:(long long)arg2;
- (void)dataSourcesSectionDidFinishLoading:(id)arg1;
- (void)actionSectionDidSelect:(id)arg1;
- (void)actionSectionDidDelete:(id)arg1;
- (id)initWithFace:(id)arg1 inGallery:(_Bool)arg2 externalAssets:(id)arg3;
- (void)_loadLibrary;
- (id)_sectionForEditOptionCollection:(id)arg1;
- (void)_ensureOtherSection;
- (void)_faceDidChange;
- (void)_setFaceHasBeenEdited;
- (id)_facesUnsupportedByWatchOSVersion:(unsigned int)arg1;
- (_Bool)_hasRemovedSystemApp;
- (void)_addFace;
- (void)_addFaceEndedForFace:(id)arg1;
- (_Bool)_cellIsHiddenBehindHeader:(id)arg1;
- (void)_faceChangedOptionsForEditMode:(long long)arg1;
- (void)_faceDidChangeResourceDirectory;
- (_Bool)_isEditOptionFullyVisible:(id)arg1;
- (void)_setEditOption:(id)arg1 forMode:(long long)arg2;
- (id)_pruneRemovedOrRestrictedComplications:(id)arg1;
- (id)_pruneComplicationsNotAvailableOnGizmo:(id)arg1;
- (void)_setComplication:(id)arg1 forSlot:(id)arg2;
- (void)descriptionSection:(id)arg1 didExpand:(_Bool)arg2;
- (void)editOptionSection:(id)arg1 didSelectOptionAtIndex:(long long)arg2;
- (void)editOptionSection:(id)arg1 didSelectActionForOptionAtIndex:(long long)arg2;
- (void)photoSectionDidUpdate:(id)arg1;
- (id)complicationSection:(id)arg1 allowedComplicationsForSlot:(id)arg2;
- (void)complicationSection:(id)arg1 didChangeToComplication:(id)arg2 forSlot:(id)arg3;
- (void)otherSection:(id)arg1 didToggleMonogram:(id)arg2 forSlot:(id)arg3;
- (void)otherSectionDidSelectMonogramEdit:(id)arg1;
- (void)otherSection:(id)arg1 didChangeShowSeconds:(id)arg2 forMode:(long long)arg3;
- (void)dataSourcesSection:(id)arg1 didChangeDataSources:(id)arg2 forMode:(long long)arg3;
- (id)initWithFace:(id)arg1;
- (id)initWithFace:(id)arg1 externalAssets:(id)arg2;
- (id)initWithFace:(id)arg1 inGallery:(_Bool)arg2;
- (void)_reloadUpNextDataSourceSections;

@end
