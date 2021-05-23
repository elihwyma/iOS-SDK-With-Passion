/*
 Image: /System/Library/Frameworks/VisionKit.framework/VisionKit
 */

#import <UIKit/UIPanGestureRecognizer.h>

@protocol ICDocCamImageQuadEditPanGestureRecognizerDelegate;

__attribute__((visibility("hidden")))
@interface ICDocCamImageQuadEditPanGestureRecognizer : UIPanGestureRecognizer

{
    id <ICDocCamImageQuadEditPanGestureRecognizerDelegate> _quadEditorDelegate;
}

@property (weak, nonatomic) id <ICDocCamImageQuadEditPanGestureRecognizerDelegate> quadEditorDelegate;

- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end
