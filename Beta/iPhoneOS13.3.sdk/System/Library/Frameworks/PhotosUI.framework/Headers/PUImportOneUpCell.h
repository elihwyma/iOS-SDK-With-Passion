/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUPhotosSharingGridCell.h>

#import <PhotosUI/Swift-Protocol.h>

@class NSString, PXImportItemViewModel, UITextField;

@protocol PUImportOneUpCellDisplayDelegate;

__attribute__((visibility("hidden")))
@interface PUImportOneUpCell : PUPhotosSharingGridCell <Swift>

{
    id <PUImportOneUpCellDisplayDelegate> _displayDelegate;
    PXImportItemViewModel *_importItem;
    UITextField *_debugTextField;
    long long _thumbnailRequestID;
}

@property (retain, nonatomic) UITextField *debugTextField;
@property (nonatomic) long long thumbnailRequestID;
@property (weak, nonatomic) id <PUImportOneUpCellDisplayDelegate> displayDelegate;
@property (retain, nonatomic) PXImportItemViewModel *importItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (double)alphaForSelectedCells;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)refreshThumbnail;
- (void)updateDebugLabel:(id)arg1;
- (void)_commonPUImportOneUpCellInitialization;
- (void *)contextForObservingViewModelChanges;
- (void)updatePhotoViewForImportItem:(id)arg1;
- (void)updateSelectedVisualAppearance;
- (void)setImage:(id)arg1 isPlaceholder:(_Bool)arg2;
- (void)updateBadge;

@end
