/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIImageView.h>

@class CAShapeLayer, SKUIImagePlaceholder, UIImage, UITapGestureRecognizer;

__attribute__((visibility("hidden")))
@interface SKUIImageView : UIImageView

{
    UITapGestureRecognizer *_tapRecognizer;
    struct CGSize _lastLayoutSize;
    SKUIImagePlaceholder *_placeholder;
    CDUnknownBlockType _cornerPathBlock;
    struct CGSize _imageSize;
}

@property (nonatomic, readonly) CAShapeLayer *layer;
@property (copy, nonatomic) CDUnknownBlockType cornerPathBlock;
@property (nonatomic) struct CGSize imageSize;
@property (nonatomic, readonly) UITapGestureRecognizer *tapRecognizer;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) SKUIImagePlaceholder *placeholder;

+ (Class)layerClass;

- (void)setContents:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;

@end
