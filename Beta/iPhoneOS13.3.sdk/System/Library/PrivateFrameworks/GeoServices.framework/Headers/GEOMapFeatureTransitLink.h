/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOMapFeatureLine.h>

@class NSString;

@interface GEOMapFeatureTransitLink : GEOMapFeatureLine

{
    CDStruct_32d7d945 *_transitLink;
    unsigned long long _lineIndex;
}

@property (nonatomic, readonly) struct _GEOTileKey tileKey;
@property (nonatomic, readonly) CDStruct_32d7d945 *transitLink;
@property (nonatomic, readonly) NSString *internalLineName;

- (void)dealloc;
- (id)initWithTransitLink:(CDStruct_32d7d945 *)arg1 lineIndex:(unsigned long long)arg2;
- (id)_containingTile;
- (CDStruct_6e3f967a *)_tilePointsForSection:(unsigned long long)arg1 withCount:(out unsigned long long *)arg2;

@end
