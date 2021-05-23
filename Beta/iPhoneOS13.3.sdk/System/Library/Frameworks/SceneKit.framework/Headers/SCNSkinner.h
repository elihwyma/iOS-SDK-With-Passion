/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <Foundation/NSObject.h>

@class NSArray, SCNGeometry, SCNGeometrySource, SCNNode;

@interface SCNSkinner : NSObject

{
    struct __C3DSkinner *_skinner;
    SCNGeometry *_baseGeometry;
    _Bool _bonesAndIndicesCompression;
    SCNNode *_skeleton;
}

@property (weak, nonatomic) SCNNode *skeleton;
@property (retain, nonatomic) SCNGeometry *baseGeometry;
@property (nonatomic) struct SCNMatrix4 baseGeometryBindTransform;
@property (nonatomic, readonly) NSArray *boneInverseBindTransforms;
@property (nonatomic, readonly) NSArray *bones;
@property (nonatomic, readonly) SCNGeometrySource *boneWeights;
@property (nonatomic, readonly) SCNGeometrySource *boneIndices;

+ (_Bool)supportsSecureCoding;
+ (id)skinnerWithBaseGeometry:(id)arg1 bones:(id)arg2 boneInverseBindTransforms:(id)arg3 boneWeights:(id)arg4 boneIndices:(id)arg5;
+ (id)skinnerWithSkinnerRef:(struct __C3DSkinner *)arg1;
+ (struct __C3DSkinner *)_createSkinnerWithVertexCount:(long long)arg1 bones:(id)arg2 boneWeights:(id)arg3 boneIndices:(id)arg4 baseGeometry:(id)arg5;
+ (struct __C3DSkinner *)createSkinnerWithBaseGeometry:(id)arg1 bones:(id)arg2 boneWeights:(id)arg3 boneIndices:(id)arg4;
+ (struct __C3DSkinner *)_createSkinnerWithCompressedData:(id)arg1 bonesCount:(unsigned long long)arg2 vertexCount:(unsigned long long)arg3;
+ (id)_skinnerWithBaseGeometry:(id)arg1 skinnableGeometry:(id)arg2 bones:(id)arg3 boneInverseBindTransforms:(id)arg4 bindMatrix:(struct SCNMatrix4)arg5;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)scene;
- (id)joints;
- (const void *)__CFObject;
- (struct __C3DScene *)sceneRef;
- (void)_syncObjCModel;
- (void)_setBaseGeometry:(id)arg1;
- (struct __C3DSkinner *)skinnerRef;
- (void)setBones:(id)arg1;
- (id)initWithSkinnerRef:(struct __C3DSkinner *)arg1;
- (void)_setSkeleton:(id)arg1;
- (void)set_bonesAndIndicesCompression:(_Bool)arg1;
- (void)setBoneInverseBindTransforms:(id)arg1;
- (_Bool)wantsCPUSkinning;
- (void)setWantsCPUSkinning:(_Bool)arg1;
- (_Bool)_bonesAndIndicesCompression;

@end
