/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/Swift-Protocol.h>

@protocol GEOTileServerProxyDelegate <Swift>

- (unsigned short)proxy:loadedTile:forKey:info: /* Error: Ran out of types for this method. */;
- (unsigned short)proxy:failedToLoadTiles:error: /* Error: Ran out of types for this method. */;
- (unsigned short)proxy:failedToLoadAllPendingTilesWithError: /* Error: Ran out of types for this method. */;
- (unsigned short)proxy:willGoToNetworkForTiles: /* Error: Ran out of types for this method. */;
- (unsigned short)proxy:canShrinkDiskCacheByAmount: /* Error: Ran out of types for this method. */;
- (unsigned short)proxy:didShrinkDiskCacheByAmount: /* Error: Ran out of types for this method. */;

@end
