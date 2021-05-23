/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <BulletinDistributorCompanion/Swift-Protocol.h>

@protocol BLTAbstractIDSDevice;

@protocol BLTAbstractIDSService <Swift>

@property (nonatomic, readonly) id <BLTAbstractIDSDevice> defaultPairedDevice;

- (unsigned short)removeDelegate: /* Error: Ran out of types for this method. */;
- (unsigned short)addDelegate:queue: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithService: /* Error: Ran out of types for this method. */;
- (unsigned short)sendProtobuf:toDestinations:priority:options:identifier:error: /* Error: Ran out of types for this method. */;
- (unsigned short)setProtobufAction:forIncomingRequestsOfType: /* Error: Ran out of types for this method. */;
- (unsigned short)setProtobufAction:forIncomingResponsesOfType: /* Error: Ran out of types for this method. */;
- (unsigned short)sendResourceAtURL:metadata:toDestinations:priority:options:identifier:error: /* Error: Ran out of types for this method. */;

@end
