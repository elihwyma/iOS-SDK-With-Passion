/*
 Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

#import <Foundation/NSObject.h>

@class SKNode;

@interface SKConstraint : NSObject

{
    _Bool _enabled;
    SKNode *_referenceNode;
}

@property _Bool enabled;
@property (retain, nonatomic) SKNode *referenceNode;

+ (_Bool)supportsSecureCoding;
+ (id)scaleX:(id)arg1 scaleY:(id)arg2;
+ (id)scale:(id)arg1;
+ (id)positionX:(id)arg1;
+ (id)positionY:(id)arg1;
+ (id)positionX:(id)arg1 Y:(id)arg2;
+ (id)distance:(id)arg1 toNode:(id)arg2;
+ (id)distance:(id)arg1 toPoint:(struct CGPoint)arg2;
+ (id)distance:(id)arg1 toPoint:(struct CGPoint)arg2 inNode:(id)arg3;
+ (id)zRotation:(id)arg1;
+ (id)orientToPoint:(struct CGPoint)arg1 inNode:(id)arg2 offset:(id)arg3;
+ (id)orientToNode:(id)arg1 offset:(id)arg2;
+ (id)orientToPoint:(struct CGPoint)arg1 offset:(id)arg2;
+ (id)width:(id)arg1;
+ (id)height:(id)arg1;
+ (id)width:(id)arg1 height:(id)arg2;
+ (id)scaleX:(id)arg1;
+ (id)scaleY:(id)arg1;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToConstraint:(id)arg1;

@end
