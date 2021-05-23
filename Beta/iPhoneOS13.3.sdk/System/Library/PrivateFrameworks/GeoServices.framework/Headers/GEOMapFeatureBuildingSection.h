/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@interface GEOMapFeatureBuildingSection : NSObject

{
    CDStruct_c3b9c2ee *_coordinates;
    unsigned long long _coordinateCount;
    double _baseHeight;
    double _height;
    CDStruct_0c54f6ee *_feature;
    unsigned long long _sectionIndex;
}

@property (nonatomic, readonly) CDStruct_c3b9c2ee *coordinates;
@property (nonatomic, readonly) unsigned long long coordinateCount;
@property (nonatomic, readonly) double baseHeight;
@property (nonatomic, readonly) double height;

- (void)dealloc;
- (id)initWithFeature:(CDStruct_0c54f6ee *)arg1 sectionIndex:(unsigned long long)arg2;

@end
