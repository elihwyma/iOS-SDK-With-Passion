/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIDynamicBehavior.h>

@class NSArray, NSMutableDictionary;

@interface UIPushBehavior : UIDynamicBehavior

{
    double _angle;
    double _magnitude;
    _Bool _active;
    long long _mode;
    struct CGVector _forceVector;
    double _timeInterval;
    NSMutableDictionary *_targetPoints;
    int _i;
}

@property (copy, nonatomic, readonly) NSArray *items;
@property (nonatomic, readonly) long long mode;
@property (nonatomic) _Bool active;
@property (nonatomic) double angle;
@property (nonatomic) double magnitude;
@property (nonatomic) struct CGVector pushDirection;

+ (_Bool)_isPrimitiveBehavior;

- (id)init;
- (id)description;
- (void)removeItem:(id)arg1;
- (void)_step;
- (void)addItem:(id)arg1;
- (id)initWithItems:(id)arg1;
- (void)_associate;
- (void)_dissociate;
- (void)setXComponent:(double)arg1 yComponent:(double)arg2;
- (void)setAngle:(double)arg1 magnitude:(double)arg2;
- (double)yComponent;
- (double)xComponent;
- (void)setXComponent:(double)arg1;
- (void)setYComponent:(double)arg1;
- (id)initWithItems:(id)arg1 mode:(long long)arg2;
- (struct CGPoint)targetPointForItem:(id)arg1;
- (void)setTargetPoint:(struct CGPoint)arg1 forItem:(id)arg2;
- (struct UIOffset)targetOffsetFromCenterForItem:(id)arg1;
- (void)setTargetOffsetFromCenter:(struct UIOffset)arg1 forItem:(id)arg2;

@end
