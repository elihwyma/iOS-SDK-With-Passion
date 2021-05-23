/*
 Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

#import <UIKit/UIView.h>

@class CACAdaptiveBackdropView, NSString, UIImageView, UILabel;

@interface CACLabeledBadgeView : UIView

{
    _Bool _isContrastBackdrop;
    NSString *_label;
    long long _arrowOrientation;
    long long _badgePresentation;
    UIImageView *_badgeMaskImageView;
    CACAdaptiveBackdropView *__backdropView;
    UILabel *__labelView;
}

@property (retain, nonatomic) UIImageView *badgeMaskImageView;
@property (retain, nonatomic) CACAdaptiveBackdropView *_backdropView;
@property (retain, nonatomic) UILabel *_labelView;
@property (nonatomic) _Bool isContrastBackdrop;
@property (readonly) NSString *label;
@property (readonly) long long arrowOrientation;
@property (readonly) long long badgePresentation;

+ (id)imageBundle;
+ (struct CGSize)sizeOfBadgeGivenNumberOfDisplayedDigits:(long long)arg1 arrowOrientation:(long long)arg2 badgePresentation:(long long)arg3;
+ (id)_badgeFont;
+ (id)_badgeFontTextStyle;
+ (id)_badgeImageWithNoArrowAndBorder;
+ (id)_badgeImageWithNoArrow;
+ (id)_badgeImageWithRightArrow;
+ (id)_badgeImageWithTinyRightArrow;
+ (id)_maskImageForBadgePresentation:(long long)arg1 arrowOrientation:(long long)arg2;
+ (double)_heightForBadgeWithText;
+ (double)badgeFontSize;

- (id)copy;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)_setUpSubviews;
- (id)initWithFrame:(struct CGRect)arg1 label:(id)arg2 arrowOrientation:(long long)arg3 badgePresentation:(long long)arg4;
- (id)contrastedCopy;
- (id)_initWithFrame:(struct CGRect)arg1 label:(id)arg2 arrowOrientation:(long long)arg3 badgePresentation:(long long)arg4 isContrasted:(_Bool)arg5;

@end
