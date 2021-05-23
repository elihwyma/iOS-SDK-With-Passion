/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <UIKit/UIView.h>

@class NSString, UIColor, UILabel;

@interface CAMZoomFactorLabel : UIView

{
    _Bool _showZoomFactorSymbol;
    _Bool _useLeadingZero;
    double _zoomFactor;
    NSString *_contentSizeCategory;
    UILabel *__label;
}

@property (nonatomic, readonly) UILabel *_label;
@property (nonatomic) double zoomFactor;
@property (nonatomic) _Bool showZoomFactorSymbol;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) _Bool useLeadingZero;
@property (copy, nonatomic) NSString *contentSizeCategory;

- (id)description;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)_updateFont;
- (void)_updateLabelText;
- (struct UIEdgeInsets)_labelInsets;

@end
