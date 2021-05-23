/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <UIKit/UILongPressGestureRecognizer.h>

@interface PKSelectDrawingGestureRecognizer : UILongPressGestureRecognizer

{
    double _lastFailureTime;
}

@property (nonatomic) double lastFailureTime;

- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end
