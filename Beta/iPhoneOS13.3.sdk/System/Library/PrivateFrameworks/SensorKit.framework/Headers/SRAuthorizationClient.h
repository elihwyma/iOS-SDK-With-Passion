/*
 Image: /System/Library/PrivateFrameworks/SensorKit.framework/SensorKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSMapTable, NSSet, NSString, NSXPCConnection;

@interface SRAuthorizationClient : NSObject

{
    _Bool _prerequisiteMet;
    int _registrationToken;
    NSXPCConnection *_connection;
    NSMapTable *_listeners;
    NSSet *_actualAuthorizedServices;
}

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSMapTable *listeners;
@property (copy) NSSet *actualAuthorizedServices;
@property _Bool prerequisiteMet;
@property int registrationToken;
@property (copy, readonly) NSSet *authorizedServices;
@property (nonatomic) _Bool dataCollectionEnabled;
@property (nonatomic) _Bool requiredOnboardingCompleted;
@property (copy, nonatomic, readonly) NSString *requiredAppIdentifier;
@property (copy, nonatomic, readonly) NSString *requiredAppiTunesIdentifier;
@property (copy, nonatomic, readonly) NSString *studyBundleIdPrefix;
@property (copy, nonatomic, readonly) NSString *requiredAppDataDeepLinkIdentifier;
@property (copy, nonatomic, readonly) NSString *requiredAppStudiesDeepLinkIdentifier;
@property (copy, readonly) NSDictionary *bundleIdentifiersPendingAuthorization;
@property (copy, readonly) NSDictionary *bundlePathMap;
@property (nonatomic, readonly) NSArray *legacyResearchStudyBundleIDs;
@property (nonatomic, readonly) NSString *legacyResearchStudyEntitlement;

+ (void)initialize;
+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (id)initWithConnection:(id)arg1;
- (void)addListener:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addToBundlePathMap:(id)arg1;
- (void)setServiceStartTimeForService:(id)arg1;
- (void)removeFromBundlePathMap:(id)arg1;
- (void)addBundle:(id)arg1 toPendingAuthorizations:(id)arg2;
- (void)removeBundle:(id)arg1 fromPendingAuthorizations:(id)arg2;
- (id)serviceStartTimeForService:(id)arg1;
- (void)authorizedServicesDidChange:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)registerForPrerequisitesUpdated;
- (void)unregisterForPrerequisitesUpdated;
- (void)notifyAuthorizationChangeForBundleIdentifier:(id)arg1;
- (void)addListener:(id)arg1 forBundleId:(id)arg2;

@end
