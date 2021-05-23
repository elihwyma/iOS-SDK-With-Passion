/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <UIKit/UIInteractionProgress.h>

@class NSString, UIPinchGestureRecognizer;

@interface SBPinchInteractionProgress : UIInteractionProgress

{
    CDStruct_3e878e9e _pinchInterval;
    UIPinchGestureRecognizer *_pinchGesture;
}

@property (nonatomic, readonly) UIPinchGestureRecognizer *pinchGesture;
@property (nonatomic, readonly) double minPinchScale;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)_handlePinchGesture:(id)arg1;
- (void)_updatePinchScale:(double)arg1;
- (id)initWithPinchGesture:(id)arg1 minPinchScale:(double)arg2;

@end
