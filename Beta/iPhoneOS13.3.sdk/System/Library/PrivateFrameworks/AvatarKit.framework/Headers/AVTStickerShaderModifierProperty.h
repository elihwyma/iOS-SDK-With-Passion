/*
 Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
 */

#import <Foundation/NSObject.h>

@class NSString, SCNMaterialProperty;

@interface AVTStickerShaderModifierProperty : NSObject

{
    NSString *_name;
    NSString *_type;
    id _value;
    SCNMaterialProperty *_materialProperty;
}

@property (nonatomic, readonly) SCNMaterialProperty *materialProperty;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) id value;

+ (id)shaderModifierPropertyCache;
+ (id)shaderModifierPropertyFromDictionary:(id)arg1 assetsPath:(id)arg2;

- (id)initWithName:(id)arg1 type:(id)arg2 value:(id)arg3;

@end
