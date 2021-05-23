/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/SCNAction.h>

@class NSObject;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SCNActionRunBlock : SCNAction

{
    CDUnknownBlockType _block;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (_Bool)supportsSecureCoding;
+ (id)runBlock:(CDUnknownBlockType)arg1 queue:(id)arg2;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isCustom;
- (id)reversedAction;
- (void)updateWithTarget:(id)arg1 forTime:(double)arg2;

@end
