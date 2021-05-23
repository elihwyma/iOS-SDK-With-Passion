/*
 Image: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
 */

#import <ATFoundation/Swift-Protocol.h>

@class MISSING_TYPE;

@protocol ATAssetLinkDelegate;

@protocol ATAssetLink <Swift>

@property (nonatomic, readonly, getter=isOpen) _Bool open;
@property (weak, nonatomic) id <ATAssetLinkDelegate> delegate;

- (MISSING_TYPE *)open;
- (MISSING_TYPE *)close;
- (MISSING_TYPE *)priority;
- (MISSING_TYPE *)maximumBatchSize;
- (MISSING_TYPE *)enqueueAssets:force: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)canEnqueueAsset: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)cancelAssets: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)prioritizeAsset: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)linkIsReady;

@end
