/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <UIKit/UIGestureRecognizer.h>

@class NSMutableSet;

@protocol _MKUserInteractionGestureRecognizerTouchObserver;

__attribute__((visibility("hidden")))
@interface _MKUserInteractionGestureRecognizer : UIGestureRecognizer

{
    NSMutableSet *_activeTouches;
    id <_MKUserInteractionGestureRecognizerTouchObserver> _touchObserver;
}

@property (weak, nonatomic) id <_MKUserInteractionGestureRecognizerTouchObserver> touchObserver;

- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;

@end
