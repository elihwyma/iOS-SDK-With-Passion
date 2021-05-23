/*
 Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

#import <Foundation/NSObject.h>

@interface NFLCoverArticlesWidgetLayout : NSObject

{
    _Bool _isCompact;
    double _widgetWidth;
    double _widgetHeight;
    double _footerHeight;
    double _portraitCoverMargin;
    double _landscapeCoverMargin;
    double _sideCoverMargin;
    double _focusedShadowRadius;
    double _focusedShadowOffset;
    double _sideCoverShadowRadius;
    double _sideCoverShadowOffset;
    double _sideCoverBleed;
    struct CGSize _bounds;
}

@property (nonatomic, readonly) struct CGSize bounds;
@property (nonatomic, readonly) _Bool isCompact;
@property (nonatomic) double widgetWidth;
@property (nonatomic) double widgetHeight;
@property (nonatomic) double footerHeight;
@property (nonatomic) double portraitCoverMargin;
@property (nonatomic) double landscapeCoverMargin;
@property (nonatomic) double sideCoverMargin;
@property (nonatomic) double focusedShadowRadius;
@property (nonatomic) double focusedShadowOffset;
@property (nonatomic) double sideCoverShadowRadius;
@property (nonatomic) double sideCoverShadowOffset;
@property (nonatomic) double sideCoverBleed;

+ (id)layoutForFeedSettings:(id)arg1;
+ (id)layoutForDevice;

- (id)initWithBounds:(struct CGSize)arg1 compactLayout:(_Bool)arg2;
- (void)setupCompactLayout;
- (void)setupRegularLayout;
- (double)calculateWidgetHeight;
- (struct CGSize)coverBoundsConstrainedToSize:(struct CGSize)arg1;

@end
