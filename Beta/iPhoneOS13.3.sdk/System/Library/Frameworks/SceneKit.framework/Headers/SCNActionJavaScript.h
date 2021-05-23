/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/SCNAction.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SCNActionJavaScript : SCNAction

{
    NSString *_script;
}

+ (_Bool)supportsSecureCoding;
+ (id)javaScriptActionWithDuration:(double)arg1 script:(id)arg2;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithString:(id)arg1;
- (id)parameters;
- (_Bool)isCustom;
- (id)reversedAction;

@end
