/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString, UIColor, UIPanGestureRecognizer, UIView, _UIDynamicAnimationGroup;

@protocol UIKBResizingKeyplaneCoordinatorCoordinatorDelegate;

__attribute__((visibility("hidden")))
@interface UIKBResizingKeyplaneCoordinator : NSObject <Swift>

{
    double _prevResizingOffset;
    double _resizingOffset;
    double _foregroundOpacity;
    _UIDynamicAnimationGroup *_resizingAnimationGroup;
    UIView *_grabber;
    UIColor *_grabberColor;
    _Bool _isResizing;
    id <UIKBResizingKeyplaneCoordinatorCoordinatorDelegate> _delegate;
    UIPanGestureRecognizer *_gestureRecognizer;
}

@property (weak, nonatomic) id <UIKBResizingKeyplaneCoordinatorCoordinatorDelegate> delegate;
@property (nonatomic, readonly) double resizingOffset;
@property (nonatomic, readonly) UIPanGestureRecognizer *gestureRecognizer;
@property (nonatomic, readonly) _Bool isResizing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (double)savedResizingOffset;

- (id)init;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)setRenderConfig:(id)arg1;
- (void)dimKeys:(id)arg1;
- (void)uninstallGestureRecognizers;
- (void)stopResizing;
- (void)reloadResizingOffset;
- (void)updateGestureRecognizers;
- (void)updateGrabber;
- (void)handleResizeGesture:(id)arg1;
- (void)resizeKeyplaneWithOffset:(double)arg1 andRedraw:(_Bool)arg2;
- (void)saveResizingStopIndex:(unsigned long long)arg1;

@end
