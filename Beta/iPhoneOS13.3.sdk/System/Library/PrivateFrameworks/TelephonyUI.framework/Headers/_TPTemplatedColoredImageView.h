/*
 Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import <UIImageView.h>

@class CAFilter, UIColor;

__attribute__((visibility("hidden")))
@interface _TPTemplatedColoredImageView : UIImageView

{
    UIColor *_templateImageColor;
    CAFilter *_multiplyColorFilter;
}

@property (retain, nonatomic) UIColor *templateImageColor;

@end
