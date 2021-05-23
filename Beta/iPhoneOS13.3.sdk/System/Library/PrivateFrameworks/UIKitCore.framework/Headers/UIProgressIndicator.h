/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIActivityIndicatorView.h>

@interface UIProgressIndicator : UIActivityIndicatorView

@property (nonatomic) int progressIndicatorStyle;

+ (struct CGSize)size;

- (void)setStyle:(int)arg1;
- (void)startAnimation;
- (void)stopAnimation;
- (void)setAnimating:(_Bool)arg1;

@end
