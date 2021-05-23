/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UICollectionViewCell.h>

#import <PhotosUI/Swift-Protocol.h>

@class NSString, PUPhotoView, PXImportItemViewModel, UIActivityIndicatorView, UITextField, UIView;

@protocol PUCameraImportItemCellDelegate;

__attribute__((visibility("hidden")))
@interface PUCameraImportItemCell : UICollectionViewCell <Swift>

{
    struct CGRect _badgeTapZone;
    _Bool _needsThumbnailRefresh;
    _Bool _selectable;
    _Bool _needsBadgeUpdate;
    id <PUCameraImportItemCellDelegate> _delegate;
    PXImportItemViewModel *_representedImportItem;
    PUPhotoView *_photoView;
    long long _badgeType;
    UIView *_badgeContainerView;
    UIView *_badgeView;
    UIActivityIndicatorView *_spinner;
    UITextField *_debugTextField;
    long long _thumbnailRequestID;
    struct CGRect _scaledDisplayRect;
}

@property (nonatomic) long long badgeType;
@property (nonatomic) _Bool selectable;
@property (retain, nonatomic) UIView *badgeContainerView;
@property (retain, nonatomic) UIView *badgeView;
@property (retain, nonatomic) UIActivityIndicatorView *spinner;
@property (retain, nonatomic) PUPhotoView *photoView;
@property (retain, nonatomic) UITextField *debugTextField;
@property (nonatomic) _Bool needsBadgeUpdate;
@property (nonatomic) struct CGRect scaledDisplayRect;
@property (nonatomic) long long thumbnailRequestID;
@property (weak, nonatomic) id <PUCameraImportItemCellDelegate> delegate;
@property (retain, nonatomic) PXImportItemViewModel *representedImportItem;
@property (nonatomic, readonly) _Bool needsThumbnailRefresh;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (double)alphaForSelectedCells;

- (void)dealloc;
- (void)prepareForReuse;
- (void)clearImage;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (_Bool)isAccessibilityElement;
- (void)accessibilityElementDidBecomeFocused;
- (id)accessibilityCustomActions;
- (void)layoutSubviews;
- (long long)dragState;
- (void)handleTapGesture:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (_Bool)shouldBeginGestureForPoint:(struct CGPoint)arg1;
- (void)showActivityBadge:(_Bool)arg1;
- (void)updateBadgeUIIfNeeded;
- (void)refreshThumbnail;
- (void)_fetchThumbnailReady;
- (void)setCachedImage:(id)arg1 isPlaceholder:(_Bool)arg2;
- (void)setPhotoImage:(id)arg1 withSize:(struct CGSize)arg2 fillMode:(long long)arg3 videoDuration:(double)arg4 isPlaceholder:(_Bool)arg5;
- (void)cancelThumbnailLoadIfActive;
- (struct CGRect)_filledPhotosRectForImage:(id)arg1;
- (void)_enterOneUpAction;
- (void)_selectAction;
- (void)updateDebugLabel:(id)arg1;

@end
