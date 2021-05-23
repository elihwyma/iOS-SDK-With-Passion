/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <Foundation/NSObject.h>

@interface SCNAction : NSObject

{
    struct SCNCAction *_caction;
}

@property (nonatomic) double duration;
@property (nonatomic) long long timingMode;
@property (nonatomic) CDUnknownBlockType timingFunction;
@property (nonatomic) double speed;

+ (_Bool)supportsSecureCoding;
+ (id)fadeInWithDuration:(double)arg1;
+ (id)fadeOutWithDuration:(double)arg1;
+ (id)hide;
+ (id)runBlock:(CDUnknownBlockType)arg1;
+ (id)sequence:(id)arg1;
+ (id)unhide;
+ (id)removeFromParentNode;
+ (id)runBlock:(CDUnknownBlockType)arg1 queue:(id)arg2;
+ (id)playAudioSource:(id)arg1 waitForCompletion:(_Bool)arg2;
+ (id)waitForDuration:(double)arg1 withRange:(double)arg2;
+ (id)waitForDuration:(double)arg1;
+ (id)actionNamed:(id)arg1;
+ (id)performSelector:(SEL)arg1 onTarget:(id)arg2;
+ (id)moveByX:(double)arg1 y:(double)arg2 z:(double)arg3 duration:(double)arg4;
+ (id)rotateByX:(double)arg1 y:(double)arg2 z:(double)arg3 duration:(double)arg4;
+ (id)rotateToX:(double)arg1 y:(double)arg2 z:(double)arg3 duration:(double)arg4;
+ (id)rotateByAngle:(double)arg1 aroundAxis:(struct SCNVector3)arg2 duration:(double)arg3;
+ (id)rotateToAxisAngle:(struct SCNVector4)arg1 duration:(double)arg2;
+ (id)rotateToX:(double)arg1 y:(double)arg2 z:(double)arg3 duration:(double)arg4 shortestUnitArc:(_Bool)arg5;
+ (id)scaleBy:(double)arg1 duration:(double)arg2;
+ (id)scaleTo:(double)arg1 duration:(double)arg2;
+ (id)repeatAction:(id)arg1 count:(unsigned long long)arg2;
+ (id)repeatActionForever:(id)arg1;
+ (id)fadeOpacityBy:(double)arg1 duration:(double)arg2;
+ (id)fadeOpacityTo:(double)arg1 duration:(double)arg2;
+ (id)customActionWithDuration:(double)arg1 actionBlock:(CDUnknownBlockType)arg2;
+ (_Bool)editingModeEnabled;
+ (void)setEditingModeEnabled:(_Bool)arg1;
+ (id)moveBy:(struct SCNVector3)arg1 duration:(double)arg2;
+ (id)moveTo:(struct SCNVector3)arg1 duration:(double)arg2;
+ (id)group:(id)arg1;
+ (id)runAction:(id)arg1 onChildNodeWithName:(id)arg2;
+ (id)javaScriptActionWithScript:(id)arg1 duration:(double)arg2;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setFinished:(_Bool)arg1;
- (_Bool)finished;
- (void)setCompletionBlock:(CDUnknownBlockType)arg1;
- (void)setKey:(id)arg1;
- (id)parameters;
- (_Bool)isCustom;
- (_Bool)isRelative;
- (struct SCNCAction *)caction;
- (void)setCppAction:(void *)arg1;
- (id)reversedAction;
- (void)updateWithTarget:(id)arg1 forTime:(double)arg2;
- (double)durationRange;
- (void)setDurationRange:(double)arg1;
- (void)wasPausedWithTarget:(id)arg1 atTime:(double)arg2;
- (void)willResumeWithTarget:(id)arg1 atTime:(double)arg2;
- (void)timeJumpWithTarget:(id)arg1 timeOffset:(double)arg2;
- (double)ratioForTime:(double)arg1;
- (void)wasAddedToTarget:(id)arg1 atTime:(double)arg2;
- (void)wasRemovedFromTarget:(id)arg1 atTime:(double)arg2;
- (void)willStartWithTarget:(id)arg1 atTime:(double)arg2;

@end
