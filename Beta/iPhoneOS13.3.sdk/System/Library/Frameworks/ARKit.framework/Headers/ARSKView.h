/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <SpriteKit/SKView.h>

@class ARSession, NSMutableDictionary, NSObject, NSSet, NSString;

@protocol ARSKViewDelegate;

@interface ARSKView : SKView

{
    ARSession *_session;
    NSMutableDictionary *_nodesByAnchorIdentifier;
    NSSet *_lastFrameAnchors;
    long long _interfaceOrientation;
    struct CGSize _viewportSize;
}

@property (weak, nonatomic) NSObject<ARSKViewDelegate> *delegate;
@property (retain, nonatomic) ARSession *session;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)session:(id)arg1 didFailWithError:(id)arg2;
- (void)session:(id)arg1 cameraDidChangeTrackingState:(id)arg2;
- (void)sessionWasInterrupted:(id)arg1;
- (void)sessionInterruptionEnded:(id)arg1;
- (void)session:(id)arg1 didOutputAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg2;
- (void)session:(id)arg1 didUpdateFrame:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 types:(unsigned long long)arg2;
- (id)_anchorForNode:(id)arg1 inFrame:(id)arg2;
- (void)_updateNode:(id)arg1 forAnchor:(id)arg2 projectionMatrix:(CDStruct_14d5dc5e)arg3 camera:(id)arg4 orientation:(long long)arg5;
- (void)_updateAnchors:(id)arg1 camera:(id)arg2;
- (void)sessionShouldAttemptRelocalization:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)anchorForNode:(id)arg1;
- (id)nodeForAnchor:(id)arg1;

@end
