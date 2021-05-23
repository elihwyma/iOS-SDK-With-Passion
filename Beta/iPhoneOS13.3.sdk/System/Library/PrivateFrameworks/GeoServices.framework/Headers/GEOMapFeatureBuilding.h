/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSArray;

@interface GEOMapFeatureBuilding : NSObject

{
    CDStruct_0c54f6ee *_feature;
    NSArray *_sections;
}

@property (nonatomic, readonly) NSArray *sections;

- (void)dealloc;
- (id)initWithFeature:(CDStruct_0c54f6ee *)arg1;

@end
