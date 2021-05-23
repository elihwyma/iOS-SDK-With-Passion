/*
 Image: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
 */

#import <UIView.h>

@interface UIView (WGCAPackageViewAdditions)

- (_Bool)wg_supportsBottomCornerRadiusGivenRootView:(id)arg1 withCornerRadius:(double)arg2 supportedCorners:(unsigned long long *)arg3;
- (void)wg_walkSubviewTreeWithBlock:(CDUnknownBlockType)arg1;
- (void)_wg_innerWalkSubviewTreeWithBlock:(CDUnknownBlockType)arg1 stop:(_Bool *)arg2;
- (_Bool)wg_imageContentsDrawWithinBounds;

@end
