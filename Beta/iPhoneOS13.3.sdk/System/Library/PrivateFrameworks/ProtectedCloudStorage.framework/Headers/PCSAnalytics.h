/*
 Image: /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/ProtectedCloudStorage
 */

#import <Security/SFAnalytics.h>

@interface PCSAnalytics : SFAnalytics

+ (id)databasePath;
+ (id)logger;

- (void)logSuccessForEvent:(struct NSString *)arg1;
- (void)logRecoverableError:(id)arg1 forEvent:(struct NSString *)arg2 withAttributes:(id)arg3;
- (void)logUnrecoverableError:(id)arg1 forEvent:(struct NSString *)arg2 withAttributes:(id)arg3;
- (void)noteEvent:(struct NSString *)arg1;
- (id)dateOfLastSuccessForEvent:(struct NSString *)arg1;

@end
