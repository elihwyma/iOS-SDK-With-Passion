/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDOperation.h>

@class CKDServerConfiguration, NSObject;

@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface CKDGlobalConfigurationOperation : CKDOperation

{
    CKDServerConfiguration *_configuration;
    NSObject<OS_dispatch_group> *_configurationFetchedGroup;
}

@property (retain, nonatomic) CKDServerConfiguration *configuration;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *configurationFetchedGroup;

- (void)main;
- (id)activityCreate;
- (_Bool)shouldCheckAppVersion;

@end
