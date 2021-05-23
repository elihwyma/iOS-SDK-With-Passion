/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <UIKit/UIView.h>

#import <TVMLKit/Swift-Protocol.h>

@class NSArray, NSString, UIImage, UIImageView, UIScrollView, _UIRepeatingPressGestureRecognizer;

__attribute__((visibility("hidden")))
@interface _TVDescriptiveAlertView : UIView <Swift>

{
    UIScrollView *_scrollView;
    NSArray *_viewsAboveScrollView;
    NSArray *_viewsBelowScrollView;
    UIView *_defaultFocusView;
    _Bool _isCenteredLayout;
    _UIRepeatingPressGestureRecognizer *_upButtonGesture;
    _UIRepeatingPressGestureRecognizer *_downButtonGesture;
    _Bool _waiting;
    UIImage *_bgImage;
    UIImageView *_bgImageView;
    NSArray *_childViews;
}

@property (retain, nonatomic) NSArray *childViews;
@property (retain, nonatomic) UIView *defaultFocusView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)preferredFocusEnvironments;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setBgImage:(id)arg1;
- (void)_setupGestureRecognizers;
- (void)_scrollUp:(id)arg1;
- (void)_scrollDown:(id)arg1;
- (void)_scrollUp;
- (void)_scrollInDirection:(double)arg1;
- (void)_scrollDown;

@end
