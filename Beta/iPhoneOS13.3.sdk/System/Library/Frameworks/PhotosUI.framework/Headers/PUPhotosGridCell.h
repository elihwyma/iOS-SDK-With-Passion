/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UICollectionViewCell.h>

@class NSArray, NSNumber, PUPhotoView, PUProgressIndicatorView, UIImageView, UIView;

@interface PUPhotosGridCell : UICollectionViewCell

{
    UIView *_selectionOverlayView;
    UIView *_selectionBadgeView;
    UIImageView *_cloudIconImageView;
    PUProgressIndicatorView *_progressIndicatorView;
    UIView *_highlightOverlayView;
    NSArray *_progressIndicatorViewConstraints;
    _Bool _draggable;
    _Bool _selectionBadgeVisible;
    _Bool _cloudIconVisible;
    _Bool _transitionFillerViewEnabled;
    _Bool _transitionIsAppearing;
    int _currentImageRequestID;
    UIView *_transitionFillerView;
    NSNumber *_progress;
    PUPhotoView *_photoContentView;
    PUPhotoView *_temporaryPhotoContentView;
    long long _dragState;
    struct UIEdgeInsets _fillerEdgeInsets;
}

@property (retain, nonatomic) PUPhotoView *photoContentView;
@property (retain, nonatomic) PUPhotoView *temporaryPhotoContentView;
@property (nonatomic) long long dragState;
@property (nonatomic, getter=isHighlighted) _Bool highlighted;
@property (nonatomic, getter=isDraggable) _Bool draggable;
@property (nonatomic, getter=isSelectionBadgeVisible) _Bool selectionBadgeVisible;
@property (nonatomic, getter=isCloudIconVisible) _Bool cloudIconVisible;
@property (retain, nonatomic) NSNumber *progress;
@property (nonatomic) _Bool transitionFillerViewEnabled;
@property (nonatomic) struct UIEdgeInsets fillerEdgeInsets;
@property (nonatomic, readonly) UIView *transitionFillerView;
@property (nonatomic) _Bool transitionIsAppearing;
@property (nonatomic) int currentImageRequestID;

+ (Class)_contentViewClass;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)updateConstraints;
- (void)applyLayoutAttributes:(id)arg1;
- (_Bool)_disableRasterizeInAnimations;
- (void)dragStateDidChange:(long long)arg1;
- (void)_updateHighlight;
- (void)_updateSubviewOrdering;
- (void)_updateContentViewClipsToBounds;
- (void)addTemporaryPhotoContentView;
- (void)removeTemporaryPhotoContentView;
- (void)setTemporaryPhotoImage:(id)arg1 with:(long long)arg2;
- (void)_updateSelectionBadge;
- (void)_updateCloudIcon;
- (void)_updateProgressImmediately:(_Bool)arg1;
- (void)_layoutTransitionFillerView;
- (void)setProgress:(id)arg1 immediately:(_Bool)arg2;

@end
