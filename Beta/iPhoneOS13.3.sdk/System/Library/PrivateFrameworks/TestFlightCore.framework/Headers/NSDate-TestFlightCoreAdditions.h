/*
 Image: /System/Library/PrivateFrameworks/TestFlightCore.framework/TestFlightCore
 */

#import <Foundation/NSDate.h>

@interface NSDate (TestFlightCoreAdditions)

- (unsigned long long)tf_posixTimestampInMilliseconds;
- (long long)tf_numberOfDaysFromNow;

@end
