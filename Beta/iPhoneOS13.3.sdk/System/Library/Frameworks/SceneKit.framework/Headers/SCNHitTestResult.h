/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <Foundation/NSObject.h>

@class MISSING_TYPE, SCNNode;

@interface SCNHitTestResult : NSObject

{
    struct __C3DHitTestResult *_result;
}

@property (nonatomic, readonly) MISSING_TYPE *simdLocalCoordinates;
@property (nonatomic, readonly) MISSING_TYPE *simdWorldCoordinates;
@property (nonatomic, readonly) MISSING_TYPE *simdLocalNormal;
@property (nonatomic, readonly) MISSING_TYPE *simdWorldNormal;
@property (nonatomic, readonly) CDStruct_14d5dc5e simdModelTransform;
@property (nonatomic, readonly) SCNNode *node;
@property (nonatomic, readonly) long long geometryIndex;
@property (nonatomic, readonly) long long faceIndex;
@property (nonatomic, readonly) struct SCNVector3 localCoordinates;
@property (nonatomic, readonly) struct SCNVector3 worldCoordinates;
@property (nonatomic, readonly) struct SCNVector3 localNormal;
@property (nonatomic, readonly) struct SCNVector3 worldNormal;
@property (nonatomic, readonly) struct SCNMatrix4 modelTransform;
@property (nonatomic, readonly) SCNNode *boneNode;

+ (id)hitTestResultsFromHitTestResultRef:(struct __CFArray *)arg1;

- (void)dealloc;
- (id)description;
- (id)initWithResult:(struct __C3DHitTestResult *)arg1;
- (struct CGPoint)textureCoordinatesWithMappingChannel:(long long)arg1;
- (struct CGPoint)textureCoordinate;

@end
