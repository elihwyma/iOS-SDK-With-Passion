/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/SCNAction.h>

__attribute__((visibility("hidden")))
@interface SCNActionFade : SCNAction

{
    struct SCNCActionFade *_mycaction;
}

+ (_Bool)supportsSecureCoding;
+ (id)fadeInWithDuration:(double)arg1;
+ (id)fadeOutWithDuration:(double)arg1;
+ (id)fadeOpacityBy:(double)arg1 duration:(double)arg2;
+ (id)fadeOpacityTo:(double)arg1 duration:(double)arg2;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)parameters;
- (id)reversedAction;

@end
