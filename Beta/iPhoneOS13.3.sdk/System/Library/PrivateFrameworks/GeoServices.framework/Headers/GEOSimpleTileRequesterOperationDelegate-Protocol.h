/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/Swift-Protocol.h>

@protocol GEOSimpleTileRequesterOperationDelegate <Swift>

- (unsigned short)checksumMethodForIncomingTileDataWithKey: /* Error: Ran out of types for this method. */;
- (unsigned short)shouldAllowEmptyDataForTileKey: /* Error: Ran out of types for this method. */;
- (unsigned short)operationFinished: /* Error: Ran out of types for this method. */;
- (unsigned short)operationFailed:error: /* Error: Ran out of types for this method. */;
- (unsigned short)verifyDataIntegrity:checksumMethod: /* Error: Ran out of types for this method. */;

@end
