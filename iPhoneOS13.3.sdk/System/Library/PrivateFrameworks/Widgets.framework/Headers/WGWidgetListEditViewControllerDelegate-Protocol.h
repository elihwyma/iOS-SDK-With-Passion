//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class UITraitCollection, WGWidgetListEditViewController;

@protocol WGWidgetListEditViewControllerDelegate <NSObject>

@optional
- (void)widgetEditListViewController:(WGWidgetListEditViewController *)arg1 traitCollectionDidChange:(UITraitCollection *)arg2;
- (void)dismissWidgetListEditViewController:(WGWidgetListEditViewController *)arg1 animated:(BOOL)arg2 withCompletion:(void (^)(void))arg3;
@end

