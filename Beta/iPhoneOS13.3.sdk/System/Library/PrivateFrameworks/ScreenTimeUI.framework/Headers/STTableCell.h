/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <Preferences/PSTableCell.h>

@class NSArray, NSMutableArray, UILayoutGuide, UIViewController;

__attribute__((visibility("hidden")))
@interface STTableCell : PSTableCell

{
    UILayoutGuide *_contentLayoutGuide;
    NSMutableArray *_childViewControllers;
    UIViewController *_parentViewController;
    NSArray *_rtlContentLayoutGuideConstraints;
}

@property (copy, nonatomic) NSArray *rtlContentLayoutGuideConstraints;
@property (nonatomic, readonly) UILayoutGuide *contentLayoutGuide;
@property (readonly) NSMutableArray *childViewControllers;
@property (weak) UIViewController *parentViewController;

- (void)layoutSubviews;
- (void)willMoveToSuperview:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (_Bool)canReload;

@end
