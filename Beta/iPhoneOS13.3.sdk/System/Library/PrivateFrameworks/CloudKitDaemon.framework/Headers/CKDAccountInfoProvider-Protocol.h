/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/Swift-Protocol.h>

@class CKAccountOverrideInfo, NSString;

@protocol CKDAccountInfoProvider <Swift>

@property (nonatomic, readonly) NSString *accountIdentifier;
@property (nonatomic, readonly) _Bool isAnonymousAccount;
@property (nonatomic, readonly) _Bool isUnitTestingAccount;
@property (nonatomic, readonly) _Bool accountWantsPushRegistration;
@property (nonatomic, readonly) _Bool isCarryAccount;
@property (nonatomic, readonly) _Bool isiCloudDevEnvironmentAccount;
@property (nonatomic, readonly) NSString *serverPreferredPushEnvironment;
@property (nonatomic, readonly) NSString *displayedHostname;
@property (nonatomic, readonly) _Bool isFakeAccount;
@property (nonatomic, readonly) CKAccountOverrideInfo *fakeAccountInfo;

- (unsigned short)dsid;
- (unsigned short)iCloudAuthTokenWithAccessProvider:error: /* Error: Ran out of types for this method. */;
- (unsigned short)cloudKitAuthTokenWithAccessProvider:error: /* Error: Ran out of types for this method. */;
- (unsigned short)cloudKitAuthTokenWithAccessProvider:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)iCloudAuthTokenWithAccessProvider:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)renewCloudKitAuthTokenWithReason:shouldForce:accessProvider:failedToken:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)renewiCloudAuthTokenWithReason:shouldForce:accessProvider:failedToken:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)sharingURLHostname;

@end
