/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@class NSNumber;

@interface HUTriggerDurationPickerValue : NSObject

{
    NSNumber *_duration;
}

@property (nonatomic, readonly) NSNumber *duration;
@property (nonatomic, readonly) _Bool hasDuration;

+ (id)valueWithDuration:(double)arg1;
+ (id)valueWithNoDuration;

- (id)init;
- (id)initWithDuration:(id)arg1;

@end
