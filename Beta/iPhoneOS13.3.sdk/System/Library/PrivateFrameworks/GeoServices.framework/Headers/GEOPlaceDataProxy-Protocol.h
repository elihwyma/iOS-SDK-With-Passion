/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/Swift-Protocol.h>

@protocol GEOPlaceDataProxy <Swift>

- (unsigned short)clearCache;
- (unsigned short)cancelRequest: /* Error: Ran out of types for this method. */;
- (unsigned short)shrinkBySizeSync: /* Error: Ran out of types for this method. */;
- (unsigned short)requestIdentifiers:resultProviderID:traits:options:auditToken:throttleToken:requesterHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)requestComponentsFromNetwork:identifier:resultProviderID:traits:auditToken:throttleToken:requesterHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)requestPhoneNumbers:allowCellularDataForLookup:traits:auditToken:throttleToken:requesterHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchAllCacheEntriesWithRequesterHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)trackPlaceData: /* Error: Ran out of types for this method. */;
- (unsigned short)performPlaceDataRequest:traits:cachePolicy:timeout:auditToken:throttleToken:networkActivity:requesterHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)calculateFreeableSpaceWithHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)shrinkBySize:finished: /* Error: Ran out of types for this method. */;
- (unsigned short)calculateFreeableSpaceSync;

@end
