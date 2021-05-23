/*
 Image: /System/Library/Frameworks/GameController.framework/GameController
 */

#import <GameController/GCMicroGamepad.h>

@class GCControllerDirectionPad, NSDate, NSString, _GCACHomeButton;

@interface _GCAppleTVRemoteControllerProfile : GCMicroGamepad

{
    _GCACHomeButton *_acHome;
    double _windowX;
    double _windowY;
    double _windowSize;
    double _deadzoneSize;
    double _windowBufferSize[4];
    unsigned int _digitizerTouchState;
    unsigned int _sampleCount;
    unsigned int _accumInputSampleCount;
    double _prevLogTime;
    int _orientation;
    int _candidateOrientation;
    NSDate *_candidateOrientationTimestamp;
    unsigned long long _owner;
}

@property (nonatomic) unsigned long long owner;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) GCControllerDirectionPad *dpad;

+ (int)updateDevice:(struct __IOHIDDevice *)arg1 withButtonDebounceTime:(unsigned char)arg2 withDelay:(_Bool)arg3;

- (id)name;
- (void)setAllowsRotation:(_Bool)arg1;
- (unsigned int)sampleRate;
- (void)setPlayerIndex:(long long)arg1;
- (id)initWithController:(id)arg1;
- (id)initWithController:(id)arg1 dpadFlippedY:(_Bool)arg2;
- (void)toggleSuspendResume;
- (id)menuButton;
- (void)appWillResignActive;
- (void)appDidBecomeActive;
- (void)digitizerTouchEvent:(id)arg1 x:(double)arg2 y:(double)arg3 timestamp:(unsigned long long)arg4 forceSkipDpadRotation:(_Bool)arg5;
- (void)digitizerTouchUp:(id)arg1 timestamp:(unsigned long long)arg2 forceSkipDpadRotation:(_Bool)arg3;
- (void)setDpad:(id)arg1 x:(double)arg2 y:(double)arg3 timestamp:(unsigned long long)arg4 forceSkipDpadRotation:(_Bool)arg5;
- (void)getPositionInSlidingWindowForRealX:(double)arg1 realY:(double)arg2 outXInWindow:(double *)arg3 outYInWindow:(double *)arg4;
- (void)initCommon:(id)arg1;
- (void)processOrientationData:(id)arg1;
- (_Bool)ownershipClaimingElementsZero;
- (void)handleReport:(unsigned int)arg1 data:(id)arg2;

@end
