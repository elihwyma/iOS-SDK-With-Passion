/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface _HKLocationShifter : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
}

+ (_Bool)isShiftRequiredForLocations:(id)arg1;

- (id)init;
- (void)shiftLocations:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;

@end
