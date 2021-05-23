/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIScrollView.h>

@interface UIScrollView (PhotosUICore)

@property (nonatomic, readonly) _Bool px_isPerformingScrollTest;

- (_Bool)px_isScrolledAtEdge:(unsigned int)arg1 tolerance:(double)arg2;
- (_Bool)_px_isScrolledAtEdge:(unsigned int)arg1 tolerance:(double)arg2;
- (struct CGPoint)px_contentOffsetForEdge:(unsigned int)arg1;
- (void)px_scrollToContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (_Bool)px_isScrolledAtEdge:(unsigned int)arg1;
- (void)px_scrollToEdge:(unsigned int)arg1 animated:(_Bool)arg2;
- (struct CGPoint)px_constrainedContentOffset:(struct CGPoint)arg1;

@end
