/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@class ARSkeleton3D, NSArray;

@interface ARSkeletonDefinition : NSObject

{
    NSArray *_jointNames;
    NSArray *_parentIndices;
    ARSkeleton3D *_neutralBodySkeleton3D;
}

@property (nonatomic, readonly) unsigned long long jointCount;
@property (nonatomic, readonly) NSArray *jointNames;
@property (nonatomic, readonly) NSArray *parentIndices;
@property (nonatomic, readonly) ARSkeleton3D *neutralBodySkeleton3D;

+ (id)defaultBody3DSkeletonDefinition;
+ (id)defaultBody2DSkeletonDefinition;

- (id)initDefault3DSkeletonDefinition;
- (id)initDefault2DSkeletonDefinition;
- (unsigned long long)indexForJointName:(id)arg1;

@end
