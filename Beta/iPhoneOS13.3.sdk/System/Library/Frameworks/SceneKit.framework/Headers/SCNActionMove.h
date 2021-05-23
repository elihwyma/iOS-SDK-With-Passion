/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/SCNAction.h>

__attribute__((visibility("hidden")))
@interface SCNActionMove : SCNAction

{
    struct SCNCActionMove *_mycaction;
}

+ (_Bool)supportsSecureCoding;
+ (id)moveByX:(double)arg1 y:(double)arg2 z:(double)arg3 duration:(double)arg4;
+ (id)moveToX:(double)arg1 y:(double)arg2 z:(double)arg3 duration:(double)arg4;
+ (id)moveBy:(struct SCNVector3)arg1 duration:(double)arg2;
+ (id)moveTo:(struct SCNVector3)arg1 duration:(double)arg2;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)parameters;
- (_Bool)isRelative;
- (id)reversedAction;

@end
