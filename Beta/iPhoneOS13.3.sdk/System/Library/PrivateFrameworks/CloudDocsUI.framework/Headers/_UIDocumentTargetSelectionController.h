/*
 Image: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
 */

#import <UIKit/UIViewController.h>

@class NSArray, NSString, UIImageView, UILabel, UINavigationController, _UIDocumentPickerContainerViewController, _UINavigationControllerPalette;

@protocol _UIDocumentTargetSelectionControllerDelegate;

@interface _UIDocumentTargetSelectionController : UIViewController

{
    id <_UIDocumentTargetSelectionControllerDelegate> _weak_delegate;
    _UIDocumentPickerContainerViewController *_containerViewController;
    UINavigationController *_containedNavigationController;
    _UINavigationControllerPalette *_palette;
    UIImageView *_iconView;
    UILabel *_filesLabel;
    NSString *_containerName;
    id _firstFileThumbnailObservation;
    unsigned long long _targetSelectionType;
    _Bool _completedInitialDisplay;
    id <_UIDocumentTargetSelectionControllerDelegate> _delegate;
    NSArray *_itemsToMove;
}

@property (weak, nonatomic) id <_UIDocumentTargetSelectionControllerDelegate> delegate;
@property (nonatomic, readonly) NSArray *itemsToMove;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_loadDocumentIconForURL:(id)arg1 size:(struct CGSize)arg2;
+ (id)_loadThumbnailForURL:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3 wantsBorder:(_Bool *)arg4 generatedThumbnail:(_Bool *)arg5;

- (void)invalidate;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (long long)displayMode;
- (int)sortOrder;
- (void)setSortOrder:(int)arg1;
- (void)setDisplayMode:(long long)arg1;
- (void)_setupNavigationItem;
- (void)dismiss:(id)arg1;
- (void)_updatePalette;
- (void)_setContainerViewController:(id)arg1;
- (id)pickableTypes;
- (unsigned long long)pickerMode;
- (void)didSelectItem:(id)arg1;
- (id)initWithItemsToMove:(id)arg1;
- (void)setItemsToMove:(id)arg1;
- (void)_commonInitItems:(id)arg1 crossContainer:(_Bool)arg2 sourceContainer:(id)arg3;
- (void)_setupPalette;
- (id)navControllerForPalette;
- (void)_setIconViewImage:(id)arg1 border:(_Bool)arg2;
- (id)initForCrossContainerMoveWithItemsToMove:(id)arg1;
- (id)initForCopyWithItems:(id)arg1;

@end
