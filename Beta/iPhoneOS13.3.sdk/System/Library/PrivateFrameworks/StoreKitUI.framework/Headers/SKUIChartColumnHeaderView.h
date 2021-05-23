/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIControl.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface SKUIChartColumnHeaderView : UIControl

{
    NSArray *_buttons;
    long long _selectedTitleIndex;
}

@property (nonatomic, readonly) double edgePadding;
@property (nonatomic) long long selectedTitleIndex;
@property (copy, nonatomic) NSArray *titles;

- (void)dealloc;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (void)sizeToFit;
- (void)_buttonAction:(id)arg1;
- (void)_reloadSelectedButton;

@end
