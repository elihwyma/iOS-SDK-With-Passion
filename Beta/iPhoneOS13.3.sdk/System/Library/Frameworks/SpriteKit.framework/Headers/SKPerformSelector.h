/*
 Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

#import <SpriteKit/SKAction.h>

@protocol NSObject;

__attribute__((visibility("hidden")))
@interface SKPerformSelector : SKAction

{
    SEL _selector;
    id <NSObject> _weakTarget;
    id <NSObject> _strongTarget;
}

+ (_Bool)supportsSecureCoding;
+ (id)perfromSelector:(SEL)arg1 onTarget:(id)arg2;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)reversedAction;
- (void)updateWithTarget:(id)arg1 forTime:(double)arg2;

@end
