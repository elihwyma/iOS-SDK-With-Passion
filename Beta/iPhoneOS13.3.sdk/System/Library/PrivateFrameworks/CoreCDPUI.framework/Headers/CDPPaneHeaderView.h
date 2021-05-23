/*
 Image: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
 */

#import <UIKit/UIView.h>

@class BFFPaneHeaderView, UILabel;

@interface CDPPaneHeaderView : UIView

{
    BFFPaneHeaderView *_header;
}

@property (nonatomic, readonly) UILabel *textLabel;
@property (nonatomic, readonly) UILabel *subLabel;
@property (nonatomic, readonly) UILabel *detailTextLabel;
@property (nonatomic, readonly) UIView *_header;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setLayoutMargins:(struct UIEdgeInsets)arg1;
- (void)setTitleText:(id)arg1;
- (void)makeAllTheTextFits;
- (double)innerHeaderMaxY;

@end
