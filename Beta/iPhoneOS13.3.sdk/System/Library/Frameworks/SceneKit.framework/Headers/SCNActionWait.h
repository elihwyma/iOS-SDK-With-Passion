/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/SCNAction.h>

__attribute__((visibility("hidden")))
@interface SCNActionWait : SCNAction

{
    struct SCNCActionWait *_mycaction;
}

+ (_Bool)supportsSecureCoding;
+ (id)waitForDuration:(double)arg1 withRange:(double)arg2;
+ (id)waitForDuration:(double)arg1;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)reversedAction;

@end
