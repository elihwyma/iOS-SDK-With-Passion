/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <CompanionSync/Swift-Protocol.h>

@class NSDictionary;

@protocol SYSyncEngineResponder <Swift>

@property (nonatomic, readonly) NSDictionary *extraTransportOptions;

- (unsigned short)willAcceptMessageWithHeader:messageID: /* Error: Ran out of types for this method. */;
- (unsigned short)handleSyncRequest:ofType:response: /* Error: Ran out of types for this method. */;
- (unsigned short)handleSyncResponse:ofType:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)handleOutOfBandData:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)handleFileTransfer:metadata:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)handleSyncError:forMessageWithIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)enqueuedMessageWithID:context: /* Error: Ran out of types for this method. */;
- (unsigned short)sentMessageWithID:context: /* Error: Ran out of types for this method. */;
- (unsigned short)deliveredMessageWithID:context: /* Error: Ran out of types for this method. */;
- (unsigned short)serializeForIncomingSession: /* Error: Ran out of types for this method. */;
- (unsigned short)currentDeviceProximityChanged: /* Error: Ran out of types for this method. */;
- (unsigned short)currentDeviceConnectionChanged: /* Error: Ran out of types for this method. */;

@end
