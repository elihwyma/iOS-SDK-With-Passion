/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UICollectionViewCell.h>

@class NSArray, PXRoundedCornerOverlayView;

@interface PXPeopleStripCollectionViewCell : UICollectionViewCell

{
    NSArray *_people;
    NSArray *_groupAvatarViews;
    PXRoundedCornerOverlayView *_roundCornerOverlay;
}

@property (retain, nonatomic) NSArray *groupAvatarViews;
@property (retain, nonatomic) PXRoundedCornerOverlayView *roundCornerOverlay;
@property (retain, nonatomic) NSArray *people;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)_layoutAvatarViewsInFrame:(struct CGRect)arg1;

@end
