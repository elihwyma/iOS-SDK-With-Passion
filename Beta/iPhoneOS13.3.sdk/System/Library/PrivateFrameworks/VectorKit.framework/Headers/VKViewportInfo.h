/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface VKViewportInfo : NSObject

{
    CDStruct_2c43369c _centerCoordinate;
    long long _tileSize;
    float _zoomLevel;
    double _pitch;
    double _yaw;
}

@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic) CDStruct_c3b9c2ee centerCoordinate;
@property (nonatomic) float zoomLevel;
@property (nonatomic) long long tileSize;
@property (nonatomic) double pitch;
@property (nonatomic) double yaw;

- (id)initWithDictionaryRepresentation:(id)arg1;

@end
