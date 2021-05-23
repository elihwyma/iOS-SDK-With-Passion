/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString, UIGestureRecognizer, UIView;

@protocol UILargeContentViewerInteractionDelegate;

@interface UILargeContentViewerInteraction : NSObject <Swift>

{
    UIView *_view;
    id <UILargeContentViewerInteractionDelegate> _delegate;
}

@property (weak, nonatomic, readonly) id <UILargeContentViewerInteractionDelegate> delegate;
@property (nonatomic, readonly) UIGestureRecognizer *gestureRecognizerForExclusionRelationship;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic, readonly) UIView *view;

+ (void)initialize;
+ (_Bool)isEnabled;

- (id)init;
- (id)initWithDelegate:(id)arg1;
- (_Bool)_accessibilityHUDGestureManager:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)_viewControllerForAccessibilityHUDGestureManager:(id)arg1;
- (id)_accessibilityHUDGestureManager:(id)arg1 HUDItemForPoint:(struct CGPoint)arg2;
- (void)_accessibilityHUDGestureManager:(id)arg1 gestureLiftedAtPoint:(struct CGPoint)arg2;
- (void)willMoveToView:(id)arg1;
- (void)didMoveToView:(id)arg1;
- (id)_itemAtPoint:(struct CGPoint)arg1;

@end
