/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UITableViewCell.h>

#import <HomeUI/Swift-Protocol.h>

@class HFItem, NSString;

@protocol HUResizableCellDelegate, HUSwitchCellDelegate;

@interface HUSwitchCell : UITableViewCell <Swift>

{
    _Bool _disabled;
    HFItem *_item;
    id <HUSwitchCellDelegate> _delegate;
}

@property (nonatomic, getter=isOn) _Bool on;
@property (weak, nonatomic) id <HUSwitchCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) HFItem *item;
@property (weak, nonatomic) id <HUResizableCellDelegate> resizingDelegate;
@property (nonatomic, getter=isDisabled) _Bool disabled;

- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setOn:(_Bool)arg1 animated:(_Bool)arg2;
- (id)_switch;
- (void)updateUIWithAnimation:(_Bool)arg1;
- (void)_toggleOn:(id)arg1;

@end
