/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/Swift-Protocol.h>

@class CKContainerID, CKDFlowControlManager, CKDPCSManager, CKDServerConfiguration, CKDZoneGatekeeper, NSString;

@protocol CKDContextInfoProvider <Swift>

@property (nonatomic, readonly) long long contextType;
@property (nonatomic, readonly) CKDServerConfiguration *config;
@property (nonatomic, readonly) CKDFlowControlManager *flowControlManager;
@property (nonatomic, readonly) CKDPCSManager *pcsManager;
@property (nonatomic, readonly) CKDZoneGatekeeper *foregroundZoneGatekeeper;
@property (nonatomic, readonly) CKDZoneGatekeeper *backgroundZoneGatekeeper;
@property (copy, readonly) NSString *containerScopedUserID;
@property (nonatomic, readonly) CKContainerID *containerID;
@property (nonatomic, readonly) NSString *applicationBundleID;
@property (nonatomic, readonly) NSString *associatedApplicationBundleID;
@property (nonatomic, readonly) NSString *sourceApplicationBundleID;
@property (nonatomic, readonly) NSString *personaID;
@property (nonatomic, readonly) NSString *hardwareID;
@property (nonatomic, readonly) NSString *deviceName;
@property (nonatomic, readonly) NSString *languageCode;
@property (nonatomic, readonly) NSString *regionCode;
@property (nonatomic, readonly) NSString *applicationVersion;
@property (nonatomic, readonly) NSString *applicationFrameworkCachesDirectory;
@property (nonatomic, readonly) NSString *applicationPackageStagingDirectory;
@property (nonatomic, readonly) _Bool bypassPCSEncryption;
@property (nonatomic, readonly) _Bool canAccessProtectionData;
@property (nonatomic, readonly) _Bool canAuthWithCloudKit;
@property (nonatomic, readonly) _Bool hasSystemServiceEntitlement;
@property (nonatomic, readonly) NSString *apsEnvironmentString;
@property (nonatomic, readonly) NSString *applicationBundleIDForPush;
@property (nonatomic, readonly) NSString *applicationBundleIDForServer;
@property (nonatomic, readonly) NSString *processName;

- (unsigned short)performRequest: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchImportantUserIDsForOperation:withCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)baseURLForServerType:partitionType: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchServerEnvironmentForOperation:withCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)deviceIDForOperation: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchConfigurationForOperation:withCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchPublicURLForServerType:operation:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchPrivateURLForServerType:operation:completionHandler: /* Error: Ran out of types for this method. */;

@end
