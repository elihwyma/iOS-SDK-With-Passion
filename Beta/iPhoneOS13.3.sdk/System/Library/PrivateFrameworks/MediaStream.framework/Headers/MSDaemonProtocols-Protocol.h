/*
 Image: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
 */

#import <MediaStream/Swift-Protocol.h>

@protocol MSDaemonProtocols <Swift>

- (unsigned short)deleteAssetCollections:personID: /* Error: Ran out of types for this method. */;
- (unsigned short)resetServerStateForPersonID: /* Error: Ran out of types for this method. */;
- (unsigned short)pollForSubscriptionUpdatesForPersonID: /* Error: Ran out of types for this method. */;
- (unsigned short)retryOutstandingActivities;
- (unsigned short)isBusyCompletionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)refreshServerSideConfigurationForPersonID: /* Error: Ran out of types for this method. */;
- (unsigned short)abortAllActivityForPersonID: /* Error: Ran out of types for this method. */;
- (unsigned short)serverSideConfigurationForPersonID:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)forgetEverythingForPersonID: /* Error: Ran out of types for this method. */;
- (unsigned short)pollForSubscriptionUpdatesTriggeredByPushNotificationForPersonID: /* Error: Ran out of types for this method. */;
- (unsigned short)dequeueAssetCollectionWithGUIDs:personID:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)enqueueAssetCollections:personID:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)pauseForUUID: /* Error: Ran out of types for this method. */;
- (unsigned short)unpauseForUUID: /* Error: Ran out of types for this method. */;

@end
