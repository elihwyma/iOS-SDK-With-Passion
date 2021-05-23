/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UITableViewHeaderFooterView.h>

@class UIButton;

@protocol HUToggleSectionHeaderDelegate;

@interface HUToggleSectionHeader : UITableViewHeaderFooterView

{
    unsigned long long _toggleState;
    id <HUToggleSectionHeaderDelegate> _delegate;
    UIButton *_toggleButton;
}

@property (retain, nonatomic) UIButton *toggleButton;
@property (nonatomic) unsigned long long toggleState;
@property (weak, nonatomic) id <HUToggleSectionHeaderDelegate> delegate;
@property (nonatomic) _Bool toggleButtonHidden;

- (void)prepareForReuse;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)_toggle:(id)arg1;

@end
