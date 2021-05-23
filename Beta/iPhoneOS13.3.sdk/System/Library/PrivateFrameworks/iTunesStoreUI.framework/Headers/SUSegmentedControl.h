/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <UIKit/UIControl.h>

@class NSArray, NSMutableArray, NSString, SUClientInterface, SUSimpleMenuViewController, UIColor, UIPopoverController, UISegmentedControl;

@interface SUSegmentedControl : UIControl

{
    _Bool _autosizesText;
    NSString *_cancelButtonTitle;
    SUClientInterface *_clientInterface;
    _Bool _hidingPopoverForRotation;
    NSMutableArray *_items;
    long long _maximumNumberOfItems;
    double _maximumWidth;
    SUSimpleMenuViewController *_menuViewController;
    NSString *_moreListTitle;
    UIPopoverController *_popoverController;
    UISegmentedControl *_segmentedControl;
    long long _selectionIndex;
    _Bool _showsMoreListAutomatically;
    long long _tintStyle;
}

@property (copy, nonatomic) NSArray *items;
@property (nonatomic) long long maximumNumberOfItems;
@property (nonatomic) double maximumWidth;
@property (copy, nonatomic) NSString *cancelButtonTitle;
@property (copy, nonatomic) NSString *moreListTitle;
@property (nonatomic, readonly) long long numberOfVisibleSegments;
@property (nonatomic) long long segmentedControlStyle;
@property (nonatomic) long long selectedItemIndex;
@property (nonatomic, readonly) long long selectedSegmentIndex;
@property (nonatomic) _Bool showsMoreListAutomatically;
@property (retain, nonatomic) UIColor *tintColor;
@property (nonatomic) long long tintStyle;
@property (retain, nonatomic) SUClientInterface *clientInterface;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (id)titleTextAttributesForState:(unsigned long long)arg1;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (id)backgroundImageForState:(unsigned long long)arg1 barMetrics:(long long)arg2;
- (id)dividerImageForLeftSegmentState:(unsigned long long)arg1 rightSegmentState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)_reloadData;
- (void)setTitle:(id)arg1 forSegmentAtIndex:(unsigned long long)arg2;
- (void)setImage:(id)arg1 forSegmentAtIndex:(unsigned long long)arg2;
- (void)setDividerImage:(id)arg1 forLeftSegmentState:(unsigned long long)arg2 rightSegmentState:(unsigned long long)arg3 barMetrics:(long long)arg4;
- (void)_destroyPopoverController;
- (void)menuViewController:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (void)sizeToFitUserInterfaceIdiom;
- (void)menuViewControllerDidCancel:(id)arg1;
- (void)sizeToFitWithMinimumSegmentWidth:(double)arg1 maximumTotalWidth:(double)arg2;
- (void)_windowDidRotateNotification:(id)arg1;
- (void)_windowWillRotateNotification:(id)arg1;
- (void)showMoreList:(_Bool)arg1 animated:(_Bool)arg2;
- (void)showPopover:(id)arg1 fromSegmentIndex:(long long)arg2 animated:(_Bool)arg3;
- (void)_valueChangedEvent:(id)arg1;
- (void)_applyStyling;
- (void)_setValue:(id)arg1 forSegmentAtIndex:(unsigned long long)arg2;
- (void)_showMoreList:(_Bool)arg1;
- (void)_destroyMenuViewController;
- (void)_presentPopoverAnimated:(_Bool)arg1;
- (id)_titlesForMoreList;

@end
