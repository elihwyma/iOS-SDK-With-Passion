/*
 Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

#import <SpriteKit/SKAction.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface SKGroup : SKAction

{
    struct SKCGroup *_mycaction;
    NSArray *_actions;
}

+ (_Bool)supportsSecureCoding;
+ (id)groupWithActions:(id)arg1;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)finished;
- (id)reversedAction;
- (id)subactions;

@end
