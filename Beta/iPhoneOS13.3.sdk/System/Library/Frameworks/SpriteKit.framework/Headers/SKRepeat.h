/*
 Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

#import <SpriteKit/SKAction.h>

__attribute__((visibility("hidden")))
@interface SKRepeat : SKAction

{
    struct SKCRepeat *_mycaction;
    SKAction *_repeatedAction;
}

+ (_Bool)supportsSecureCoding;
+ (id)repeatAction:(id)arg1 count:(unsigned long long)arg2;
+ (id)repeatActionForever:(id)arg1;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)reversedAction;
- (id)subactions;

@end
