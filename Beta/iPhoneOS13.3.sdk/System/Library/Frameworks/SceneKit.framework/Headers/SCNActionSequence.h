/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/SCNAction.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface SCNActionSequence : SCNAction

{
    struct SCNCActionSequence *_mycaction;
    NSArray *_actions;
}

+ (_Bool)supportsSecureCoding;
+ (id)sequenceWithActions:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isCustom;
- (id)reversedAction;

@end
