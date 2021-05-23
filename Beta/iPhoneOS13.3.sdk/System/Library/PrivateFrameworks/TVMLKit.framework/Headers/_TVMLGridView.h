/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <TVMLKit/_TVGridView.h>

@class NSString, UIView;

__attribute__((visibility("hidden")))
@interface _TVMLGridView : _TVGridView

{
    _Bool _configureForListTemplate;
    UIView *_headerView;
}

@property (nonatomic) _Bool configureForListTemplate;
@property (retain, nonatomic) UIView *headerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool shouldBindRowsTogether;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (_Bool)_shouldFadeCellsForBoundChangeWhileRotating;
- (id)rowMetricsForExpectedWidth:(double)arg1 firstItemRowIndex:(long long *)arg2;
- (id)rowMetricsForExpectedWidth:(double)arg1 withContentInset:(struct UIEdgeInsets)arg2 firstItemRowIndex:(long long *)arg3;

@end
