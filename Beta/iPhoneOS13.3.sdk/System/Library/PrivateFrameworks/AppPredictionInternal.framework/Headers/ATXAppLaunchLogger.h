/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <AppPredictionInternal/ATXNotificationsDatabase.h>

@class NSString;

@interface ATXAppLaunchLogger : ATXNotificationsDatabase

{
    _Bool _enabled;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (void)setEnabled:(_Bool)arg1;
- (id)_init;
- (long long)latestVersion;
- (id)getMetrics;
- (id)createCustomSchema;
- (void)logAppLaunchFrom:(unsigned long long)arg1 at:(id)arg2;

@end
