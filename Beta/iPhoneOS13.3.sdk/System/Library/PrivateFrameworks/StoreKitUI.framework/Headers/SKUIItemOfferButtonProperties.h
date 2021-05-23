/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class CAFilter, NSAttributedString, UIColor, UIImage;

__attribute__((visibility("hidden")))
@interface SKUIItemOfferButtonProperties : NSObject

{
    _Bool _hasBorderView;
    _Bool _borderCornerRadiusMatchesHalfBoundingDimension;
    _Bool _hasTitleLabel;
    _Bool _universal;
    _Bool _progressIndeterminate;
    _Bool _cancelRecognizer;
    _Bool _restores;
    UIColor *_borderBackgroundColor;
    UIColor *_borderColor;
    CAFilter *_borderCompositingFilter;
    double _borderWidth;
    double _borderCornerRadius;
    NSAttributedString *_attributedText;
    UIColor *_textColor;
    long long _confirmationTitleStyle;
    long long _titleStyle;
    UIImage *_image;
    UIImage *_borderedImage;
    long long _progressType;
    double _progress;
    double _alpha;
}

@property (nonatomic) _Bool hasBorderView;
@property (retain, nonatomic) UIColor *borderBackgroundColor;
@property (retain, nonatomic) UIColor *borderColor;
@property (retain, nonatomic) CAFilter *borderCompositingFilter;
@property (nonatomic) double borderWidth;
@property (nonatomic) double borderCornerRadius;
@property (nonatomic) _Bool borderCornerRadiusMatchesHalfBoundingDimension;
@property (nonatomic) _Bool hasTitleLabel;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) _Bool universal;
@property (nonatomic) long long confirmationTitleStyle;
@property (nonatomic) long long titleStyle;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIImage *borderedImage;
@property (nonatomic) long long progressType;
@property (nonatomic) _Bool progressIndeterminate;
@property (nonatomic) double progress;
@property (nonatomic) _Bool cancelRecognizer;
@property (nonatomic) double alpha;
@property (nonatomic) _Bool restores;

@end
