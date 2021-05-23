/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <UIKit/UIScrollView.h>

@interface UIScrollView (AKPlatformView_Extensions)

- (double)akMagnification;
- (void)_swizzled_scrollViewAnimationEnded:(id)arg1 finished:(_Bool)arg2;

@end
