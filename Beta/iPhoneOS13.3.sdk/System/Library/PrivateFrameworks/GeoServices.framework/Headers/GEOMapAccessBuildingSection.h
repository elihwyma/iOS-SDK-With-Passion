/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GEOMapAccessBuildingSection : NSObject

{
    CDStruct_c3b9c2ee *_coordinates;
    unsigned long long _coordinateCount;
    double _baseHeight;
    double _height;
    unsigned long long _sectionIndex;
    CDStruct_2c43369c _centerCoordinate;
    double _radius;
}

@property (nonatomic, readonly) CDStruct_c3b9c2ee centerCoordinate;
@property (nonatomic, readonly) double radius;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) CDStruct_c3b9c2ee *coordinates;
@property (nonatomic, readonly) unsigned long long coordinateCount;
@property (nonatomic, readonly) double baseHeight;
@property (nonatomic, readonly) double height;

- (void)dealloc;
- (id)initWithFeature:(CDStruct_0c54f6ee *)arg1 sectionIndex:(unsigned long long)arg2;

@end
