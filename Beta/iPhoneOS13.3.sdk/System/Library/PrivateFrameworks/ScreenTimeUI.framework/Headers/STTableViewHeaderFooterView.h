/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <UIKit/UITableViewHeaderFooterView.h>

@class NSArray, UILayoutGuide;

__attribute__((visibility("hidden")))
@interface STTableViewHeaderFooterView : UITableViewHeaderFooterView

{
    UILayoutGuide *_contentLayoutGuide;
    NSArray *_rtlContentLayoutGuideConstraints;
}

@property (copy, nonatomic) NSArray *rtlContentLayoutGuideConstraints;
@property (nonatomic, readonly) UILayoutGuide *contentLayoutGuide;

- (void)layoutSubviews;
- (id)initWithReuseIdentifier:(id)arg1;
- (id)initWithReuseIdentifier:(id)arg1 useLayoutMarginsGuide:(_Bool)arg2;

@end
