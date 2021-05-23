/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface HKPersistentTimer : NSObject

{
    NSString *_fullTimerKey;
}

@property (retain, nonatomic) NSString *fullTimerKey;

+ (id)_prefixedKeyWithTimerKey:(id)arg1;
+ (id)timerWithKey:(id)arg1;

- (void)clear;
- (void)start;
- (unsigned long long)elapsedNanoseconds;
- (id)timerValue;
- (unsigned long long)elapsedSeconds;

@end
