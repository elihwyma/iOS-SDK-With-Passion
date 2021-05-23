/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/Swift-Protocol.h>

@class SKUIArtwork;

@protocol SKUIArtworkProviding <Swift>

@property (nonatomic, readonly) SKUIArtwork *largestArtwork;
@property (nonatomic, readonly) SKUIArtwork *smallestArtwork;

+ (unsigned short)canHandleArtworkFormat: /* Error: Ran out of types for this method. */;

- (unsigned short)hasArtwork;
- (unsigned short)artworkForSize: /* Error: Ran out of types for this method. */;
- (unsigned short)artworkURLForSize: /* Error: Ran out of types for this method. */;
- (unsigned short)bestArtworkForSize: /* Error: Ran out of types for this method. */;
- (unsigned short)artworkWithWidth: /* Error: Ran out of types for this method. */;
- (unsigned short)bestArtworkForScaledSize: /* Error: Ran out of types for this method. */;
- (unsigned short)preferredExactArtworkForSize: /* Error: Ran out of types for this method. */;

@end
