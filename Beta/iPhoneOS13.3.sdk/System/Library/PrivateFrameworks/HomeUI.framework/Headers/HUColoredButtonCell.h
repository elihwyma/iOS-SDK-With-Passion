/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UITableViewCell.h>

#import <HomeUI/Swift-Protocol.h>

@class HFItem, HUColoredButton, NSString, UIColor;

@protocol HUColoredButtonCellDelegate, HUResizableCellDelegate;

@interface HUColoredButtonCell : UITableViewCell <Swift>

{
    _Bool _disabled;
    _Bool _buttonColorFollowsTintColor;
    HFItem *_item;
    id <HUColoredButtonCellDelegate> _delegate;
    UIColor *_buttonBackgroundColor;
    HUColoredButton *_button;
}

@property (retain, nonatomic) HUColoredButton *button;
@property (weak, nonatomic) id <HUColoredButtonCellDelegate> delegate;
@property (nonatomic) _Bool buttonColorFollowsTintColor;
@property (retain, nonatomic) UIColor *buttonBackgroundColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) HFItem *item;
@property (weak, nonatomic) id <HUResizableCellDelegate> resizingDelegate;
@property (nonatomic, getter=isDisabled) _Bool disabled;

- (void)prepareForReuse;
- (void)tintColorDidChange;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)buttonPressed:(id)arg1;
- (void)updateUIWithAnimation:(_Bool)arg1;
- (void)updateButtonColor;

@end
