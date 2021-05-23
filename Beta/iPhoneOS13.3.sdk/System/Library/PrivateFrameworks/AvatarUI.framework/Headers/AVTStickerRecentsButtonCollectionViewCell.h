/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <AvatarUI/AVTStickerRecentsStickerCollectionViewCell.h>

@class CAShapeLayer;

@interface AVTStickerRecentsButtonCollectionViewCell : AVTStickerRecentsStickerCollectionViewCell

{
    CAShapeLayer *_circularBackgroundLayer;
}

@property (retain, nonatomic) CAShapeLayer *circularBackgroundLayer;

+ (id)identifier;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (struct CGRect)contentBounds;
- (void)updateWithImage:(id)arg1;
- (struct CGRect)circleLayerRect;
- (void)updateWithDefaultImage;

@end
