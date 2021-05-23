/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <Foundation/NSObject.h>

@class SBIconPageIndicatorImageSetResult, _UILegibilitySettings;

@interface SBIconPageIndicatorImageSetCache : NSObject

{
    _UILegibilitySettings *_legibilitySettings;
    SBIconPageIndicatorImageSetResult *_indicatorImageSetResults;
    SBIconPageIndicatorImageSetResult *_searchImageSetResults;
    SBIconPageIndicatorImageSetResult *_cameraImageSetResults;
}

@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;

- (id)pageIndicatorImageSetForLegibilitySettings:(id)arg1;
- (id)searchIndicatorImageSetForLegibilitySettings:(id)arg1;
- (id)_emptyPageIndicatorSet;
- (id)cameraIndicatorImageSetForLegibilitySettings:(id)arg1;

@end
