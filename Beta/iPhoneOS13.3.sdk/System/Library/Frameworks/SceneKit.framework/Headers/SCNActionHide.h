/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/SCNAction.h>

__attribute__((visibility("hidden")))
@interface SCNActionHide : SCNAction

{
    struct SCNCActionHide *_mycaction;
}

+ (_Bool)supportsSecureCoding;
+ (id)hide;
+ (id)unhide;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)parameters;
- (id)reversedAction;

@end
