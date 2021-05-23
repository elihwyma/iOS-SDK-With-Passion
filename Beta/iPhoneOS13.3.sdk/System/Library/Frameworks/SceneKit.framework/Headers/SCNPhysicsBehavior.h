/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <Foundation/NSObject.h>

@interface SCNPhysicsBehavior : NSObject

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)bodyA;
- (id)bodyB;
- (_Bool)hasReferenceToPhysicsBody:(id)arg1;

@end
