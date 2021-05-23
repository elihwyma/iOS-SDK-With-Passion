/*
 Image: /System/Library/PrivateFrameworks/SOS.framework/SOS
 */

#import <SOS/Swift-Protocol.h>

@protocol SOSServerProtocol <Swift>

- (unsigned short)willStartSendingLocationUpdate;
- (unsigned short)startSendingLocationUpdateWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)startSendingLocationUpdateForReason:WithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)stopSendingLocationUpdate;
- (unsigned short)isSendingLocationUpdate: /* Error: Ran out of types for this method. */;
- (unsigned short)mostRecentLocationSentWithCompletion: /* Error: Ran out of types for this method. */;

@end
