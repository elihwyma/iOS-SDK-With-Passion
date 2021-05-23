/*
 Image: /System/Library/Frameworks/Messages.framework/Messages
 */

#import <UIKit/UICollectionViewCell.h>

@class CALayer, MSStickerView;

@protocol MSStickerPrivate;

__attribute__((visibility("hidden")))
@interface _MSStickerCollectionViewCell : UICollectionViewCell

{
    MSStickerView *_stickerView;
    CALayer *_borderLayer;
}

@property (retain, nonatomic) CALayer *borderLayer;
@property (retain, nonatomic) id <MSStickerPrivate> sticker;
@property (nonatomic, readonly) MSStickerView *stickerView;

- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)setAnimating:(_Bool)arg1;
- (void)showCellBorder:(_Bool)arg1;

@end
