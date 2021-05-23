/*
 Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

#import <NanoMailKitServer/Swift-Protocol.h>

@protocol NNMKFetchesSyncServiceServerDelegate <Swift>

- (unsigned short)fetchesSyncServiceServer:didSendProtobufSuccessfullyWithIDSIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchesSyncServiceServer:didFailSendingProtobufWithIDSIdentifier:errorCode: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchesSyncServiceServer:didRequestFetch: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchesSyncServiceServer:didRequestFetchInBatch: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchesSyncServiceServer:didRequestMoreMessages: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchesSyncServiceServer:didRequestMoreMessagesInBatch: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchesSyncServiceServer:didRequestMoreMessagesForConversation: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchesSyncServiceServer:didRequestContent: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchesSyncServiceServer:didRequestFullSync: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchesSyncServiceServer:didRequestHaltSync: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchesSyncServiceServer:didNotifyInitialSyncFinished: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchesSyncServiceServer:didNotifyAboutWebKitStatus: /* Error: Ran out of types for this method. */;

@end
