/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <UIKit/UIRotationGestureRecognizer.h>

@class AKController;

@interface AKRotationGestureRecognizer : UIRotationGestureRecognizer

{
    unsigned long long tries;
    AKController *_annotationController;
}

@property (weak, nonatomic) AKController *annotationController;

- (void)setState:(long long)arg1;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
