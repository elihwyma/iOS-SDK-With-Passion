/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <CameraEditKit/CEKBadgeTextView.h>

@interface CAMLivePhotoBadge : CEKBadgeTextView

{
    long long _irisMode;
}

@property (nonatomic) long long irisMode;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)_updateTextAndColors;

@end
