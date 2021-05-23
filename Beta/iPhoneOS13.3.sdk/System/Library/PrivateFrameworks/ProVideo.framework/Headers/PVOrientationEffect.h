/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <ProVideo/PVHeliumEffect.h>

@protocol PVEffectTimeNotificationDelegate;

@interface PVOrientationEffect : PVHeliumEffect

{
    _Bool _showAlt;
    _Bool _oldShowAlt;
    unsigned int _inputID;
    int _oldInputID;
    double _animationTime;
    double _switchTime;
    double _switchSetTime;
    id <PVEffectTimeNotificationDelegate> _timeNotificationDelegate;
}

@property (nonatomic) double switchTime;
@property (nonatomic) double switchSetTime;
@property (nonatomic) _Bool oldShowAlt;
@property (nonatomic) int oldInputID;
@property (weak) id <PVEffectTimeNotificationDelegate> timeNotificationDelegate;
@property (nonatomic) _Bool showAlt;
@property (nonatomic) unsigned int inputID;
@property (nonatomic) double animationTime;

+ (void)registerEffectWithID:(id)arg1 displayName:(id)arg2;

- (void)dealloc;
- (id)initWithEffectID:(id)arg1;
- (void)orientationChangeRequest:(id)arg1;
- (id)inputsForTime:(CDStruct_1b6d18a9)arg1;
- (HGRef_b27030d6)rotationNodeForPercent:(float)arg1 atCenter:(struct CGPoint)arg2;
- (HGRef_265f9e4c)previewHGNodeForTime:(CDStruct_1b6d18a9)arg1 inputHGNode:(HGRef_265f9e4c)arg2 outputSize:(struct CGSize)arg3 renderer:(struct HGRenderer *)arg4;
- (HGRef_265f9e4c)hgNodeForTime:(CDStruct_1b6d18a9)arg1 inputs:(const PVInputHGNodeMap_d4d649d7 *)arg2 renderer:(const HGRef_5aef67ae *)arg3 igContext:(HGRef_6bae45d3)arg4;

@end
