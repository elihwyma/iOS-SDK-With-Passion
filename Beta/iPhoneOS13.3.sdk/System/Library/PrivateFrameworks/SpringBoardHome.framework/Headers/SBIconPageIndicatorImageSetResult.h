/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <Foundation/NSObject.h>

@class _UILegibilityImageSet;

@interface SBIconPageIndicatorImageSetResult : NSObject

{
    _UILegibilityImageSet *_pageIndicatorSet;
    _UILegibilityImageSet *_enabledPageIndicatorSet;
}

@property (nonatomic, readonly) _UILegibilityImageSet *pageIndicatorSet;
@property (nonatomic, readonly) _UILegibilityImageSet *enabledPageIndicatorSet;

- (id)initWithIndicatorSet:(id)arg1 enabledIndicatorSet:(id)arg2;

@end
