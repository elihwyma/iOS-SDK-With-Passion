/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <Foundation/NSObject.h>

@interface MCSignpostManager : NSObject

+ (void)willPostEffectiveSettingsChangedNotification;
+ (void)willSetFeature:(id)arg1;
+ (void)willGetFeature:(id)arg1;
+ (id)signpostsForTypeFilter:(unsigned long long)arg1 featureFilter:(id)arg2 duration:(double)arg3 error:(id *)arg4;

@end
