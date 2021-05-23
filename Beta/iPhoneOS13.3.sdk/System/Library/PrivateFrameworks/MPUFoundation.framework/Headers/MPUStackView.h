/*
 Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, NSString, UIWindow;

@protocol MPUStackViewDataSource;

@interface MPUStackView : UIView

{
    struct {
        struct CGSize baseSize;
        struct CGRect bounds;
        struct CGPoint centerInLocalCoordinates;
        _Bool forcesIntegralX;
        _Bool forcesIntegralY;
        struct UIOffset maximumRelativeOffsetStep;
        double scale;
        struct CGSize sizeInsetStep;
        struct CGPoint vanishingPoint;
    } _configuration;
    long long _distanceIgnoreCount;
    NSMutableArray *_items;
    UIWindow *_window;
    id <MPUStackViewDataSource> _dataSource;
    Class _itemClass;
    NSString *_itemReuseIdentifier;
    long long _numberOfItems;
    UIView *_perspectiveTargetView;
}

@property (nonatomic) struct CGSize baseSize;
@property (weak, nonatomic) id <MPUStackViewDataSource> dataSource;
@property (nonatomic) _Bool forcesIntegralX;
@property (nonatomic) _Bool forcesIntegralY;
@property (nonatomic, readonly) Class itemClass;
@property (nonatomic, readonly) NSString *itemReuseIdentifier;
@property (nonatomic, readonly) NSArray *items;
@property (nonatomic) struct UIOffset maximumRelativeOffsetStep;
@property (nonatomic, readonly) long long numberOfItems;
@property (weak, nonatomic) UIView *perspectiveTargetView;
@property (nonatomic) struct CGSize sizeInsetStep;
@property (nonatomic) struct CGPoint vanishingPoint;

- (void)dealloc;
- (void)setBounds:(struct CGRect)arg1;
- (void)setCenter:(struct CGPoint)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)reloadData;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (id)itemAtIndex:(long long)arg1;
- (void)updateForChangedDistanceFromVanishingPoint;
- (id)initWithFrame:(struct CGRect)arg1 itemClass:(Class)arg2 itemReuseIdentifier:(id)arg3;
- (void)_updateGeometryFieldsInConfiguration;
- (void)reloadDataWithTransition:(long long)arg1;
- (id)_dequeueReusableItem;
- (void)beginIgnoringDistanceUpdates;
- (void)endIgnoringDistanceUpdates;
- (struct UIOffset)relativeOffsetOfItemAtIndex:(double)arg1 withCenter:(struct CGPoint)arg2;
- (struct CGSize)sizeOfItemAtIndex:(double)arg1;

@end
