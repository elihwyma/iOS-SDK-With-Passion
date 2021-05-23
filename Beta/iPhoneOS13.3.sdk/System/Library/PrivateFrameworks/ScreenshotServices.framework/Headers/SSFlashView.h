/*
 Image: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
 */

#import <UIKit/UIView.h>

@interface SSFlashView : UIView

{
    unsigned long long _style;
}

@property (nonatomic) unsigned long long style;

+ (Class)_flashViewClass;
+ (double)expectedAnimationDurationForStyle:(unsigned long long)arg1;
+ (id)flashViewForStyle:(unsigned long long)arg1;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)flashWithCompletion:(CDUnknownBlockType)arg1;

@end
