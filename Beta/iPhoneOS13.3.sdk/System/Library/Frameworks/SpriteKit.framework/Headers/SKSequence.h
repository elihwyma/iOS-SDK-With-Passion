/*
 Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

#import <SpriteKit/SKAction.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface SKSequence : SKAction

{
    struct SKCSequence *_mycaction;
    NSArray *_actions;
    unsigned long long _animIndex;
}

+ (_Bool)supportsSecureCoding;
+ (id)sequenceWithActions:(id)arg1;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)reversedAction;
- (id)subactions;

@end
