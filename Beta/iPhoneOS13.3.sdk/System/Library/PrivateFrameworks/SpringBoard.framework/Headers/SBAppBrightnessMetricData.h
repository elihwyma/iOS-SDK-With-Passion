/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBAWDMetricData.h>

@class NSString;

@interface SBAppBrightnessMetricData : SBAWDMetricData

{
    NSString *_appBundleID;
    unsigned long long _brightness;
    unsigned long long _duration;
}

@property (copy, nonatomic) NSString *appBundleID;
@property (nonatomic) unsigned long long brightness;
@property (nonatomic) unsigned long long duration;

@end
