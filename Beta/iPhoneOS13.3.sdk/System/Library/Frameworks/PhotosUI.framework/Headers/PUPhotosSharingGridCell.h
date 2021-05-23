/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UICollectionViewCell.h>

@class PUPhotoView, PUPhotosZoomingSharingGridCell, UIView;

__attribute__((visibility("hidden")))
@interface PUPhotosSharingGridCell : UICollectionViewCell

{
    PUPhotoView *_photoView;
    UIView *_highlightOverlayView;
    struct CGPoint _originalZoomPoint;
    struct CGPoint _lastZoomPoint;
    PUPhotosZoomingSharingGridCell *_zoomingCell;
    UIView *_zoomingCellSuperview;
    long long _currentImageRequestID;
}

@property (nonatomic, readonly) PUPhotoView *photoView;
@property (nonatomic) long long currentImageRequestID;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (void)_updateHighlight;
- (void)_updateSubviewOrdering;

@end
