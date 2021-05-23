/*
 Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

#import <SpriteKit/SKAction.h>

@class NSObject;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SKRunBlock : SKAction

{
    CDUnknownBlockType _block;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (_Bool)supportsSecureCoding;
+ (id)runBlock:(CDUnknownBlockType)arg1 queue:(id)arg2;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)reversedAction;
- (void)updateWithTarget:(id)arg1 forTime:(double)arg2;

@end
