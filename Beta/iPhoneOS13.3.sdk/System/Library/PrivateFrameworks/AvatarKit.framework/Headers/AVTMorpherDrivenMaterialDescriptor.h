/*
 Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
 */

#import <Foundation/NSObject.h>

@class NSString, SCNMaterial, SCNNode;

@interface AVTMorpherDrivenMaterialDescriptor : NSObject

{
    _Bool _isTrigger;
    float _lastWeight;
    float _threshold;
    float _accel;
    float _decel;
    SCNNode *_readMorpherNode;
    long long _morphTargetIndex;
    SCNMaterial *_material;
    NSString *_propertyName;
}

@property (retain, nonatomic) SCNNode *readMorpherNode;
@property (nonatomic) long long morphTargetIndex;
@property (retain, nonatomic) SCNMaterial *material;
@property (copy, nonatomic) NSString *propertyName;
@property (nonatomic) float lastWeight;
@property (nonatomic) _Bool isTrigger;
@property (nonatomic) float threshold;
@property (nonatomic) float accel;
@property (nonatomic) float decel;

@end
