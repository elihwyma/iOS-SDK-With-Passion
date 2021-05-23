/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/_MKUIViewControllerRootView.h>

@class UITapGestureRecognizer;

@interface _MKUIViewControllerClickableRootView : _MKUIViewControllerRootView

{
    UITapGestureRecognizer *_gestureRecognizer;
}

- (void)setTarget:(id)arg1 action:(SEL)arg2;

@end
