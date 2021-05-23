/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/_Geometry.h>

@class NSArray, NSNumber;

@interface _Arms : _Geometry

{
    float _leftShoulderX;
    float _rightShoulderX;
    float _leftShoulderAdjustment;
    float _rightShoulderAdjustment;
    float _curLeftBend;
    float _curRightBend;
    NSArray *_texHandMnut;
    NSNumber *_texHandHour;
    NSNumber *_texArm;
    unsigned long long _mtlBufHandOffset;
    unsigned long long _mtlBufArmOffset;
}

@property (retain, nonatomic) NSArray *texHandMnut;
@property (retain, nonatomic) NSNumber *texHandHour;
@property (retain, nonatomic) NSNumber *texArm;
@property (nonatomic) unsigned long long mtlBufHandOffset;
@property (nonatomic) unsigned long long mtlBufArmOffset;
@property (nonatomic) float leftShoulderX;
@property (nonatomic) float rightShoulderX;
@property (nonatomic) float leftShoulderAdjustment;
@property (nonatomic) float rightShoulderAdjustment;
@property (nonatomic) float curLeftBend;
@property (nonatomic) float curRightBend;

@end
