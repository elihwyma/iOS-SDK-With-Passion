/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, UIView;

@protocol UITextGestureClusterViewDelegate;

__attribute__((visibility("hidden")))
@interface UITextGestureCluster : NSObject <Swift>

{
    UITextGestureCluster *_parent;
    NSMutableArray *_children;
    NSMutableDictionary *_gestures;
    UIView *_view;
    _Bool _inGesture;
    id <UITextGestureClusterViewDelegate> _delegate;
}

@property (retain, nonatomic, readonly) NSDictionary *gestures;
@property (retain, nonatomic, readonly) NSArray *children;
@property (weak, nonatomic) id <UITextGestureClusterViewDelegate> delegate;
@property (weak, readonly) UITextGestureCluster *parent;
@property (weak, readonly) UITextGestureCluster *root;
@property (nonatomic) _Bool inGesture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)addChild:(id)arg1;
- (void)removeChild:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)initWithView:(id)arg1;
- (id)recursiveDescription;
- (id)textInput;
- (id)rangeWithTextAlternatives:(id *)arg1 atPosition:(id)arg2;
- (void)detach;
- (void)addGestureRecognizer:(id)arg1 withName:(id)arg2;
- (id)recognizerForName:(id)arg1;
- (void)resetForLink;
- (_Bool)doesControlDelegate;
- (void)completeInitialisation;
- (void)_resetForLink;
- (_Bool)tapOnLinkWithGesture:(id)arg1;
- (void)cancelInteractionWithLink;
- (_Bool)shouldClusterAllowSelectionGestures:(_Bool)arg1 atPoint:(struct CGPoint)arg2 toBegin:(_Bool)arg3;
- (id)gestureWithName:(id)arg1;
- (_Bool)shouldHandleFormGestureAtLocation:(struct CGPoint)arg1;
- (_Bool)cluster_gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)cluster_gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)isInteractingWithLink;
- (_Bool)shouldIgnoreLinkGestures;
- (id)linkInteractionView;
- (id)defaultDoubleTapRecognizerWithAction:(SEL)arg1;
- (id)defaultTapRecognizerWithAction:(SEL)arg1;
- (void)_performPreemtiveLayoutToEnsureNoMoreLayoutWhileSelecting;
- (_Bool)containerChangesSelectionOnOneFingerTap;
- (void)disableClearsOnInsertion;
- (double)distanceBetweenPoint:(struct CGPoint)arg1 andRange:(id)arg2;
- (void)turnOffDrawsAsAtomIfPlainStyleAtom;
- (_Bool)_shouldObscureTextInput;

@end
