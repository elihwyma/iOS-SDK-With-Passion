/*
 Image: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
 */

#import <UIKit/UIButton.h>

__attribute__((visibility("hidden")))
@interface ICDocCamShutterButton : UIButton

{
    _Bool _pseudoDisabled;
}

@property (nonatomic, getter=isPseudoDisabled) _Bool pseudoDisabled;

- (id)initWithCoder:(id)arg1;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)outerRingImage;
- (id)innerCircle;

@end
