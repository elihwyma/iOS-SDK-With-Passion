/*
 Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, SKTileGroupRule;

@interface SKTileDefinition : NSObject

{
    NSMutableArray *_textures;
    NSMutableArray *_normals;
    unsigned long long _orientation;
    _Bool _frameDidChange;
    _Bool _nextFrameAffectsVertexBuffer;
    unsigned short _currentFrameIndex;
    float _currentFrameTime;
    NSMutableDictionary *_userData;
    NSString *_name;
    double _timePerFrame;
    unsigned long long _placementWeight;
    SKTileGroupRule *_parentRule;
    NSString *_uid;
    double _lastTargetTime;
    struct CGSize _size;
}

@property (weak, nonatomic) SKTileGroupRule *parentRule;
@property (retain, nonatomic) NSString *uid;
@property (nonatomic) unsigned short currentFrameIndex;
@property (nonatomic) double lastTargetTime;
@property (nonatomic) float currentFrameTime;
@property (nonatomic) _Bool frameDidChange;
@property (nonatomic) _Bool nextFrameAffectsVertexBuffer;
@property (copy, nonatomic) NSArray *textures;
@property (copy, nonatomic) NSArray *normalTextures;
@property (retain, nonatomic) NSMutableDictionary *userData;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) struct CGSize size;
@property (nonatomic) double timePerFrame;
@property (nonatomic) unsigned long long placementWeight;
@property (nonatomic) unsigned long long rotation;
@property (nonatomic) _Bool flipVertically;
@property (nonatomic) _Bool flipHorizontally;

+ (_Bool)supportsSecureCoding;
+ (id)tileDefinitionWithTexture:(id)arg1;
+ (id)tileDefinitionWithTexture:(id)arg1 size:(struct CGSize)arg2;
+ (id)tileDefinitionWithTexture:(id)arg1 normalTexture:(id)arg2 size:(struct CGSize)arg3;
+ (id)tileDefinitionWithTextures:(id)arg1 size:(struct CGSize)arg2 timePerFrame:(double)arg3;
+ (id)tileDefinitionWithTextures:(id)arg1 normalTextures:(id)arg2 size:(struct CGSize)arg3 timePerFrame:(double)arg4;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToNode:(id)arg1;
- (id)initWithTexture:(id)arg1;
- (void)setDataWithTexture:(id)arg1 normalTexture:(id)arg2 tileName:(id)arg3 size:(struct CGSize)arg4;
- (void)setDataWithTextures:(id)arg1 normalTextures:(id)arg2 timePerFrame:(double)arg3 tileName:(id)arg4 size:(struct CGSize)arg5;
- (id)initWithTexture:(id)arg1 size:(struct CGSize)arg2;
- (id)initWithTexture:(id)arg1 normalTexture:(id)arg2 size:(struct CGSize)arg3;
- (id)initWithTextures:(id)arg1 size:(struct CGSize)arg2 timePerFrame:(double)arg3;
- (id)initWithTextures:(id)arg1 normalTextures:(id)arg2 size:(struct CGSize)arg3 timePerFrame:(double)arg4;

@end
