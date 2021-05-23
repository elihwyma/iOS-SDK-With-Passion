/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <Foundation/NSObject.h>

@class NSString, WFDrawerGestureCoordinator;

@interface WFDrawerDragTracker : NSObject

{
    _Bool _tracking;
    double _minTranslationY;
    double _maxTranslationY;
    WFDrawerGestureCoordinator *_gestureCoordinator;
    double _initialHeight;
}

@property (weak, nonatomic, readonly) WFDrawerGestureCoordinator *gestureCoordinator;
@property (nonatomic, readonly) double initialHeight;
@property (nonatomic) _Bool tracking;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) double minTranslationY;
@property (readonly) double maxTranslationY;

- (double)currentHeight;
- (void)beginDragging;
- (void)endDraggingWithAnimation:(id)arg1;
- (void)endDragging;
- (void)updateDragForVerticalTranslation:(double)arg1;
- (id)initWithGestureCoordinator:(id)arg1;

@end
