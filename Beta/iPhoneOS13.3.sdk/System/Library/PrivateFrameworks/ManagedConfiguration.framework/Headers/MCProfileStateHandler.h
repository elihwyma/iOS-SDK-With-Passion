/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <ManagedConfiguration/MCStateHandler.h>

@interface MCProfileStateHandler : MCStateHandler

+ (id)settingsStateDictionaryWithDetailsIncluded:(_Bool)arg1;
+ (id)restrictionsStateDictionaryWithDetailsIncluded:(_Bool)arg1;
+ (void)addProfileSettingsStateHandler;
+ (void)addProfileRestrictionsStateHandler;

@end
