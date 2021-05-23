/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class NSString, UIColor, UIFont;

@interface HKReferenceRangeViewConfiguration : NSObject

{
    _Bool _hideReferenceRangeValues;
    double _currentValueToReferenceValuePadding;
    double _horizontalPadding;
    double _referenceRangeViewHeight;
    UIColor *_referenceRangeViewColor;
    UIColor *_referenceRangeViewBorderColor;
    UIFont *_currentValueValueFontWithRange;
    UIFont *_currentValueValueFontWithoutRange;
    UIFont *_currentValueUnitFont;
    UIFont *_dynamicTypeAnchorFont;
    UIColor *_currentValueTextColor;
    UIColor *_currentValueUnitTextColor;
    UIColor *_referenceValueTextColor;
    double _referenceValueYOffset;
    double _currentValueTextSize;
    NSString *_currentValueUnitTextStyle;
    long long _currentValueNumLinesIfNoRange;
    NSString *_referenceRangeTextStyle;
    Class _labelClass;
}

@property (nonatomic) double currentValueToReferenceValuePadding;
@property (nonatomic) double horizontalPadding;
@property (nonatomic) double referenceRangeViewHeight;
@property (retain, nonatomic) UIColor *referenceRangeViewColor;
@property (retain, nonatomic) UIColor *referenceRangeViewBorderColor;
@property (retain, nonatomic) UIFont *currentValueValueFontWithRange;
@property (retain, nonatomic) UIFont *currentValueValueFontWithoutRange;
@property (retain, nonatomic) UIFont *currentValueUnitFont;
@property (retain, nonatomic) UIFont *dynamicTypeAnchorFont;
@property (retain, nonatomic) UIColor *currentValueTextColor;
@property (retain, nonatomic) UIColor *currentValueUnitTextColor;
@property (retain, nonatomic) UIColor *referenceValueTextColor;
@property (nonatomic) double referenceValueYOffset;
@property (nonatomic) double currentValueTextSize;
@property (copy, nonatomic) NSString *currentValueUnitTextStyle;
@property (nonatomic) long long currentValueNumLinesIfNoRange;
@property (copy, nonatomic) NSString *referenceRangeTextStyle;
@property (nonatomic) _Bool hideReferenceRangeValues;
@property (nonatomic) Class labelClass;

+ (id)defaultConfiguration;
+ (id)annotationEmbeddedConfiguration;

@end
