/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
 */

@class UIPageControl;

@interface _OFPageViewControllerContentView

{
    UIPageControl *_pageControl;
}

@property (nonatomic, readonly) UIPageControl *pageControl;

+ (Class)layerClass;

- (void)dealloc;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)_setupPageControl:(id)arg1;
- (void)invalidatePageViewController;

@end
