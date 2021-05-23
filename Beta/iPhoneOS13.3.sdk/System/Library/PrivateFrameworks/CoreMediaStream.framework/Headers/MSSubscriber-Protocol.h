/*
 Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@protocol MSSubscriberDelegate;

@protocol MSSubscriber

@property (nonatomic) id <MSSubscriberDelegate> delegate;

- (unsigned short)stop;
- (unsigned short)abort;
- (unsigned short)subscribedStreams;
- (unsigned short)checkForOutstandingActivities;
- (unsigned short)resetSync;
- (unsigned short)checkForNewAssetCollections;
- (unsigned short)retrieveAssets: /* Error: Ran out of types for this method. */;
- (unsigned short)ownSubscribedStream;

@end
