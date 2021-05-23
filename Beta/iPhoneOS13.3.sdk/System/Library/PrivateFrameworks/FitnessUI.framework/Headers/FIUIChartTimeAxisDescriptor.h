/*
 Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

#import <Foundation/NSObject.h>

@class FIUIChartDateAnchorRule, NSArray, NSDateComponents, NSMutableArray, NSMutableDictionary, NSString, UIColor, UIFont;

@interface FIUIChartTimeAxisDescriptor : NSObject

{
    NSArray *_cachedAxisLabels;
    NSArray *_cachedAxisSubLabels;
    NSMutableArray *_cachedAxisLabelColors;
    NSMutableDictionary *_hourMinuteFormatters;
    NSMutableDictionary *_hourFormatters;
    NSMutableDictionary *_weekdayFormatters;
    NSMutableDictionary *_dayFormatters;
    NSMutableDictionary *_monthFormatters;
    NSMutableDictionary *_yearFormatters;
    _Bool _hideClippedLabels;
    _Bool _forceAMPMOnFirstLabel;
    _Bool _useMinMaxLabelPlacement;
    _Bool _generateSubAxisDescriptorOnlyForNoonMidnight;
    _Bool _subAxisCapitalize;
    id _minValue;
    id _maxValue;
    unsigned long long _labelAlignment;
    unsigned long long _subLabelAlignment;
    UIFont *_labelFont;
    UIColor *_highlightedLabelColor;
    UIColor *_unhighlightedLabelColor;
    UIColor *_selectedLabelColor;
    double _axisDescriptorPadding;
    double _subAxisDescriptorPadding;
    UIFont *_subLabelFont;
    UIColor *_highlightedSubLabelColor;
    UIColor *_unhighlightedSubLabelColor;
    unsigned long long _textStyle;
    NSDateComponents *_axisSpacing;
    FIUIChartDateAnchorRule *_anchorRule;
    unsigned long long _timeInterval;
    unsigned long long _subTextStyle;
    NSDateComponents *_subAxisSpacing;
    FIUIChartDateAnchorRule *_subAnchorRule;
    unsigned long long _subTimeInterval;
    double _subAxisVerticalPadding;
}

@property (nonatomic) unsigned long long textStyle;
@property (retain, nonatomic) NSDateComponents *axisSpacing;
@property (retain, nonatomic) FIUIChartDateAnchorRule *anchorRule;
@property (nonatomic) unsigned long long timeInterval;
@property (nonatomic) _Bool forceAMPMOnFirstLabel;
@property (nonatomic) _Bool useMinMaxLabelPlacement;
@property (nonatomic) unsigned long long subTextStyle;
@property (retain, nonatomic) NSDateComponents *subAxisSpacing;
@property (retain, nonatomic) FIUIChartDateAnchorRule *subAnchorRule;
@property (nonatomic) unsigned long long subTimeInterval;
@property (nonatomic) _Bool generateSubAxisDescriptorOnlyForNoonMidnight;
@property (nonatomic) _Bool subAxisCapitalize;
@property (nonatomic) double subAxisVerticalPadding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
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

+ (unsigned long long)_spacingIntervalFromAxisSpacing:(id)arg1;

- (id)init;
- (void)_clearCache;
- (_Bool)_validateProperties;
- (void)invalidateCaches;
- (id)axisLabels;
- (void)selectLabel:(_Bool)arg1 atIndex:(unsigned long long)arg2;
- (id)axisSubLabels;
- (void)_clearFormatters;
- (id)_labelsForSpacingInterval:(unsigned long long)arg1 withSpacing:(id)arg2 textStyle:(unsigned long long)arg3;
- (id)_subLabelsForSpacingInterval:(unsigned long long)arg1 withSpacing:(id)arg2 textStyle:(unsigned long long)arg3;
- (id)_startDateFromTimeInterval:(unsigned long long)arg1;
- (id)_stringFromDate:(id)arg1 withTimeInterval:(unsigned long long)arg2 textStyle:(unsigned long long)arg3 forceAMPM:(_Bool)arg4;
- (long long)_hourComponentFromDate:(id)arg1;
- (id)_newSubLabelFromDate:(id)arg1 withTimeInterval:(unsigned long long)arg2 textStyle:(unsigned long long)arg3;
- (id)_hourMinuteFormatterWithTextStyle:(unsigned long long)arg1;
- (id)hourFormatter:(unsigned long long)arg1;
- (id)weekdayFormatter:(unsigned long long)arg1;
- (id)dayFormatter:(unsigned long long)arg1;
- (id)monthFormatter:(unsigned long long)arg1;
- (id)yearFormatter:(unsigned long long)arg1;
- (void)_generateAxisLabels;
- (id)_labelAtIndex:(unsigned long long)arg1;
- (unsigned long long)numLabels;
- (void)_generateAxisSubLabels;
- (id)_subLabelAtIndex:(unsigned long long)arg1;
- (Class)expectedDataType;
- (id)positionForLabelAtIndex:(unsigned long long)arg1;
- (id)textForLabelAtIndex:(unsigned long long)arg1;
- (unsigned long long)numSubLabels;
- (id)positionForSubLabelAtIndex:(unsigned long long)arg1;
- (id)textForSubLabelAtIndex:(unsigned long long)arg1;

@end
