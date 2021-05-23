/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <CameraEditKit/CEKBadgeTextView.h>

@interface CAMFilterNameBadge : CEKBadgeTextView

{
    long long _filterType;
}

@property (nonatomic) long long filterType;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)_updateText;

@end
