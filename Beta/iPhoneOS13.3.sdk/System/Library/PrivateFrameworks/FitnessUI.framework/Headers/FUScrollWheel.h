/*
 Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

#import <UIKit/UIView.h>

#import <FitnessUI/Swift-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString, UIFont, UIImageView, UIScrollView;

@protocol FUScrollWheelDataSource, FUScrollWheelDelegate;

@interface FUScrollWheel : UIView <Swift>

{
    NSMutableArray *_reusableLabelsQueue;
    NSMutableDictionary *_usedLabels;
    struct _NSRange _previousRange;
    unsigned long long _numberOfRows;
    double _scrollWheelLabelHeight;
    UIView *_topDividerView;
    UIView *_bottomDividerView;
    UIImageView *_maskLayer;
    _Bool _shouldRegenerateOpacityMask;
    _Bool _loaded;
    id <FUScrollWheelDataSource> _dataSource;
    id <FUScrollWheelDelegate> _delegate;
    long long _itemTitleAligmnent;
    unsigned long long _currentIndex;
    UIFont *_font;
    UIScrollView *_scrollView;
    double _scrollWheelLabelPageSize;
}

@property (retain, nonatomic) UIScrollView *scrollView;
@property (nonatomic) double scrollWheelLabelPageSize;
@property (weak, nonatomic) id <FUScrollWheelDataSource> dataSource;
@property (weak, nonatomic) id <FUScrollWheelDelegate> delegate;
@property (nonatomic) long long itemTitleAligmnent;
@property (nonatomic) unsigned long long currentIndex;
@property (retain, nonatomic) UIFont *font;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)setHidden:(_Bool)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)reloadData;
- (void)willMoveToSuperview:(id)arg1;
- (unsigned long long)_numberOfRows;
- (void)_layoutScrollView;
- (double)_startingLocation;
- (void)setActiveScrollWheel;
- (void)setCurrentIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)_setActiveScrollwheelIfNotActive;
- (void)_recycleAllLabels;
- (void)_generateOpacityMask;
- (void)_alertDidChangeToCurrentIndex:(unsigned long long)arg1;
- (void)_reuseLabelsWithRange:(struct _NSRange)arg1 contentOffset:(struct CGPoint)arg2;
- (void)_recycleLabel:(id)arg1 forKey:(id)arg2;
- (id)_dequeueLabel;
- (id)_textForLabelAtIndex:(unsigned long long)arg1;
- (struct CGRect)_frameForLabelAtIndex:(unsigned long long)arg1;
- (id)_titleForItemAtIndex:(unsigned long long)arg1;
- (double)_yPositionForLabelAtIndex:(unsigned long long)arg1;

@end
