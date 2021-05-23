/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@interface CRKUsageStatistics : NSObject

+ (void)clearDistributionKey:(id)arg1;
+ (void)incrementKey:(id)arg1;
+ (void)pushDouble:(double)arg1 forKey:(id)arg2;
+ (void)logWillAutomaticallyJoinCourses:(_Bool)arg1;
+ (void)logDidAcceptJoinCourse;
+ (void)logDidDenyJoinCourse;
+ (void)logDidModifyPermission;
+ (void)logDidAllowAction;
+ (void)logDidDenyAction;
+ (void)logDidShareDocument;
+ (void)logDidShareLink;
+ (void)logDidSuccessfullyEnroll;
+ (void)logDidEnterInvalidEnrollmentPin;
+ (void)logDidFailEnrollment;
+ (void)resetConfigurationCounts;
+ (void)logDidDeleteCourse;
+ (void)logCourseCount:(unsigned long long)arg1;

@end
