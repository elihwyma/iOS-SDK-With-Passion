/*
 Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

#import <UIKit/UIView.h>

@class CNFRegLearnMoreButton, NSString, NSURL, PSSpecifier, UILabel, UITableView;

@interface CNFRegTableLabel : UIView

{
    UILabel *_label;
    PSSpecifier *_specifier;
    UITableView *_cnfreg_tableView;
    _Bool _isTopmostHeader;
    CNFRegLearnMoreButton *_urlButton;
    NSString *_URLText;
    NSURL *_URLTarget;
}

@property (copy, nonatomic) NSString *URLText;
@property (copy, nonatomic) NSURL *URLTarget;
@property (nonatomic) UITableView *cnfreg_tableView;
@property (nonatomic) _Bool isTopmostHeader;

- (void)dealloc;
- (void)layoutSubviews;
- (double)_topPadding;
- (double)_bottomPadding;
- (id)_labelText;
- (id)initWithSpecifier:(id)arg1;
- (double)preferredHeightForWidth:(double)arg1;
- (void)clearSpecifier;
- (void)updateLabelText;
- (double)_labelInset;
- (long long)_labelTextAlignment;
- (id)_URLTarget;
- (void)_urlTapped:(id)arg1;
- (id)_URLText;

@end
