/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <MapsSupport/MSPMutableFavorite.h>

@class GEOMapRegion, NSString, NSUUID;

@interface MSPMutableFavoriteRegion : MSPMutableFavorite

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) GEOMapRegion *geoMapRegion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSUUID *storageIdentifier;

+ (Class)mutableObjectClass;
+ (id)mutableObjectProtocol;
+ (Class)immutableObjectClass;
+ (id)immutableObjectProtocol;

- (id)transferToImmutableIfValidWithError:(out id *)arg1;
- (id)initWithBookmarkStorage:(id)arg1;

@end
