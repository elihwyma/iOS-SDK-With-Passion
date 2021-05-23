/*
 Image: /System/Library/PrivateFrameworks/FMCoreUI.framework/FMCoreUI
 */

#import <UIKit/UIGestureRecognizer.h>

@protocol FMMapAnnotationGestureRecognizerDelegate;

__attribute__((visibility("hidden")))
@interface FMMapAnnotationGestureRecognizer : UIGestureRecognizer

{
    id <FMMapAnnotationGestureRecognizerDelegate> _touchDelegate;
}

@property (nonatomic) id <FMMapAnnotationGestureRecognizerDelegate> touchDelegate;

- (id)init;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (_Bool)canPreventGestureRecognizer:(id)arg1;
- (_Bool)canBePreventedByGestureRecognizer:(id)arg1;

@end
