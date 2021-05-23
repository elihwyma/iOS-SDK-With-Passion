/*
 Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

#import <NearField/Swift-Protocol.h>

@protocol NFRemoteAdminManagerInterface <Swift>

- (unsigned short)getSELDInfoForBroker: /* Error: Ran out of types for this method. */;
- (unsigned short)connectToServer:callback: /* Error: Ran out of types for this method. */;
- (unsigned short)registerForCallbacks: /* Error: Ran out of types for this method. */;
- (unsigned short)unregisterForCallbacks: /* Error: Ran out of types for this method. */;
- (unsigned short)registrationInfo: /* Error: Ran out of types for this method. */;
- (unsigned short)primaryRegionTopic: /* Error: Ran out of types for this method. */;
- (unsigned short)setRegistrationInfo:primaryRegionTopic:callback: /* Error: Ran out of types for this method. */;
- (unsigned short)nextRequestForServer:callback: /* Error: Ran out of types for this method. */;
- (unsigned short)queueServerConnection:callback: /* Error: Ran out of types for this method. */;
- (unsigned short)queueServerConnectionForApplets:callback: /* Error: Ran out of types for this method. */;
- (unsigned short)ingestCard:callback: /* Error: Ran out of types for this method. */;
- (unsigned short)cancelCardIngestion: /* Error: Ran out of types for this method. */;
- (unsigned short)getAPNPublicToken: /* Error: Ran out of types for this method. */;
- (unsigned short)deleteAllAppletsAndCleanupWithTSM: /* Error: Ran out of types for this method. */;

@end
