/*
 Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

#import <FitnessUI/Swift-Protocol.h>

@class UIColor, UIFont;

@protocol FIUIChartAxisDescriptor <Swift>

@property (retain, nonatomic) id minValue;
@property (retain, nonatomic) id maxValue;
@property (retain, nonatomic) UIFont *labelFont;
@property (retain, nonatomic) UIColor *unhighlightedLabelColor;
@property (retain, nonatomic) UIColor *highlightedLabelColor;
@property (nonatomic) double axisDescriptorPadding;
@property (retain, nonatomic) id highlightedValue;
@property (nonatomic) unsigned long long labelAlignment;
@property (nonatomic) unsigned long long subLabelAlignment;
@property (retain, nonatomic) UIFont *subLabelFont;
@property (retain, nonatomic) UIColor *selectedLabelColor;
@property (retain, nonatomic) UIColor *highlightedSubLabelColor;
@property (retain, nonatomic) UIColor *unhighlightedSubLabelColor;
@property (nonatomic) double subAxisDescriptorPadding;
@property (nonatomic) _Bool hideClippedLabels;
@property (retain, nonatomic) UIColor *shadowColor;
@property (nonatomic) struct CGSize shadowOffset;
@property (nonatomic) double shadowBlur;

- (unsigned short)axisLabels;
- (unsigned short)expectedDataType;

@end
