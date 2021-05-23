/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UITableViewCell.h>

#import <HomeUI/Swift-Protocol.h>

@class HFItem, NSString, UIButton;

@protocol HUResizableCellDelegate;

@interface HUFootnoteButtonCell : UITableViewCell <Swift>

{
    _Bool _disabled;
    HFItem *_item;
    UIButton *_titleButton;
}

@property (retain, nonatomic) UIButton *titleButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) HFItem *item;
@property (weak, nonatomic) id <HUResizableCellDelegate> resizingDelegate;
@property (nonatomic, getter=isDisabled) _Bool disabled;

- (void)prepareForReuse;
- (void)tintColorDidChange;
- (void)didMoveToSuperview;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_updateTextColor;
- (void)updateUIWithAnimation:(_Bool)arg1;

@end
