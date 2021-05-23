/*
 Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

#import <SpriteKit/SKAction.h>

@class NSString;

@interface SKReferencedAction : SKAction

{
    struct SKCReferencedAction *_mycaction;
    SKAction *_referencedAction;
    NSString *_referencedActionName;
}

+ (_Bool)supportsSecureCoding;
+ (id)referenceActionWithName:(id)arg1 duration:(double)arg2;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setTimingFunction:(CDUnknownBlockType)arg1;
- (id)reversedAction;
- (void)setTimingMode:(long long)arg1;
- (id)subactions;
- (void)_ensureReferencedAction;

@end
