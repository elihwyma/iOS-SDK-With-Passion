/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class NSDate, NSNumber;

@interface NTKWellnessRichComplicationChartPoint : NSObject

{
    NSDate *_xValue;
    NSNumber *_yValue;
}

@property (copy, nonatomic) NSDate *xValue;
@property (copy, nonatomic) NSNumber *yValue;

@end
