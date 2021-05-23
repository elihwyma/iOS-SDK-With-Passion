/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString, SXComponentInteractionPreview, SXComponentView, SXDelayed, SXViewport, UILongPressGestureRecognizer, UITapGestureRecognizer;

@protocol SXComponentInteractionHandlerManager;

@interface SXComponentInteractionManager : NSObject

{
    id <SXComponentInteractionHandlerManager> _interactionHandlerManager;
    SXViewport *_viewport;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    SXDelayed *_longPressDelay;
    SXComponentInteractionPreview *_currentPreview;
    SXComponentView *_currentComponentView;
    struct CGPoint _longPressStartLocation;
}

@property (nonatomic, readonly) id <SXComponentInteractionHandlerManager> interactionHandlerManager;
@property (nonatomic, readonly) SXViewport *viewport;
@property (nonatomic, readonly) UITapGestureRecognizer *tapGestureRecognizer;
@property (nonatomic, readonly) UILongPressGestureRecognizer *longPressGestureRecognizer;
@property (retain, nonatomic) SXDelayed *longPressDelay;
@property (nonatomic) struct CGPoint longPressStartLocation;
@property (retain, nonatomic) SXComponentInteractionPreview *currentPreview;
@property (retain, nonatomic) SXComponentView *currentComponentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)handleLongPressGesture:(id)arg1;
- (void)handleTapGesture:(id)arg1;
- (void)commitViewController:(id)arg1;
- (_Bool)hasInteractionForLocation:(struct CGPoint)arg1;
- (id)previewViewControllerForLocation:(struct CGPoint)arg1;
- (id)initWithInteractionHandlerManager:(id)arg1 viewport:(id)arg2;
- (void)cancelInteractionForComponentView:(id)arg1;
- (void)animateHighlight:(_Bool)arg1 forComponentView:(id)arg2;
- (void)handleInteraction:(id)arg1 withType:(unsigned long long)arg2;
- (void)toggleHighlightForComponentView:(id)arg1;
- (void)updateHighlight:(_Bool)arg1 forComponentView:(id)arg2;

@end
