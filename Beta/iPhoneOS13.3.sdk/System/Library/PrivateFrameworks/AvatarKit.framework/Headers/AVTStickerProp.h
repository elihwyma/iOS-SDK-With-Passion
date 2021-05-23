/*
 Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
 */

#import <Foundation/NSObject.h>

@class NSArray, SCNNode;

@interface AVTStickerProp : NSObject

{
    _Bool _orientToCamera;
    _Bool _renderLast;
    SCNNode *_node;
    NSArray *_palettesDescriptions;
    NSArray *_shaderModifiers;
    struct SCNVector3 _position;
    struct SCNVector3 _rotation;
    struct SCNVector3 _scale;
    struct CGSize _size;
}

@property (retain, nonatomic) SCNNode *node;
@property (nonatomic, readonly) struct CGSize size;
@property (nonatomic, readonly) struct SCNVector3 position;
@property (nonatomic, readonly) struct SCNVector3 rotation;
@property (nonatomic, readonly) struct SCNVector3 scale;
@property (nonatomic, readonly) _Bool orientToCamera;
@property (nonatomic, readonly) _Bool renderLast;
@property (nonatomic, readonly) NSArray *palettesDescriptions;
@property (copy, nonatomic) NSArray *shaderModifiers;

+ (struct CGSize)getSizeInDictionary:(id)arg1;
+ (struct SCNVector3)getPositionInDictionary:(id)arg1;
+ (struct SCNVector3)getRotationInDictionary:(id)arg1;
+ (struct SCNVector3)getScaleInDictionary:(id)arg1;
+ (_Bool)getOrientToCameraInDictionary:(id)arg1;
+ (_Bool)getRenderLastInDictionary:(id)arg1;
+ (id)cacheKeyForSize:(struct CGSize)arg1 position:(struct SCNVector3)arg2 rotation:(struct SCNVector3)arg3 scale:(struct SCNVector3)arg4 palettesDescriptions:(id)arg5 filePath:(id)arg6;
+ (id)stickerPropCache;
+ (id)propFromDictionary:(id)arg1 assetsPath:(id)arg2;
+ (void)applyPalettesForAvatar:(id)arg1 toNode:(id)arg2 palettesDescriptions:(id)arg3;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)nodeName;
- (void)buildNodeForAvatar:(id)arg1 withCamera:(id)arg2 forExport:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)updateNode:(id)arg1 withContentAtTime:(CDStruct_1b6d18a9)arg2;
- (void)stickerGenerationWillBegin;
- (void)stickerGenerationDidEnd;
- (id)cloneWithShaderModifiers:(id)arg1;
- (id)initWithSize:(struct CGSize)arg1 scale:(struct SCNVector3)arg2 position:(struct SCNVector3)arg3 renderLast:(_Bool)arg4 orientToCamera:(_Bool)arg5 rotation:(struct SCNVector3)arg6 palettesDescriptions:(id)arg7 shaderModifiers:(id)arg8;
- (void)applyCamera:(id)arg1 toNode:(id)arg2 distToHead:(double)arg3;

@end
