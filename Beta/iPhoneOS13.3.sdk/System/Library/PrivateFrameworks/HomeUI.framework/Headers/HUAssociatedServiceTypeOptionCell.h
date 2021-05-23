/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UITableViewCell.h>

@class NSString, UILabel;

@interface HUAssociatedServiceTypeOptionCell : UITableViewCell

{
    _Bool _disabled;
    _Bool _checked;
    _Bool _suggestion;
    UILabel *_titleLabel;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (copy, nonatomic) NSString *title;
@property (nonatomic, getter=isChecked) _Bool checked;
@property (nonatomic, getter=isSuggestion) _Bool suggestion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, getter=isDisabled) _Bool disabled;

- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)colorForCurrentState;

@end
