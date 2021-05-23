/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class NSDate, NSError;

__attribute__((visibility("hidden")))
@interface HKStateMachinePendingEvent : NSObject

{
    long long _event;
    NSDate *_date;
    NSError *_error;
    CDUnknownBlockType _completion;
}

@property (nonatomic) long long event;
@property (copy, nonatomic) NSDate *date;
@property (copy, nonatomic) NSError *error;
@property (copy, nonatomic) CDUnknownBlockType completion;

@end
