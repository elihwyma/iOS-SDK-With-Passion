/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <UIKit/UIView.h>

@class TSDCanvasLayer, TSDInteractiveCanvasController, TSKScrollView;

@protocol TSDCanvasLayerHosting, UITextLinkInteraction;

@interface TSDCanvasView : UIView

{
    TSDInteractiveCanvasController *mController;
    id <TSDCanvasLayerHosting> mLayerHost;
    id <UITextLinkInteraction> mHyperLinkDelegate;
}

@property (nonatomic) TSDInteractiveCanvasController *controller;
@property (nonatomic) id <TSDCanvasLayerHosting> layerHost;
@property (nonatomic) id <UITextLinkInteraction> hyperLinkDelegate;
@property (readonly) TSKScrollView *enclosingScrollView;
@property (nonatomic, readonly) TSDCanvasLayer *canvasLayer;
@property (nonatomic, readonly) TSDCanvasView *rootCanvasView;

+ (Class)layerClass;

- (void)teardown;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)cancelInteractionWithLink;
- (_Bool)mightHaveLinks;
- (void)tapLinkAtPoint:(struct CGPoint)arg1;
- (_Bool)isInteractingWithLink;
- (void)startInteractionWithLinkAtPoint:(struct CGPoint)arg1;
- (void)updateInteractionWithLinkAtPoint:(struct CGPoint)arg1;
- (void)validateInteractionWithLinkAtPoint:(struct CGPoint)arg1;
- (void)startLongInteractionWithLinkAtPoint:(struct CGPoint)arg1;
- (_Bool)willInteractWithLinkAtPoint:(struct CGPoint)arg1;

@end
