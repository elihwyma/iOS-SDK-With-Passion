/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class HKDisplayType, HKGraphSeries, UIColor;

@interface HKGraphSeriesConfiguration : NSObject

{
    HKGraphSeries *_graphSeries;
    HKDisplayType *_displayType;
    UIColor *_tintColor;
}

@property (retain, nonatomic) HKGraphSeries *graphSeries;
@property (retain, nonatomic) HKDisplayType *displayType;
@property (retain, nonatomic) UIColor *tintColor;

@end
