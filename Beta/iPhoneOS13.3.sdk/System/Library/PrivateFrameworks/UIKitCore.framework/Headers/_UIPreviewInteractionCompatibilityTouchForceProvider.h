/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString, UITouch, UIView, _UITouchesObservingGestureRecognizer;

__attribute__((visibility("hidden")))
@interface _UIPreviewInteractionCompatibilityTouchForceProvider : NSObject <Swift>

{
    UIView *_view;
    _UITouchesObservingGestureRecognizer *_gestureRecognizer;
    UITouch *_currentTouch;
    _Bool _active;
}

@property (nonatomic, getter=isActive) _Bool active;
@property (weak, nonatomic, readonly) UIView *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) double touchForce;

- (void)dealloc;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)initWithView:(id)arg1;
- (void)cancelInteraction;
- (struct CGPoint)locationInCoordinateSpace:(id)arg1;
- (void)_handleTouchObservingGestureRecognizer:(id)arg1;

@end
