/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface GEOMapAccessBuilding : NSObject

{
    CDStruct_0c54f6ee *_buildingFeature;
    NSArray *_sections;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *sections;

- (void)dealloc;
- (id)initWithBuildingFeature:(CDStruct_0c54f6ee *)arg1;

@end
