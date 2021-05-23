/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/Swift-Protocol.h>

@class NSString, SCNMaterial, SCNMaterialProperty, SCNProgram;

@protocol SCNMaterialJSExport <Swift>

@property (copy, nonatomic) NSString *name;
@property (nonatomic, readonly) SCNMaterialProperty *diffuse;
@property (nonatomic, readonly) SCNMaterialProperty *ambient;
@property (nonatomic, readonly) SCNMaterialProperty *specular;
@property (nonatomic, readonly) SCNMaterialProperty *emission;
@property (nonatomic, readonly) SCNMaterialProperty *transparent;
@property (nonatomic, readonly) SCNMaterialProperty *reflective;
@property (nonatomic, readonly) SCNMaterialProperty *multiply;
@property (nonatomic, readonly) SCNMaterialProperty *normal;
@property (nonatomic, readonly) SCNMaterialProperty *displacement;
@property (nonatomic, readonly) SCNMaterialProperty *clearCoat;
@property (nonatomic, readonly) SCNMaterialProperty *clearCoatRoughness;
@property (nonatomic, readonly) SCNMaterialProperty *clearCoatNormal;
@property (nonatomic, readonly) SCNMaterialProperty *ambientOcclusion;
@property (nonatomic, readonly) SCNMaterialProperty *selfIllumination;
@property (nonatomic, readonly) SCNMaterialProperty *metalness;
@property (nonatomic, readonly) SCNMaterialProperty *roughness;
@property (nonatomic) double shininess;
@property (nonatomic) double transparency;
@property (copy, nonatomic) NSString *lightingModelName;
@property (nonatomic, getter=isLitPerPixel) _Bool litPerPixel;
@property (nonatomic, getter=isDoubleSided) _Bool doubleSided;
@property (nonatomic) unsigned long long fillMode;
@property (nonatomic) long long cullMode;
@property (nonatomic) long long transparencyMode;
@property (nonatomic) _Bool locksAmbientWithDiffuse;
@property (nonatomic) _Bool writesToDepthBuffer;
@property (nonatomic) long long colorBufferWriteMask;
@property (nonatomic) _Bool readsFromDepthBuffer;
@property (nonatomic) double fresnelExponent;
@property (nonatomic) long long blendMode;
@property (nonatomic) double indexOfRefraction;
@property (nonatomic) _Bool avoidsOverLighting;
@property (nonatomic, readonly) SCNMaterial *presentationMaterial;
@property (retain, nonatomic) SCNProgram *program;

+ (unsigned short)material;
+ (unsigned short)materialWithMDLMaterial: /* Error: Ran out of types for this method. */;

- (unsigned short)copy;
- (unsigned short)setValue:forKey: /* Error: Ran out of types for this method. */;
- (unsigned short)valueForKey: /* Error: Ran out of types for this method. */;
- (unsigned short)valueForKeyPath: /* Error: Ran out of types for this method. */;
- (unsigned short)setValue:forKeyPath: /* Error: Ran out of types for this method. */;
- (unsigned short)animationForKey: /* Error: Ran out of types for this method. */;
- (unsigned short)removeAnimationForKey: /* Error: Ran out of types for this method. */;
- (unsigned short)addAnimation:forKey: /* Error: Ran out of types for this method. */;
- (unsigned short)removeAllAnimations;
- (unsigned short)animationKeys;
- (unsigned short)pauseAnimationForKey: /* Error: Ran out of types for this method. */;
- (unsigned short)resumeAnimationForKey: /* Error: Ran out of types for this method. */;

@end
