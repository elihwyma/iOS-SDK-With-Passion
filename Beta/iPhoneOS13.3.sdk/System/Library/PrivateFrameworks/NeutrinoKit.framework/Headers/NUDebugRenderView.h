/*
 Image: /System/Library/PrivateFrameworks/NeutrinoKit.framework/NeutrinoKit
 */

#import <NeutrinoKit/NURenderView.h>

@class CMMotionManager, UILongPressGestureRecognizer;

@interface NUDebugRenderView : NURenderView

{
    UILongPressGestureRecognizer *_doubleTap;
    _Bool _showDebug;
    CMMotionManager *_motionManager;
}

- (void)dealloc;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)debugMode;
- (void)setDebugMode:(_Bool)arg1;
- (void)_debugToggle:(id)arg1;
- (void)_orientWithX:(double)arg1 andY:(double)arg2;
- (void)_resetOrientation:(id)arg1;
- (void)_startDeviceMotion;
- (void)_stopDeviceMotion;
- (void)_setupDeviceMotion;

@end
