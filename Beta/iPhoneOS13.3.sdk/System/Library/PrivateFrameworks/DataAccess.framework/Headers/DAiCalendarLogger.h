/*
 Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <Foundation/NSObject.h>

@interface DAiCalendarLogger : NSObject

+ (id)sharedLogger;

- (void)logICSMessage:(id)arg1 atLevel:(long long)arg2;
- (void)registerWithiCalendar;

@end
