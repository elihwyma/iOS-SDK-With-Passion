/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@interface ATXEnrollmentManager : NSObject

+ (id)getUserIdForScheme:(id)arg1 enrollmentPeriod:(double)arg2 enrollmentRate:(double)arg3;
+ (id)getUserIdForScheme:(id)arg1 enrollmentPeriod:(double)arg2 enrollmentRate:(double)arg3 currentDate:(id)arg4 defaultsDomain:(id)arg5;
+ (void)setCurrentEnrollmentUserId:(id)arg1 forUserDefaults:(id)arg2 scheme:(id)arg3;
+ (id)readCurrentEnrollmentUserIdFromDefaults:(id)arg1 scheme:(id)arg2;
+ (void)setLastEnrollmentToDate:(id)arg1 forUserDefaults:(id)arg2 scheme:(id)arg3;
+ (id)readLastEnrollmentDateFromDefaults:(id)arg1 scheme:(id)arg2;

@end
