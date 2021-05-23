/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <TVMLKit/_TVShelfView.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _TVMLShelfView : _TVShelfView

{
    double _showcaseFactor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool shouldBindRowsTogether;

- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (_Bool)_shouldFadeCellsForBoundChangeWhileRotating;
- (void)tv_setShowcaseFactor:(double)arg1;
- (id)rowMetricsForExpectedWidth:(double)arg1 firstItemRowIndex:(long long *)arg2;
- (id)showcaseRowMetricsForExpectedWidth:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1 shelfViewLayout:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 _shelfViewLayout:(id)arg2;
- (id)rowMetricsForExpectedWidth:(double)arg1 withContentInset:(struct UIEdgeInsets)arg2 firstItemRowIndex:(long long *)arg3;
- (id)_rowMetricsForExpectedWidth:(double)arg1 withContentInset:(struct UIEdgeInsets)arg2 firstItemRowIndex:(long long *)arg3 forShowcase:(_Bool)arg4;
- (id)showcaseRowMetricsForExpectedWidth:(double)arg1 withContentInset:(struct UIEdgeInsets)arg2;
- (struct UIEdgeInsets)_selectionMarginsForCell:(id)arg1;

@end
