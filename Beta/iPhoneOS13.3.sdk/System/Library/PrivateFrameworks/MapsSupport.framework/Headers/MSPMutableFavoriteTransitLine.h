/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <MapsSupport/MSPMutableFavorite.h>

@class MSPTransitLineBookmark, NSString, NSUUID;

@protocol GEOTransitLine;

@interface MSPMutableFavoriteTransitLine : MSPMutableFavorite

@property (nonatomic, readonly) MSPTransitLineBookmark *transitLineBookmark;
@property (retain, nonatomic) id <GEOTransitLine> transitLine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSUUID *storageIdentifier;

+ (Class)mutableObjectClass;
+ (id)mutableObjectProtocol;
+ (Class)immutableObjectClass;
+ (id)immutableObjectProtocol;

- (_Bool)isUserVisibleDuplicateOfFavorite:(id)arg1;
- (id)transferToImmutableIfValidWithError:(out id *)arg1;
- (id)initWithBookmarkStorage:(id)arg1;

@end
