/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <UIKit/UIView.h>

@class CALayer, NSString, SXTextLayouter, SXTextSource, SXTextTangierContainerInfo, SXTextTangierFlowRep, TSDCanvas, TSDLayoutController;

@protocol SXTextTangierRepAccessibilityElement, SXTextViewDelegate;

@interface SXTextView : UIView

{
    _Bool _isSelectable;
    _Bool _shouldHyphenate;
    _Bool _mightBeVisuallyMisplaced;
    SXTextLayouter *_textLayouter;
    id <SXTextViewDelegate> _delegate;
    SXTextSource *_textSource;
    SXTextTangierContainerInfo *_textInfo;
    SXTextTangierFlowRep<SXTextTangierRepAccessibilityElement> *_rep;
    TSDLayoutController *_layoutController;
    CALayer *_repContainerLayer;
    CALayer *_overlayContainerLayer;
    TSDCanvas *_canvas;
    struct CGRect _frameInCanvas;
    struct CGRect _parentFrame;
}

@property (nonatomic, readonly) TSDLayoutController *layoutController;
@property (retain, nonatomic) CALayer *repContainerLayer;
@property (retain, nonatomic) CALayer *overlayContainerLayer;
@property (weak, nonatomic) TSDCanvas *canvas;
@property (weak, nonatomic) SXTextTangierFlowRep<SXTextTangierRepAccessibilityElement> *rep;
@property (retain, nonatomic) SXTextLayouter *textLayouter;
@property (weak, nonatomic) id <SXTextViewDelegate> delegate;
@property (nonatomic, readonly) SXTextSource *textSource;
@property (nonatomic) struct CGRect parentFrame;
@property (nonatomic) _Bool isSelectable;
@property (nonatomic) _Bool shouldHyphenate;
@property (nonatomic, readonly) SXTextTangierContainerInfo *textInfo;
@property (nonatomic) _Bool mightBeVisuallyMisplaced;
@property (nonatomic) struct CGRect frameInCanvas;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)invalidate;
- (id)initWithCoder:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (id)accessibilityElements;
- (long long)accessibilityContainerType;
- (void)setNeedsLayout;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)provideInfosLayoutTo:(id)arg1;
- (id)accessibilityCustomRotorMembershipForRep:(id)arg1;
- (_Bool)accessibilityRepIsSelectable:(id)arg1;
- (id)infoGeometry;
- (void)directLayerHostUpdateWithContainerLayer:(id)arg1 forRep:(id)arg2;
- (void)_updateOverlayTransform;
- (void)directLayerHostRemoveIfMatchingContainerLayer:(id)arg1 forRep:(id)arg2;
- (void)directLayerhostUpdateTopLevelTilingLayers:(id)arg1 forRep:(id)arg2;
- (void)directLayerHostUpdateOverlayLayers:(id)arg1 forRep:(id)arg2;

@end
