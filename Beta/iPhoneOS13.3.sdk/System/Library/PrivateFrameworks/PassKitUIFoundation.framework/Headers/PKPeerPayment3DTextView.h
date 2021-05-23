/*
 Image: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/PassKitUIFoundation
 */

#import <UIKit/UIView.h>

@class NSMutableArray, NSString, PKPeerPayment3DScene, PKPeerPayment3DStore, SCNView;

@interface PKPeerPayment3DTextView : UIView

{
    SCNView *_sceneView;
    PKPeerPayment3DScene *_scene;
    double _sceneWidthUnits;
    double _sceneHeightUnits;
    NSMutableArray *_performHandlers;
    double _dynamicRollPitchMix;
    double _startAnimationTime;
    double _animationDuration;
    double _lastRenderTime;
    _Bool _liveMotionEnabled;
    _Bool _willAnimate;
    _Bool _snapshotRequested;
    _Bool _usedForSnapshotting;
    unsigned long long _framesFullyRendered;
    PKPeerPayment3DStore *_3DStore;
    _Bool _layoutRequested;
    NSMutableArray *_charactersToDraw;
    unsigned long long _renderStyle;
    NSString *_text;
}

@property (nonatomic, readonly) unsigned long long renderStyle;
@property (copy, nonatomic, readonly) NSString *text;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)supportedCharacterSet;

- (void)dealloc;
- (_Bool)setText:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)didBecomeActive;
- (void)willResignActive;
- (void)layoutText;
- (void)renderer:(id)arg1 didRenderScene:(id)arg2 atTime:(double)arg3;
- (void)renderer:(id)arg1 updateAtTime:(double)arg2;
- (id)initWithFrame:(struct CGRect)arg1 renderStyle:(unsigned long long)arg2 usedForSnapshotting:(_Bool)arg3;
- (void)setMotionEffectEnabled:(_Bool)arg1 animated:(_Bool)arg2;
- (id)generatedSnapshot;
- (void)performPostRender:(CDUnknownBlockType)arg1;
- (void)updateSceneUnits;
- (void)loadCharactersAndLayout;

@end
