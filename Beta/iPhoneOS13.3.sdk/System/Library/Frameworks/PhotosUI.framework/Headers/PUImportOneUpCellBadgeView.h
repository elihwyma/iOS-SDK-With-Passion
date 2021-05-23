/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UICollectionReusableView.h>

@class UIActivityIndicatorView, UIView;

__attribute__((visibility("hidden")))
@interface PUImportOneUpCellBadgeView : UICollectionReusableView

{
    _Bool _selectable;
    _Bool _inUpdateBlock;
    _Bool _needsBadgeUpdate;
    long long _badgeType;
    UIView *_badgeContainerView;
    UIView *_badgeView;
    UIActivityIndicatorView *_spinner;
}

@property (retain, nonatomic) UIView *badgeContainerView;
@property (retain, nonatomic) UIView *badgeView;
@property (retain, nonatomic) UIActivityIndicatorView *spinner;
@property (nonatomic) _Bool inUpdateBlock;
@property (nonatomic) _Bool needsBadgeUpdate;
@property (nonatomic) long long badgeType;
@property (nonatomic) _Bool selectable;

- (void)prepareForReuse;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)updateBadgeUIIfNeeded;
- (void)setNeedsBadgeUpdate;
- (void)performBadgeUpdates:(CDUnknownBlockType)arg1;
- (void)_createSpinnerIfNecessary;

@end
