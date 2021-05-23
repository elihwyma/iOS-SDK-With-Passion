/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@interface GEOMapFeatureLine : NSObject

{
    CDStruct_c3b9c2ee *_coordinates;
    unsigned long long _coordinateCount;
    double _length;
    _Bool _isFlipped;
}

@property (nonatomic, readonly) CDStruct_c3b9c2ee *coordinates;
@property (nonatomic, readonly) unsigned long long coordinateCount;
@property (nonatomic, readonly) double length;

- (id)init;
- (void)dealloc;
- (id)_containingTile;
- (CDStruct_6e3f967a *)_tilePointsForSection:(unsigned long long)arg1 withCount:(out unsigned long long *)arg2;

@end
