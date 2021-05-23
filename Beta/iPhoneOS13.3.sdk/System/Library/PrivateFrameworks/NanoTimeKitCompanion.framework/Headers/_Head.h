/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/_Geometry.h>

@class MISSING_TYPE, NSMutableArray;

@interface _Head : _Geometry

{
    float _width;
    float _height;
    float _curHeadTilt;
    float _curHeadX;
    int _inAnimation;
    NSMutableArray *_texs;
    NSMutableArray *_blinkTexs;
    MISSING_TYPE *_bone;
    MISSING_TYPE *_offset;
}

@property (nonatomic) float width;
@property (nonatomic) float height;
@property (retain, nonatomic) NSMutableArray *texs;
@property (retain, nonatomic) NSMutableArray *blinkTexs;
@property (nonatomic) MISSING_TYPE *bone;
@property (nonatomic) MISSING_TYPE *offset;
@property (nonatomic) float curHeadTilt;
@property (nonatomic) float curHeadX;
@property (nonatomic) int inAnimation;

@end
