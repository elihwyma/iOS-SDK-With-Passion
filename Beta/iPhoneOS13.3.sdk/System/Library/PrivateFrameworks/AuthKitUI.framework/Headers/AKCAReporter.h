/*
 Image: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface AKCAReporter : NSObject

{
    NSString *_eventName;
    NSMutableDictionary *_reportData;
    unsigned long long _initTime;
    struct mach_timebase_info _clock_timebase;
}

- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)initWithEvent:(id)arg1;
- (void)sendReport;
- (double)_machAbsoluteTimeToTimeInterval:(unsigned long long)arg1;

@end
