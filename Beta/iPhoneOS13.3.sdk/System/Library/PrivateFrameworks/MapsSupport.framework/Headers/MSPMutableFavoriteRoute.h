/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <MapsSupport/MSPMutableFavorite.h>

@class GEOComposedWaypoint, GEOStorageRouteRequestStorage, NSString, NSUUID;

@interface MSPMutableFavoriteRoute : MSPMutableFavorite

@property (copy, nonatomic) GEOStorageRouteRequestStorage *routeRequestStorage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSUUID *storageIdentifier;
@property (nonatomic, readonly) GEOComposedWaypoint *startWaypoint;
@property (nonatomic, readonly) GEOComposedWaypoint *endWaypoint;
@property (nonatomic, readonly) int transportType;

+ (Class)mutableObjectClass;
+ (id)mutableObjectProtocol;
+ (Class)immutableObjectClass;
+ (id)immutableObjectProtocol;

- (id)transferToImmutableIfValidWithError:(out id *)arg1;
- (id)initWithBookmarkStorage:(id)arg1;

@end
