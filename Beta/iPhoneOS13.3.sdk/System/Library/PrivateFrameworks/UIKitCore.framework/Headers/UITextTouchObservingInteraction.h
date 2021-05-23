/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString, UILongPressGestureRecognizer, UIView;

__attribute__((visibility("hidden")))
@interface UITextTouchObservingInteraction : NSObject <Swift>

{
    UIView *_view;
    UILongPressGestureRecognizer *_longPressGesture;
}

@property (weak, nonatomic) UIView *view;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGesture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)willMoveToView:(id)arg1;
- (void)didMoveToView:(id)arg1;
- (void)_addGestureRecognizers;
- (void)_removeGestureRecognizers;
- (void)_createGestureRecognizersIfNecessary;
- (void)longPressObserved:(id)arg1;

@end
