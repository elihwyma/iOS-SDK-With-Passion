/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSString, UIImageView;

__attribute__((visibility("hidden")))
@interface SKUISlideshowDismissalAnimator : NSObject

{
    UIImageView *_imageView;
    struct CGRect _imageRect;
}

@property (retain, nonatomic) UIImageView *imageView;
@property (nonatomic) struct CGRect imageRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (void)animationEnded:(_Bool)arg1;

@end
