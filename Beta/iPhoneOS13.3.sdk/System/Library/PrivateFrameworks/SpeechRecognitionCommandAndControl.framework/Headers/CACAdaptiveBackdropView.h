/*
 Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

#import <UIKit/UIView.h>

@class CAFilter;

@interface CACAdaptiveBackdropView : UIView

{
    CAFilter *_gaussianBlurFilter;
    CAFilter *_luminanceMapFilter;
    CAFilter *_colorMatrix;
}

@property (retain, nonatomic) CAFilter *gaussianBlurFilter;
@property (retain, nonatomic) CAFilter *luminanceMapFilter;
@property (retain, nonatomic) CAFilter *colorMatrix;

+ (Class)layerClass;
+ (id)contrastAdaptiveBackdropViewWithFrame:(struct CGRect)arg1;

- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 isContrasted:(_Bool)arg2;

@end
