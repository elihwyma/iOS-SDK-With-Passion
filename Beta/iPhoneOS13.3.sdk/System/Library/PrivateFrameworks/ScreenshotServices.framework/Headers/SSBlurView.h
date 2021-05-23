/*
 Image: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
 */

#import <UIKit/UIView.h>

@interface SSBlurView : UIView

@property (nonatomic) double scale;
@property (nonatomic) double blurRadius;

+ (Class)layerClass;

- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (id)_backdropLayer;

@end
