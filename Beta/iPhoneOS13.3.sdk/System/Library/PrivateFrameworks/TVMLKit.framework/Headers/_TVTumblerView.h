/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <UIKit/UIView.h>

@class NSMutableDictionary, UIImageView, UISwipeGestureRecognizer, UITapGestureRecognizer;

@protocol _TVTumblerViewDataSource, _TVTumblerViewDelegate;

__attribute__((visibility("hidden")))
@interface _TVTumblerView : UIView

{
    struct {
        unsigned int respondsToDidFocusItemAtIndex:1;
    } _delegateFlags;
    _Bool _canMove;
    id <_TVTumblerViewDataSource> _dataSource;
    id <_TVTumblerViewDelegate> _delegate;
    UIView *_gestureTargetView;
    UIView *_headerView;
    long long _focusedItemIndex;
    double _interitemSpacing;
    Class _itemViewClass;
    UIView *_containerView;
    UIView *_referredFocusedItemView;
    UIImageView *_arrowLeft;
    UIImageView *_arrowRight;
    UIView *_spareItemView;
    NSMutableDictionary *_itemViewsByIndex;
    long long _unfocusedItemIndex;
    UITapGestureRecognizer *_leftTapGesture;
    UITapGestureRecognizer *_rightTapGesture;
    UISwipeGestureRecognizer *_leftSwipeGesture;
    UISwipeGestureRecognizer *_rightSwipeGesture;
}

@property (retain, nonatomic) Class itemViewClass;
@property (retain, nonatomic, readonly) UIView *containerView;
@property (retain, nonatomic) UIView *referredFocusedItemView;
@property (retain, nonatomic, readonly) UIImageView *arrowLeft;
@property (retain, nonatomic, readonly) UIImageView *arrowRight;
@property (retain, nonatomic, readonly) UIImageView *arrowLeading;
@property (retain, nonatomic, readonly) UIImageView *arrowTrailing;
@property (retain, nonatomic) UIView *spareItemView;
@property (retain, nonatomic, readonly) NSMutableDictionary *itemViewsByIndex;
@property (nonatomic) long long unfocusedItemIndex;
@property (nonatomic, readonly) _Bool canMove;
@property (retain, nonatomic, readonly) UITapGestureRecognizer *leftTapGesture;
@property (retain, nonatomic, readonly) UITapGestureRecognizer *rightTapGesture;
@property (retain, nonatomic, readonly) UISwipeGestureRecognizer *leftSwipeGesture;
@property (retain, nonatomic, readonly) UISwipeGestureRecognizer *rightSwipeGesture;
@property (weak, nonatomic) id <_TVTumblerViewDataSource> dataSource;
@property (weak, nonatomic) id <_TVTumblerViewDelegate> delegate;
@property (weak, nonatomic) UIView *gestureTargetView;
@property (retain, nonatomic) UIView *headerView;
@property (nonatomic) long long focusedItemIndex;
@property (retain, nonatomic, readonly) UIView *focusedItemView;
@property (nonatomic) double interitemSpacing;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)reloadData;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)_rightAction:(id)arg1;
- (void)_leftAction:(id)arg1;
- (void)_enableMove;
- (void)_markItemViewForReuse:(id)arg1;
- (id)_itemViewAtIndex:(long long)arg1;
- (void)_markItemViewForInUse:(id)arg1 forIndex:(long long)arg2;
- (void)_scheduleMoveToIndex:(long long)arg1;
- (void)_disableMove;
- (void)registerItemViewClass:(Class)arg1;
- (id)dequeueReusableItemView;

@end
