/*
 Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

#import <AirTrafficDevice/Swift-Protocol.h>

@protocol ATAssetLinkDelegate;

@protocol ATAssetLink <Swift>

@property (nonatomic, readonly, getter=isOpen) _Bool open;
@property (weak, nonatomic) id <ATAssetLinkDelegate> delegate;

- (unsigned short)open;
- (unsigned short)close;
- (unsigned short)priority;
- (unsigned short)maximumBatchSize;
- (unsigned short)enqueueAssets:force: /* Error: Ran out of types for this method. */;
- (unsigned short)canEnqueueAsset: /* Error: Ran out of types for this method. */;
- (unsigned short)cancelAssets: /* Error: Ran out of types for this method. */;
- (unsigned short)prioritizeAsset: /* Error: Ran out of types for this method. */;
- (unsigned short)linkIsReady;

@end
