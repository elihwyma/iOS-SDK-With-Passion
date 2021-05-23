/*
 Image: /System/Library/Frameworks/Security.framework/Security
 */

#import <Security/Swift-Protocol.h>

@protocol SecuritydXPCProtocol <Swift>

- (unsigned short)SecItemAddAndNotifyOnSync:syncCallback:complete: /* Error: Ran out of types for this method. */;
- (unsigned short)secItemSetCurrentItemAcrossAllDevices:newCurrentItemHash:accessGroup:identifier:viewHint:oldCurrentItemReference:oldCurrentItemHash:complete: /* Error: Ran out of types for this method. */;
- (unsigned short)secItemFetchCurrentItemAcrossAllDevices:identifier:viewHint:fetchCloudValue:complete: /* Error: Ran out of types for this method. */;
- (unsigned short)secItemDigest:accessGroup:complete: /* Error: Ran out of types for this method. */;
- (unsigned short)secKeychainDeleteMultiuser:complete: /* Error: Ran out of types for this method. */;
- (unsigned short)secItemVerifyBackupIntegrity:completion: /* Error: Ran out of types for this method. */;

@end
