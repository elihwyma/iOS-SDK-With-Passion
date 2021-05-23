/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/SCNAction.h>

__attribute__((visibility("hidden")))
@interface SCNActionScale : SCNAction

{
    struct SCNCActionScale *_mycaction;
}

+ (_Bool)supportsSecureCoding;
+ (id)scaleBy:(double)arg1 duration:(double)arg2;
+ (id)scaleTo:(double)arg1 duration:(double)arg2;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)parameters;
- (_Bool)isRelative;
- (id)reversedAction;

@end
