/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <UIKit/UIGestureRecognizer.h>

@interface UIGestureRecognizer (AKPlatformGestureRecognizer_Extensions)

@property (readonly) unsigned long long akNumberOfTouches;

- (struct CGPoint)akLocationInWindow;

@end
