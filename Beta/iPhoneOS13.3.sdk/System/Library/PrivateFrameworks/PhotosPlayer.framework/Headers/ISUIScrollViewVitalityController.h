/*
 Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

#import <PhotosPlayer/ISScrollViewVitalityController.h>

@class ISUIVisibilityOffsetHelper, NSString, UIScrollView;

@interface ISUIScrollViewVitalityController : ISScrollViewVitalityController

{
    ISUIVisibilityOffsetHelper *_visibilityOffsetHelper;
    UIScrollView *__scrollView;
}

@property (weak, nonatomic, setter=_setScrollView:) UIScrollView *_scrollView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (_Bool)canPerformVitality;
- (id)visibilityOffsetHelper;
- (void)_reduceMotionDidChange:(id)arg1;

@end
