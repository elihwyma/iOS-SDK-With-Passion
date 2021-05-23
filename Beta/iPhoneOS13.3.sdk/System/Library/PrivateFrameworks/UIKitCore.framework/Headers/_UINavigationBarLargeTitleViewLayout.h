/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, UILabel, UIView, _UINavigationBarLargeTitleView;

__attribute__((visibility("hidden")))
@interface _UINavigationBarLargeTitleViewLayout : NSObject

{
    NSMutableDictionary *_titleHeightCache;
    NSMutableDictionary *_restingHeightCache;
    double _cachedRestingHeight;
    _Bool _alignAccessoryViewToTitleBaseline;
    _Bool _providesExtraSpaceForExcessiveLineHeights;
    _UINavigationBarLargeTitleView *_contentView;
    long long _titleType;
    UILabel *_titleLabel;
    unsigned long long _twoLineMode;
    double _titleRestingHeight;
    UIView *_accessoryView;
    unsigned long long _accessoryViewHorizontalAlignment;
    struct NSDirectionalEdgeInsets _layoutMargins;
}

@property (nonatomic, readonly) _UINavigationBarLargeTitleView *contentView;
@property (nonatomic) long long titleType;
@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic) unsigned long long twoLineMode;
@property (nonatomic, readonly) double titleRestingHeight;
@property (retain, nonatomic) UIView *accessoryView;
@property (nonatomic) _Bool alignAccessoryViewToTitleBaseline;
@property (nonatomic) _Bool providesExtraSpaceForExcessiveLineHeights;
@property (nonatomic) unsigned long long accessoryViewHorizontalAlignment;
@property (nonatomic) struct NSDirectionalEdgeInsets layoutMargins;

- (id)description;
- (id)initWithContentView:(id)arg1;
- (void)removeContent;
- (void)cleanupAfterLayoutTransitionCompleted;
- (void)setContentHidden:(_Bool)arg1;
- (void)_invalidateTitleHeightCache;
- (void)updateRestingTitleHeight;
- (struct CGSize)sizeFittingSize:(struct CGSize)arg1 titleType:(long long)arg2;
- (void)layoutViews;
- (struct CGRect)_contentLayoutBoundsUsingRestingTitleHeight:(_Bool)arg1;
- (double)_textHeightForSize:(struct CGSize)arg1 titleType:(long long)arg2;
- (void)_enforceLayoutOrdering;
- (void)layoutViewsWithOffset:(struct UIOffset)arg1 useRestingTitleHeight:(_Bool)arg2;
- (struct CGSize)_cachedTitleHeightSizeAndUpdateRestingSizeForWidth:(double)arg1;
- (void)layoutViewsWithOffsetSupportingMultiLineShrinkToFit:(struct UIOffset)arg1 useRestingTitleHeight:(_Bool)arg2;
- (void)setContentAlpha:(double)arg1;
- (struct CGSize)_cachedTitleHeightSizeAndUpdateRestingSizeForWidthSupportingMultiLineShrinkToFit:(double)arg1;
- (struct CGRect)_contentLayoutBounds;

@end
