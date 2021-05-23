/*
 Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString, UIColor, UIFont;

@interface FIUIChartMinMaxValueAxisDescriptor : NSObject

{
    UIFont *_labelFont;
    UIColor *_unhighlightedLabelColor;
    UIColor *_highlightedLabelColor;
    double _axisDescriptorPadding;
    UIColor *_shadowColor;
    double _shadowBlur;
    NSNumber *_minValue;
    NSNumber *_maxValue;
    NSNumber *_highlightedValue;
    struct CGSize _shadowOffset;
}

@property (retain, nonatomic) NSNumber *minValue;
@property (retain, nonatomic) NSNumber *maxValue;
@property (retain, nonatomic) NSNumber *highlightedValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) UIFont *labelFont;
@property (retain, nonatomic) UIColor *unhighlightedLabelColor;
@property (retain, nonatomic) UIColor *highlightedLabelColor;
@property (nonatomic) double axisDescriptorPadding;
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

- (id)axisLabels;
- (Class)expectedDataType;
- (id)_axisLabelForValue:(id)arg1 highlighted:(_Bool)arg2;

@end
