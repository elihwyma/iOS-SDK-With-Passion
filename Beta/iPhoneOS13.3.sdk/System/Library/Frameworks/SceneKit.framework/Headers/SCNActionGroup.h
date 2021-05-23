/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/SCNAction.h>

@class NSArray;

@interface SCNActionGroup : SCNAction

{
    void *_mycaction;
    NSArray *_actions;
}

+ (_Bool)supportsSecureCoding;
+ (id)groupWithActions:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)finished;
- (_Bool)isCustom;
- (id)reversedAction;
- (void)setupWithActions:(id)arg1;

@end
