/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@class NSString, UILongPressGestureRecognizer, UIView;

@protocol CAMBarsAccessibilityHUDManagerDelegate, CAMBarsAccessibilityHUDManagerGestureProvider><CAMAccessibilityHUDItemProvider;

@interface CAMBarsAccessibilityHUDManager : NSObject

{
    UIView<CAMBarsAccessibilityHUDManagerGestureProvider><CAMAccessibilityHUDItemProvider> *_view;
    id <CAMBarsAccessibilityHUDManagerDelegate> _delegate;
    UILongPressGestureRecognizer *__accessibilityLongPressGestureRecognizer;
}

@property (weak, nonatomic) id <CAMBarsAccessibilityHUDManagerDelegate> delegate;
@property (weak, nonatomic) UIView<CAMBarsAccessibilityHUDManagerGestureProvider><CAMAccessibilityHUDItemProvider> *view;
@property (retain, nonatomic, setter=_setAccessibilityLongPressGestureRecognizer:) UILongPressGestureRecognizer *_accessibilityLongPressGestureRecognizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (struct CGPoint)locationOfAccessibilityGestureInView:(id)arg1;
- (id)initWithView:(id)arg1 delegate:(id)arg2 cancelsTouchesInView:(_Bool)arg3;
- (void)_handleAccessibilityLongPressGesture:(id)arg1;
- (void)preferredContentSizeChanged;

@end
