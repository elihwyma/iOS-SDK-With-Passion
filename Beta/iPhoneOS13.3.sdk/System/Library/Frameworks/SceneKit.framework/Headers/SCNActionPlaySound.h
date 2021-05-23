/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/SCNAction.h>

__attribute__((visibility("hidden")))
@interface SCNActionPlaySound : SCNAction

{
    struct SCNCPlaySound *_mycaction;
}

+ (_Bool)supportsSecureCoding;
+ (id)playAudioSource:(id)arg1 waitForCompletion:(_Bool)arg2;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)parameters;
- (id)reversedAction;
- (void)_setupDuration;

@end
