//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

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

+ (float)absoluteTrackingValueForString:(id)arg1 pointSize:(float)arg2 unitsPerEm:(float)arg3;
+ (void)initialize;
@property(retain, nonatomic) NSLayoutConstraint *secondaryLetterBaseline; // @synthesize secondaryLetterBaseline=_secondaryLetterBaseline;
@property(retain, nonatomic) NSLayoutConstraint *letterBaseline; // @synthesize letterBaseline=_letterBaseline;
@property(retain, nonatomic) NSLayoutConstraint *digitBaseline; // @synthesize digitBaseline=_digitBaseline;
@property(retain, nonatomic) UILabel *secondaryLetters; // @synthesize secondaryLetters=_secondaryLetters;
@property(retain, nonatomic) UILabel *letters; // @synthesize letters=_letters;
@property(retain, nonatomic) UILabel *digit; // @synthesize digit=_digit;
// - (void).cxx_destruct;
- (void)doLayoutNow;
- (void)setDigit:(id)arg1 primaryLetters:(id)arg2 secondaryLetters:(id)arg3;
- (void)setFontStylesForHighlightState:(BOOL)arg1 language:(NSUInteger)arg2 showLocalizedLetters:(BOOL)arg3 shouldCenterDigit:(BOOL)arg4 fontColor:(BOOL)arg5 circleDiameter:(double)arg6 largeFont:(BOOL)arg7 isCarPlay:(BOOL)arg8;
@property(readonly, nonatomic, getter=isPound) BOOL pound;
@property(readonly, nonatomic, getter=isAsterisk) BOOL asterisk;
- (id)initWithFrame:(CGRect)arg1;

@end

