/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface SBAppBrightnessChangeLogger : NSObject

{
    NSString *_bundleID;
    long long _brightnessLevel;
    NSDate *_eventTimestamp;
}

@property (copy, nonatomic) NSString *bundleID;
@property (nonatomic) long long brightnessLevel;
@property (copy, nonatomic) NSDate *eventTimestamp;

+ (id)sharedInstance;

- (id)init;
- (void)_screenLocked;
- (void)_publishMetricsIfNeeded;
- (void)_publishMetrics;
- (void)noteApp:(id)arg1 setScreenBrightness:(double)arg2;

@end
