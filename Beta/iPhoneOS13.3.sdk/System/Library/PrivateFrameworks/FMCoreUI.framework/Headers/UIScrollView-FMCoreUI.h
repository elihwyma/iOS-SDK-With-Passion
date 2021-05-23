/*
 Image: /System/Library/PrivateFrameworks/FMCoreUI.framework/FMCoreUI
 */

#import <UIKit/UIScrollView.h>

@interface UIScrollView (FMCoreUI)

@property (nonatomic, readonly, getter=isContentLargerThanBounds) _Bool contentLargerThanBounds;

- (void)centerContentWithOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (void)centerContentIfNecessary;
- (void)centerContent;
- (void)scrollSubviewToVisible:(id)arg1 animated:(_Bool)arg2;

@end
