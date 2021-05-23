/*
 Image: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
 */

#import <Foundation/NSObject.h>

@class MISSING_TYPE, PKRegion;

@protocol NSObject;

@interface PKPhysicsField : NSObject

{
    shared_ptr_307a0f33 _field;
    PKRegion *_region;
    MISSING_TYPE *_position;
    float _rotation;
    MISSING_TYPE *_scale;
    _Bool _override;
}

@property (nonatomic) float strength;
@property (nonatomic) float falloff;
@property (nonatomic, getter=isEnabled) _Bool enabled;
@property (nonatomic, getter=isOverride) _Bool override;
@property (retain, nonatomic) id region;
@property (nonatomic) MISSING_TYPE *direction;
@property (nonatomic) unsigned int categoryBitMask;
@property (nonatomic) MISSING_TYPE *position;
@property (nonatomic) float rotation;
@property (nonatomic) MISSING_TYPE *scale;
@property (nonatomic) float minimumRadius;
@property (weak, nonatomic) id <NSObject> representedObject;

- (id)init;
- (void)dealloc;
- (_Bool)isActive;
- (void)setActive:(_Bool)arg1;
- (id).cxx_construct;
- (shared_ptr_307a0f33)_field;
- (_Bool)override;
- (void)set_field:(shared_ptr_307a0f33)arg1;
- (void)setIsOverride:(_Bool)arg1;

@end
