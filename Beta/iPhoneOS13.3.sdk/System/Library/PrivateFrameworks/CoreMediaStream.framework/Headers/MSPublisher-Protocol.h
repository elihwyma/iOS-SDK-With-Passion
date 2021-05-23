/*
 Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <CoreMediaStream/Swift-Protocol.h>

@protocol MSPublisherDelegate;

@protocol MSPublisher <Swift>

@property (nonatomic) id <MSPublisherDelegate> delegate;
@property (nonatomic) int publishBatchSize;

- (unsigned short)stop;
- (unsigned short)publish;
- (unsigned short)abort;
- (unsigned short)submitAssetCollectionsForPublication:skipAssetCollections: /* Error: Ran out of types for this method. */;
- (unsigned short)reenqueueQuarantinedAssetCollections;

@end
