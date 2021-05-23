/*
 Image: /System/Library/PrivateFrameworks/SoundBoardServices.framework/SoundBoardServices
 */

#import <Foundation/NSObject.h>

@interface NSObject (Utilities)

- (id)processNameForPID:(int)arg1;
- (double)SBClampWithStep:(double)arg1 max:(double)arg2 stepValue:(double)arg3 value:(double)arg4;
- (unsigned long long)timeDifferenceInMillisBetween:(unsigned long long)arg1 andStartTime:(unsigned long long)arg2;
- (long long)timeIntervalCompare:(double)arg1 secondTimeInterval:(double)arg2;
- (double)timeIntervalInMicroSeconds:(double)arg1 andStartTime:(double)arg2;

@end
