/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UIView.h>

@class CAShapeLayer, NSString, UILabel;

@interface _NTKCFaceDetailCollectionCellLabel : UIView

{
    UILabel *_label;
    CAShapeLayer *_background;
    _Bool _usesShortTextWidth;
    _Bool _active;
}

@property (nonatomic) _Bool usesShortTextWidth;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) _Bool active;
@property (nonatomic, readonly) double firstLineBaseline;

- (id)init;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)_inactiveTextColor;
- (id)_inactiveFont;
- (id)_activeFont;
- (id)_activeTextColor;

@end
