/*
 Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
 */

#import <Foundation/NSObject.h>

@class SCNMorpher, SCNNode;

@interface AVTPhysicalizedMorpherDescriptor : NSObject

{
    _Bool _mirrored;
    float _simulationFactor;
    SCNNode *_referenceNode;
    SCNNode *_drivingNode;
    SCNMorpher *_writeMorpher;
    unsigned long long _forwardMorphTargetIndex;
    unsigned long long _backwardMorphTargetIndex;
    unsigned long long _leftwardMorphTargetIndex;
    unsigned long long _rightwardMorphTargetIndex;
    unsigned long long _upwardMorphTargetIndex;
    unsigned long long _downwardMorphTargetIndex;
    SCNNode *_extraSimulationFactorReadMorpherNode;
    unsigned long long _extraSimulationFactorTargetIndex;
}

@property (nonatomic) float simulationFactor;
@property (retain, nonatomic) SCNNode *referenceNode;
@property (retain, nonatomic) SCNNode *drivingNode;
@property (retain, nonatomic) SCNMorpher *writeMorpher;
@property (nonatomic) unsigned long long forwardMorphTargetIndex;
@property (nonatomic) unsigned long long backwardMorphTargetIndex;
@property (nonatomic) unsigned long long leftwardMorphTargetIndex;
@property (nonatomic) unsigned long long rightwardMorphTargetIndex;
@property (nonatomic) unsigned long long upwardMorphTargetIndex;
@property (nonatomic) unsigned long long downwardMorphTargetIndex;
@property (retain, nonatomic) SCNNode *extraSimulationFactorReadMorpherNode;
@property (nonatomic) unsigned long long extraSimulationFactorTargetIndex;
@property (nonatomic) _Bool mirrored;

@end
