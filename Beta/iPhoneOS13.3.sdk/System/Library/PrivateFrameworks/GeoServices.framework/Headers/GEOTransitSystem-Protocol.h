/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/Swift-Protocol.h>

@class NSString;

@protocol GEOTransitArtworkDataSource;

@protocol GEOTransitSystem <Swift>

@property (nonatomic, readonly) unsigned long long muid;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) id <GEOTransitArtworkDataSource> artwork;

@end
