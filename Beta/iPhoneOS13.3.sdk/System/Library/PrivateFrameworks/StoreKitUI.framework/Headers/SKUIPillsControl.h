/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIControl.h>

@class NSArray, NSString, SKUIColorScheme, SKUISegmentedControl;

__attribute__((visibility("hidden")))
@interface SKUIPillsControl : UIControl

{
    SKUIColorScheme *_colorScheme;
    struct UIEdgeInsets _contentInset;
    long long _maximumNumberOfVisiblePills;
    NSString *_moreListTitle;
    SKUISegmentedControl *_segmentedControl;
    NSArray *_titles;
}

@property (copy, nonatomic) SKUIColorScheme *colorScheme;
@property (nonatomic) struct UIEdgeInsets contentInset;
@property (nonatomic) long long maximumNumberOfVisiblePills;
@property (copy, nonatomic) NSString *moreListTitle;
@property (nonatomic) long long selectedIndex;
@property (nonatomic, readonly) struct CGRect selectedPillFrame;
@property (copy, nonatomic) NSArray *titles;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_segmentedControlAction:(id)arg1;
- (void)reloadPills;

@end
