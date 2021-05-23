/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary;

@interface SCNPhysicsShape : NSObject

{
    id _referenceObject;
    NSDictionary *_options;
    NSArray *_transforms;
    void *_cachedObject;
    struct btCollisionShape *_collisionShape;
}

@property (nonatomic, readonly) NSDictionary *options;
@property (nonatomic, readonly) id sourceObject;
@property (nonatomic, readonly) NSArray *transforms;

+ (_Bool)supportsSecureCoding;
+ (id)shapeWithGeometry:(id)arg1 options:(id)arg2;
+ (id)shapeWithNode:(id)arg1 options:(id)arg2;
+ (id)shapeWithShapes:(id)arg1 transforms:(id)arg2;
+ (id)defaultShapeForGeometry:(id)arg1;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (struct btCollisionShape *)_handle;
- (id)initWithContent:(id)arg1 options:(id)arg2;
- (void)_setTransforms:(id)arg1;
- (void)_customEncodingOfSCNPhysicsShape:(id)arg1;
- (void)_customDecodingOfSCNPhysicsShape:(id)arg1;
- (void)setReferenceObject:(id)arg1;
- (id)initWithCachedObject:(void *)arg1 options:(id)arg2;
- (id)referenceObject;

@end
