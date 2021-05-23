/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class HKUIMetricColors, NSAttributedString, NSString;

@interface HKDisplayTypeContextItem : NSObject

{
    _Bool _infoHidden;
    NSString *_title;
    NSString *_unit;
    NSString *_value;
    NSString *_valueContext;
    NSAttributedString *_attributedValue;
    NSString *_dateString;
    HKUIMetricColors *_metricColors;
    HKUIMetricColors *_selectedMetricColors;
}

@property (copy, nonatomic) NSString *title;
@property (nonatomic) _Bool infoHidden;
@property (copy, nonatomic) NSString *unit;
@property (copy, nonatomic) NSString *value;
@property (copy, nonatomic) NSString *valueContext;
@property (copy, nonatomic) NSAttributedString *attributedValue;
@property (copy, nonatomic) NSString *dateString;
@property (retain, nonatomic) HKUIMetricColors *metricColors;
@property (retain, nonatomic) HKUIMetricColors *selectedMetricColors;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqualToContextItem:(id)arg1;

@end
