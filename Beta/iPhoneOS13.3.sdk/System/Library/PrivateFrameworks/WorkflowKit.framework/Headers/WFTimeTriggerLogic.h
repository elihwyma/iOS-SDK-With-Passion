/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class NSDate;

@interface WFTimeTriggerLogic : NSObject

{
    NSDate *_currentSunriseTime;
    NSDate *_currentSunsetTime;
}

@property (retain, nonatomic) NSDate *currentSunriseTime;
@property (retain, nonatomic) NSDate *currentSunsetTime;

+ (id)sharedInstance;

- (id)nextFireDateForTrigger:(id)arg1;
- (id)triggersFromTriggers:(id)arg1 thatShouldFireAtDate:(id)arg2;
- (id)adjustedTime:(id)arg1 byOffset:(unsigned long long)arg2;

@end
