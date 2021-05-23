/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <Foundation/NSObject.h>

@class PCMatrix44Double;

@interface JTEffectFrame : NSObject

{
    _Bool _isPosterFrame;
    double _rotation;
    PCMatrix44Double *_transform;
    PCMatrix44Double *_objectTransform;
    PCMatrix44Double *_clipTransform;
    struct CGPoint _center;
    struct CGSize _size;
    struct CGPoint _scale;
    struct CGSize _relativeToSize;
    struct CGPoint _midpoint;
    struct CGPoint _trackedMidpoint;
    struct CGPoint _imagePoints0;
    struct CGPoint _imagePoints1;
    struct CGPoint _imagePoints2;
    struct CGPoint _imagePoints3;
    struct CGPoint _trackedImagePoints0;
    struct CGPoint _trackedImagePoints1;
    struct CGPoint _trackedImagePoints2;
    struct CGPoint _trackedImagePoints3;
    CDStruct_1b6d18a9 _time;
    struct CGRect _bounds;
}

@property (nonatomic) CDStruct_1b6d18a9 time;
@property (nonatomic) _Bool isPosterFrame;
@property (nonatomic) struct CGPoint center;
@property (nonatomic) struct CGSize size;
@property (nonatomic) struct CGPoint scale;
@property (nonatomic) double rotation;
@property (nonatomic) struct CGSize relativeToSize;
@property (nonatomic) struct CGRect bounds;
@property (nonatomic) struct CGPoint midpoint;
@property (nonatomic) struct CGPoint trackedMidpoint;
@property (nonatomic) struct CGPoint imagePoints0;
@property (nonatomic) struct CGPoint imagePoints1;
@property (nonatomic) struct CGPoint imagePoints2;
@property (nonatomic) struct CGPoint imagePoints3;
@property (nonatomic) struct CGPoint trackedImagePoints0;
@property (nonatomic) struct CGPoint trackedImagePoints1;
@property (nonatomic) struct CGPoint trackedImagePoints2;
@property (nonatomic) struct CGPoint trackedImagePoints3;
@property (retain, nonatomic) PCMatrix44Double *transform;
@property (retain, nonatomic) PCMatrix44Double *objectTransform;
@property (retain, nonatomic) PCMatrix44Double *clipTransform;

- (id)init;
- (id)description;

@end
