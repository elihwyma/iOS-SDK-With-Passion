/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIView.h>

@class NSArray, NSString, UISegmentedControl;

@protocol SKUIFlexibleSegmentedControlDelegate;

__attribute__((visibility("hidden")))
@interface SKUIFlexibleSegmentedControl : UIView

{
    id <SKUIFlexibleSegmentedControlDelegate> _delegate;
    double _desiredSegmentWidth;
    _Bool _isMoreListSelected;
    NSArray *_itemTitles;
    long long _maximumNumberOfVisibleItems;
    NSString *_moreListTitle;
    long long _previousSelectedSegmentIndex;
    UISegmentedControl *_segmentedControl;
    long long _selectedSegmentIndex;
    _Bool _sizesSegmentsToFitWidth;
}

@property (nonatomic) _Bool sizesSegmentsToFitWidth;
@property (weak, nonatomic) id <SKUIFlexibleSegmentedControlDelegate> delegate;
@property (nonatomic) double desiredSegmentWidth;
@property (copy, nonatomic) NSArray *itemTitles;
@property (nonatomic) long long maximumNumberOfVisibleItems;
@property (nonatomic, readonly) long long moreListIndex;
@property (copy, nonatomic) NSString *moreListTitle;
@property (nonatomic) long long selectedSegmentIndex;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)cancelMoreList;
- (struct CGRect)frameForSegmentWithIndex:(long long)arg1;
- (void)_valueChangeAction:(id)arg1;
- (void)_configureSegmentedControl:(id)arg1 withTitles:(id)arg2 boundingSize:(struct CGSize)arg3;
- (void)_setTitles:(id)arg1 forSegmentedControl:(id)arg2;

@end
