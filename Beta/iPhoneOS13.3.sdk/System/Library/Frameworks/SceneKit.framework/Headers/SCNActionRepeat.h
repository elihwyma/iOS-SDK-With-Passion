/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/SCNAction.h>

__attribute__((visibility("hidden")))
@interface SCNActionRepeat : SCNAction

{
    struct SCNCActionRepeat *_mycaction;
    SCNAction *_repeatedAction;
}

+ (_Bool)supportsSecureCoding;
+ (id)repeatAction:(id)arg1 count:(unsigned long long)arg2;
+ (id)repeatActionForever:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isCustom;
- (id)reversedAction;

@end
