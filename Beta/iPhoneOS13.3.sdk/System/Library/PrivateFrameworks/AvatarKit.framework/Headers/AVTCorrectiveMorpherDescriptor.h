/*
 Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
 */

#import <Foundation/NSObject.h>

@class SCNMorpher, SCNNode;

@interface AVTCorrectiveMorpherDescriptor : NSObject

{
    SCNMorpher *_correctiveWriteMorpher;
    long long _correctiveTargetIndex;
    SCNNode *_drivingReadMorpherNode0;
    SCNNode *_drivingReadMorpherNode1;
    SCNNode *_drivingReadMorpherNode2;
    SCNNode *_drivingReadMorpherNode3;
    long long _drivingTargetIndex0;
    long long _drivingTargetIndex1;
    long long _drivingTargetIndex2;
    long long _drivingTargetIndex3;
    long long _drivingTargetCount;
}

@property (retain, nonatomic) SCNMorpher *correctiveWriteMorpher;
@property (nonatomic) long long correctiveTargetIndex;
@property (retain, nonatomic) SCNNode *drivingReadMorpherNode0;
@property (retain, nonatomic) SCNNode *drivingReadMorpherNode1;
@property (retain, nonatomic) SCNNode *drivingReadMorpherNode2;
@property (retain, nonatomic) SCNNode *drivingReadMorpherNode3;
@property (nonatomic) long long drivingTargetIndex0;
@property (nonatomic) long long drivingTargetIndex1;
@property (nonatomic) long long drivingTargetIndex2;
@property (nonatomic) long long drivingTargetIndex3;
@property (nonatomic) long long drivingTargetCount;

@end
