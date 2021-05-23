/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <UIScrollView.h>

@interface UIScrollView (AVAdditions)

- (_Bool)avkit_isBeingScrollTested;
- (_Bool)avkit_isBeingScrolled;
- (_Bool)avkit_isBeingScrolledQuickly;
- (_Bool)avkit_isInAScrollView;
- (_Bool)avkit_isDescendantOfNonPagingScrollView;

@end
