/*
 Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

#import <NearField/Swift-Protocol.h>

@protocol NFReaderSessionInterface <Swift>

- (unsigned short)disconnect: /* Error: Ran out of types for this method. */;
- (unsigned short)startPollingForTags:sessionConfig:callback: /* Error: Ran out of types for this method. */;
- (unsigned short)startPollingForNDEFMessagesWithSessionConfig:callback: /* Error: Ran out of types for this method. */;
- (unsigned short)stopPolling: /* Error: Ran out of types for this method. */;
- (unsigned short)restartPolling: /* Error: Ran out of types for this method. */;
- (unsigned short)connect:callback: /* Error: Ran out of types for this method. */;
- (unsigned short)transceive:callback: /* Error: Ran out of types for this method. */;
- (unsigned short)checkPresence: /* Error: Ran out of types for this method. */;
- (unsigned short)updateSharingUIScanText:callback: /* Error: Ran out of types for this method. */;
- (unsigned short)updateSharingUIStateOnInvalidation:callback: /* Error: Ran out of types for this method. */;
- (unsigned short)ndefRead: /* Error: Ran out of types for this method. */;
- (unsigned short)ndefWrite:callback: /* Error: Ran out of types for this method. */;
- (unsigned short)checkNdefSupport: /* Error: Ran out of types for this method. */;
- (unsigned short)writeProtectNDEFTag: /* Error: Ran out of types for this method. */;

@end
