/*
 Image: /System/Library/PrivateFrameworks/PowerUI.framework/PowerUI
 */

#import <Foundation/NSObject.h>

@class NSSet;

__attribute__((visibility("hidden")))
@interface gbtClassifierInput : NSObject

{
    double _plugin_hour;
    double _plugin_battery_level;
    double _device_activity;
    double _hour;
    double _battery_level;
    double _heuristic_bin;
    double _plugin_location;
    double _hour_bin_id;
    double _time_from_plugin;
    double _avg_dur;
    double _cnt_dur;
}

@property (nonatomic) double plugin_hour;
@property (nonatomic) double plugin_battery_level;
@property (nonatomic) double device_activity;
@property (nonatomic) double hour;
@property (nonatomic) double battery_level;
@property (nonatomic) double heuristic_bin;
@property (nonatomic) double plugin_location;
@property (nonatomic) double hour_bin_id;
@property (nonatomic) double time_from_plugin;
@property (nonatomic) double avg_dur;
@property (nonatomic) double cnt_dur;
@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureValueForName:(id)arg1;
- (id)initWithPlugin_hour:(double)arg1 plugin_battery_level:(double)arg2 device_activity:(double)arg3 hour:(double)arg4 battery_level:(double)arg5 heuristic_bin:(double)arg6 plugin_location:(double)arg7 hour_bin_id:(double)arg8 time_from_plugin:(double)arg9 avg_dur:(double)arg10 cnt_dur:(double)arg11;

@end
