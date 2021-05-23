/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIScrollView.h>

@interface UIScrollView (PhotosUI)

@property (nonatomic, readonly) _Bool pu_isBouncing;
@property (nonatomic, readonly) _Bool pu_isPerformingScrollTest;

- (void)_pu_setPPTScrollHelper:(id)arg1;
- (struct CGSize)pu_currentContentSize;
- (_Bool)pu_isScrolledAtEdge:(unsigned int)arg1 tolerance:(double)arg2;
- (_Bool)pu_isScrolledAtEdge:(unsigned int)arg1;
- (void)pu_scrollToEdge:(unsigned int)arg1 animated:(_Bool)arg2;
- (struct CGRect)pu_displayFrameForRect:(struct CGRect)arg1;
- (void)pu_cancelScrollGesture;
- (void)pu_cancelScrollAnimation;
- (void)pu_ppt_scrollToContentOffset:(struct CGPoint)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)pu_ppt_performPageSwipeTest:(id)arg1 iterations:(long long)arg2 numberOfPages:(long long)arg3 scrollAxis:(int)arg4;
- (_Bool)_pu_isScrolledAtEdge:(unsigned int)arg1 tolerance:(double)arg2;
- (int)_pu_scrollableAxis;
- (_Bool)pu_isScrolledBeyondEdge:(unsigned int)arg1;
- (void)pu_scrollToContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (id)_pu_pptScrollHelper;
- (void)_pu_beginPageSwipeTest:(id)arg1;
- (void)_pu_incrementForPageSwipeTest:(id)arg1 dt:(double)arg2 stop:(_Bool *)arg3;
- (void)_pu_endPageSwipeTest:(id)arg1;

@end
