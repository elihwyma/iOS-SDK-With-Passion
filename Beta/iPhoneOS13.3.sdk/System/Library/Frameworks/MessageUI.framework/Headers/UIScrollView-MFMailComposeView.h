/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <UIKit/UIScrollView.h>

@interface UIScrollView (MFMailComposeView)

- (_Bool)mf_needsToAdjustContentOffset;
- (struct CGRect)mf_visibleFrame;
- (struct CGRect)mf_visibleBounds;
- (double)mf_visibleHeight;

@end
