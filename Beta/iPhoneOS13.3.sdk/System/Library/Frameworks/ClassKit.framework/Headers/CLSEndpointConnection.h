/*
 Image: /System/Library/Frameworks/ClassKit.framework/ClassKit
 */

#import <Foundation/NSObject.h>

@class NSString, NSXPCConnection, NSXPCListenerEndpoint;

@interface CLSEndpointConnection : NSObject

{
    struct os_unfair_recursive_lock_s _lock;
    NSXPCConnection *_serverConnection;
    NSXPCListenerEndpoint *_endpoint;
    _Bool _connectionBorked;
    _Bool _interrupted;
    int _progressdAvailableToken;
    int _devModeChangedToken;
    NSString *_overrideBundleIdentifier;
    CDUnknownBlockType _onInterupt;
    CDUnknownBlockType _onConnect;
}

@property (copy, nonatomic) NSString *overrideBundleIdentifier;
@property (copy, nonatomic) CDUnknownBlockType onInterupt;
@property (copy, nonatomic) CDUnknownBlockType onConnect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)classKitEnvironment;
+ (_Bool)isInDevelopmentEnvironment;
+ (id)instanceForEndpoint:(id)arg1;
+ (_Bool)isClassKitEnabled;
+ (_Bool)isAllowedToMakeXPCCalls;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)lock;
- (void)unlock;
- (void)addBarrierBlock:(CDUnknownBlockType)arg1;
- (id)initWithEndpoint:(id)arg1;
- (void)connect;
- (id)serverConnection;
- (void)_registerForDarwinNotifications;
- (id)dataServer:(CDUnknownBlockType)arg1;
- (id)syncDataServer:(CDUnknownBlockType)arg1;
- (id)utilityServer:(CDUnknownBlockType)arg1;
- (id)syncUtilityServer:(CDUnknownBlockType)arg1;
- (void)devModeChanged;
- (_Bool)isBorked;
- (void)connectionInterupted;
- (void)connectionBorked;
- (void)_updateBundleIdentifier:(id)arg1 forConnection:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)syncServer:(CDUnknownBlockType)arg1;
- (id)server:(CDUnknownBlockType)arg1;
- (void)_envokeOnInteruptCallback;
- (void)listAppsWithCompletion:(CDUnknownBlockType)arg1;
- (void)setOverrideBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteAppWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)accountChanged;

@end
