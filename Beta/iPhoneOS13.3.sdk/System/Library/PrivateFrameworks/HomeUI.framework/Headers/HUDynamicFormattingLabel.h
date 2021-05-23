/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UILabel.h>

@class NSArray, NSDictionary, UIFont;

@protocol HFDynamicFormattingValue, NACancelable;

@interface HUDynamicFormattingLabel : UILabel

{
    id <HFDynamicFormattingValue> _dynamicFormattingValue;
    NSDictionary *_defaultAttributes;
    NSArray *_preferredFonts;
    id <NACancelable> _formattedValueObservationCancellationToken;
    UIFont *_preferredFontForCurrentSize;
}

@property (retain, nonatomic) id <NACancelable> formattedValueObservationCancellationToken;
@property (retain, nonatomic) UIFont *preferredFontForCurrentSize;
@property (retain, nonatomic) id <HFDynamicFormattingValue> dynamicFormattingValue;
@property (copy, nonatomic) NSDictionary *defaultAttributes;
@property (copy, nonatomic) NSArray *preferredFonts;

- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)_updateFormattedValueObservation;
- (void)_updateFormattedValueIncludingFont:(_Bool)arg1;
- (void)_updatePreferredFontIncludingValue:(_Bool)arg1;
- (id)_formattedValueWithFont:(id)arg1;

@end
