/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <UIKit/UIPageControl.h>

@class NSMutableArray, _UILegibilitySettings;

@interface CSPageControl : UIPageControl

{
    _UILegibilitySettings *_sbLegibilitySettings;
    NSMutableArray *_legibilityViews;
    unsigned long long _cameraPageIndex;
}

@property (nonatomic) unsigned long long cameraPageIndex;

+ (struct CGSize)defaultSize;
+ (struct CGRect)suggestedFrameForPageBounds:(struct CGRect)arg1 desiredSize:(struct CGSize)arg2;
+ (struct CGRect)suggestedFrameForPageBounds:(struct CGRect)arg1;

- (id)initWithFrame:(struct CGRect)arg1;
- (id)_indicatorViewEnabled:(_Bool)arg1 index:(long long)arg2;
- (double)_indicatorSpacing;
- (struct CGRect)_modernBounds;
- (void)_transitionIndicator:(id)arg1 toEnabled:(_Bool)arg2 index:(long long)arg3;
- (struct CGSize)sizeForNumberOfPages:(long long)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)_setIndicatorImage:(id)arg1 toEnabled:(_Bool)arg2 index:(long long)arg3;
- (void)_updateLegibilityViews;
- (id)_cameraIndicatorImage:(_Bool)arg1;
- (id)_pageIndicatorImage:(_Bool)arg1;
- (id)_currentPageIndicatorColor;
- (id)_pageIndicatorColor;

@end
