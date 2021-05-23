/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUReviewScrubberCell.h>

#import <PhotosUI/Swift-Protocol.h>

@class NSString, PXImportItemViewModel, UIActivityIndicatorView;

@protocol PUImportOneUpScrubberCellDisplayDelegate;

__attribute__((visibility("hidden")))
@interface PUImportOneUpScrubberCell : PUReviewScrubberCell <Swift>

{
    _Bool _selectable;
    _Bool _needsBadgeUpdate;
    id <PUImportOneUpScrubberCellDisplayDelegate> _displayDelegate;
    PXImportItemViewModel *_importItem;
    long long _badgeType;
    UIActivityIndicatorView *_spinner;
    long long _thumbnailRequestID;
}

@property (nonatomic, readonly) UIActivityIndicatorView *spinner;
@property (nonatomic) _Bool needsBadgeUpdate;
@property (nonatomic) long long thumbnailRequestID;
@property (weak, nonatomic) id <PUImportOneUpScrubberCellDisplayDelegate> displayDelegate;
@property (retain, nonatomic) PXImportItemViewModel *importItem;
@property (nonatomic) long long badgeType;
@property (nonatomic) _Bool selectable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)emptyThumbnailBackgroundColor;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)updateBadgeUIIfNeeded;
- (void)refreshThumbnail;
- (void)_createSpinnerIfNecessary;
- (void)_commonPUImportOneUpScrubberCellInitialization;
- (void)updateToThumbnail:(id)arg1;

@end
