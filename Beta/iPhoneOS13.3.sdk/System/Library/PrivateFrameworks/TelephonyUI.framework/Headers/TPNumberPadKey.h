/*
 Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import <UIView.h>

@class NSLayoutConstraint, UILabel;

__attribute__((visibility("hidden")))
@interface TPNumberPadKey : UIView

{
    UILabel *_digit;
    UILabel *_letters;
    UILabel *_secondaryLetters;
    NSLayoutConstraint *_digitBaseline;
    NSLayoutConstraint *_letterBaseline;
    NSLayoutConstraint *_secondaryLetterBaseline;
}

@property (nonatomic, readonly, getter=isAsterisk) _Bool asterisk;
@property (nonatomic, readonly, getter=isPound) _Bool pound;
@property (retain, nonatomic) UILabel *digit;
@property (retain, nonatomic) UILabel *letters;
@property (retain, nonatomic) UILabel *secondaryLetters;
@property (retain, nonatomic) NSLayoutConstraint *digitBaseline;
@property (retain, nonatomic) NSLayoutConstraint *letterBaseline;
@property (retain, nonatomic) NSLayoutConstraint *secondaryLetterBaseline;

+ (void)initialize;
+ (float)absoluteTrackingValueForString:(id)arg1 pointSize:(float)arg2 unitsPerEm:(float)arg3;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)setFontStylesForHighlightState:(_Bool)arg1 language:(unsigned long long)arg2 showLocalizedLetters:(_Bool)arg3 shouldCenterDigit:(_Bool)arg4 fontColor:(_Bool)arg5 circleDiameter:(double)arg6 largeFont:(_Bool)arg7 isCarPlay:(_Bool)arg8;
- (void)setDigit:(id)arg1 primaryLetters:(id)arg2 secondaryLetters:(id)arg3;
- (void)doLayoutNow;

@end
