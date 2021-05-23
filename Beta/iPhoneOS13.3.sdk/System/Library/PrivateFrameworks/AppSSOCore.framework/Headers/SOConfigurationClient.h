/*
 Image: /System/Library/PrivateFrameworks/AppSSOCore.framework/AppSSOCore
 */

#import <Foundation/NSObject.h>

@class SOClient, SOConfiguration, SOConfigurationVersion;

@interface SOConfigurationClient : NSObject

{
    SOClient *_client;
    SOConfiguration *_configuration;
    SOConfigurationVersion *_configurationVersion;
}

@property (nonatomic, readonly) SOConfiguration *configuration;
@property (nonatomic, readonly) long long configVersion;

+ (id)defaultClient;

- (id)init;
- (void)_checkNewVersion;
- (id)profileForURL:(id)arg1 responseCode:(long long)arg2;
- (_Bool)willHandleURL:(id)arg1 responseCode:(long long)arg2 callerBundleIdentifier:(id)arg3;
- (void)_reloadConfig;

@end
