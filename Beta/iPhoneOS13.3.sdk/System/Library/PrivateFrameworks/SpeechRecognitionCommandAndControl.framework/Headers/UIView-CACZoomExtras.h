/*
 Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

#import <UIKit/UIView.h>

@interface UIView (CACZoomExtras)

- (struct CGRect)zw_convertRectToScreenCoordinates:(struct CGRect)arg1;
- (struct CGPoint)zw_boundsCenter;
- (struct CGRect)zw_convertRectFromScreenCoordinates:(struct CGRect)arg1;
- (struct CGPoint)zw_convertPointToScreenCoordinates:(struct CGPoint)arg1;
- (struct CGPoint)zw_convertPointFromScreenCoordinates:(struct CGPoint)arg1;
- (struct CGRect)zw_convertBoundsToScreenCoordinates;
- (void)addBottomBorderWithColor:(id)arg1 thickness:(double)arg2 margins:(double)arg3;
- (id)cac_snapshot;

@end
