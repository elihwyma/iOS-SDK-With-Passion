/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <SilexVideo/SVButton.h>

@interface SVAdPrivacyButton : SVButton

+ (struct CGSize)size;
+ (id)title;
+ (double)height;
+ (id)font;

- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (id)accessibilityElements;

@end
