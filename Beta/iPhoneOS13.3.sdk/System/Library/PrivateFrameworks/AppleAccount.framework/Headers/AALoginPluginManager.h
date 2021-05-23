/*
 Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <Foundation/NSObject.h>

@class NSArray;

@protocol AASetupAssistantDelegateService, OS_dispatch_queue;

@interface AALoginPluginManager : NSObject

{
    NSArray *_allowedPluginBundleIDs;
    NSArray *_plugins;
    _Bool _shouldStashLoginResponse;
    NSObject<OS_dispatch_queue> *_pluginNotificationQueue;
    id <AASetupAssistantDelegateService> _idsPlugin;
    _Bool _shouldSkipiTunesPlugin;
}

@property (nonatomic) _Bool shouldSkipiTunesPlugin;
@property (nonatomic) _Bool shouldStashLoginResponse;

+ (id)sharedInstance;

- (id)init;
- (id)_plugins;
- (id)_loadPluginsLimitedToBundleIDs:(id)arg1;
- (id)_idsPlugin;
- (void)notifyServicesOfLoginResponse:(id)arg1 forAppleID:(id)arg2 password:(id)arg3 rawPassword:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (_Bool)_notifyServicesOfLoginResponse:(id)arg1 forAppleID:(id)arg2 password:(id)arg3 rawPassword:(id)arg4;
- (id)_createLoginContextForAppleID:(id)arg1 rawPassword:(id)arg2 loginResponse:(id)arg3;
- (void)restrictToPluginBundleIDs:(id)arg1;
- (id)collectParametersForLoginRequest;
- (id)collectParametersForIdentityEstablishmentRequest;
- (void)notifyServicesOfLoginResponse:(id)arg1 forAppleID:(id)arg2 password:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)unstashLoginResponse;

@end
