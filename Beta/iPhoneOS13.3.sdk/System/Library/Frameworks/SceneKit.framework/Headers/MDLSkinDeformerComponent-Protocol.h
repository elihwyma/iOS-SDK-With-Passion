/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/Swift-Protocol.h>

@class NSArray, NSData;

@protocol MDLSkinDeformerComponent <Swift>

@property (nonatomic, readonly) NSArray *jointPaths;
@property (nonatomic, readonly) NSData *jointBindTransforms;
@property (nonatomic, readonly) CDStruct_14d5dc5e meshBindTransform;

- (unsigned short)copyJointBindTransformsInto:maxCount: /* Error: Ran out of types for this method. */;

@end
