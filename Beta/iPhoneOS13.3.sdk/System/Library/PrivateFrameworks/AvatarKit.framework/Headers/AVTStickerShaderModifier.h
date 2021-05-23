/*
 Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface AVTStickerShaderModifier : NSObject

{
    _Bool _forceDoubleSided;
    NSString *_entryPoint;
    NSString *_geometryName;
    NSString *_data;
    NSArray *_properties;
}

@property (nonatomic, readonly) NSString *entryPoint;
@property (nonatomic, readonly) NSString *geometryName;
@property (nonatomic, readonly) NSString *data;
@property (nonatomic, readonly) NSArray *properties;
@property (nonatomic, readonly) _Bool forceDoubleSided;

+ (id)shaderModifierCache;
+ (id)shaderModifierFromDictionary:(id)arg1 assetsPath:(id)arg2;
+ (id)entryPointForModifierName:(id)arg1;
+ (id)encapsulateShaderData:(id)arg1;

- (id)description;
- (_Bool)applyToAvatar:(id)arg1;
- (void)removeFromAvatar:(id)arg1 error:(id *)arg2;
- (_Bool)applyToNode:(id)arg1;
- (_Bool)applyToNodeHierarchy:(id)arg1;
- (id)initWithEntryPoint:(id)arg1 geometryName:(id)arg2 data:(id)arg3 properties:(id)arg4 forceDoubleSided:(_Bool)arg5;
- (id)cloneWithProperties:(id)arg1;
- (id)findMaterialsForGeometryName:(id)arg1 inAvatar:(id)arg2;
- (_Bool)removeFromMaterial:(id)arg1;
- (_Bool)applyToMaterial:(id)arg1;

@end
