/*
 Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

#import <Foundation/NSObject.h>

@interface BSMonotonicReferenceTime : NSObject

{
    double _startTimeStamp;
}

@property (nonatomic, readonly) double timeIntervalSinceNow;
@property (nonatomic, readonly) double timeIntervalToNow;

+ (id)distantFuture;
+ (id)distantPast;
+ (id)now;
+ (double)_timeIntervalSinceInternalClockReference;
+ (id)referenceTimeWithTimeIntervalSinceNow:(double)arg1;
+ (id)referenceTimeForDate:(id)arg1;

- (id)date;
- (id)_initWithStartTime:(double)arg1;
- (double)timeIntervalSinceReferenceTime:(id)arg1;

@end
