/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class HKAxisLabelStyle, NSString;

@interface HKLegendPointAnnotationStyle : NSObject

{
    _Bool _leftOfSeries;
    HKAxisLabelStyle *_labelStyle;
    NSString *_localizedLabelKey;
}

@property (copy, nonatomic) HKAxisLabelStyle *labelStyle;
@property (copy, nonatomic) NSString *localizedLabelKey;
@property (nonatomic) _Bool leftOfSeries;

+ (id)annotationStyleWithLabelStyle:(id)arg1 localizedLabelKey:(id)arg2 leftOfSeries:(_Bool)arg3;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
