/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/_Geometry.h>

@class NSNumber;

@interface _Flower : _Geometry

{
    float _width;
    float _height;
    NSNumber *_tex;
}

@property (retain, nonatomic) NSNumber *tex;
@property (nonatomic) float width;
@property (nonatomic) float height;

@end
