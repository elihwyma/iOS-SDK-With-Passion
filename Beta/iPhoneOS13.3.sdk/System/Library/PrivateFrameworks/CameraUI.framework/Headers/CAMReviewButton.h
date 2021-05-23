/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <UIKit/UIButton.h>

@interface CAMReviewButton : UIButton

{
    unsigned long long __numberOfCaptures;
}

@property (nonatomic, setter=_setNumberOfCaptures:) unsigned long long _numberOfCaptures;

+ (id)_sharedNumberOfCapturesFormatter;

- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)_localizedTitleForNumberOfCaptures;
- (void)_commonCAMReviewButtonInitialization;

@end
