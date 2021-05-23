/*
 Image: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
 */

#import <Foundation/NSObject.h>

@class CLKDevice, CLKTimeFormatter, CLKUITimeLabelStyle, NSAttributedString, NSString, UIColor, UILabel, UIView;

@interface _CLKUIBasicTimeLabelManager : NSObject

{
    CLKDevice *_device;
    UILabel *_label;
    CLKTimeFormatter *_timeFormatter;
    NSString *_timeText;
    CLKUITimeLabelStyle *_style;
    double _maxWidth;
    NSAttributedString *_correctAttributedText;
    _Bool _showsDesignator;
    _Bool _showSubstringToSeparator;
    _Bool _showSubstringFromSeparator;
    _Bool _hideMinutesIfZero;
    _Bool _primary;
    struct CGSize _cachedIntrinsicSize;
    struct UIEdgeInsets _cachedOpticalEdgeInsets;
    _Bool _cachedOpticalEdgeInsetsIsValid;
    _Bool _showSeconds;
    UIColor *_textColor;
    _Bool _animationsPaused;
    _Bool _showsBlinker;
    _Bool _showsNumbers;
}

@property (nonatomic) _Bool showsBlinker;
@property (nonatomic) _Bool showsNumbers;
@property (nonatomic, readonly) UIView *view;
@property (nonatomic, readonly) struct CGSize intrinsicSize;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) _Bool animationsPaused;
@property (nonatomic, readonly) struct UIEdgeInsets opticalInsets;
@property (nonatomic) _Bool showSeconds;

- (void)setStyle:(id)arg1;
- (void)setMaxWidth:(double)arg1;
- (id)viewForLastBaselineLayout;
- (double)_lastLineBaseline;
- (void)updateTimeText;
- (struct CGSize)sizeThatFits;
- (void)_updateAttributedText;
- (id)_initForDevice:(id)arg1 primary:(_Bool)arg2 withTimeFormatter:(id)arg3 options:(unsigned long long)arg4 labelFactory:(CDUnknownBlockType)arg5;
- (id)_attributedTextShowingBlinker:(_Bool)arg1 numbers:(_Bool)arg2;
- (id)effectiveFont;
- (id)initWithForDevice:(id)arg1 timeFormatter:(id)arg2 options:(unsigned long long)arg3 labelFactory:(CDUnknownBlockType)arg4;
- (void)setShowsDesignator:(_Bool)arg1;
- (void)sizeViewToFit;
- (id)effectiveAttributedText;
- (void)enumerateUnderlyingLabelsWithBlock:(CDUnknownBlockType)arg1;

@end
