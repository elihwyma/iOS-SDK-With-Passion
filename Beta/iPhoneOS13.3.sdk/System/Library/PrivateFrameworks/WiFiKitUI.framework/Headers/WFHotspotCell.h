/*
 Image: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
 */

#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, NSString, UILabel, UIStackView, WFAssociationStateView, WFHotspotDetails, WFHotspotDetailsView;

@interface WFHotspotCell : UITableViewCell

{
    _Bool _personalHotspot;
    _Bool _secure;
    unsigned long long _bars;
    NSString *_title;
    WFHotspotDetails *_hotspotDetails;
    UIStackView *_stackView;
    UILabel *_nameLabel;
    WFHotspotDetailsView *_hotspotDetailsView;
    NSLayoutConstraint *_stackViewTopConstraint;
    NSLayoutConstraint *_stackViewBottomConstraint;
    WFAssociationStateView *_associationStateView;
}

@property (weak, nonatomic) UIStackView *stackView;
@property (weak, nonatomic) UILabel *nameLabel;
@property (weak, nonatomic) WFHotspotDetailsView *hotspotDetailsView;
@property (weak, nonatomic) NSLayoutConstraint *stackViewTopConstraint;
@property (weak, nonatomic) NSLayoutConstraint *stackViewBottomConstraint;
@property (weak, nonatomic) WFAssociationStateView *associationStateView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (nonatomic) _Bool secure;
@property (nonatomic) long long state;
@property (nonatomic) unsigned long long bars;
@property (nonatomic) _Bool personalHotspot;
@property (retain, nonatomic) WFHotspotDetails *hotspotDetails;
@property (nonatomic) _Bool connectionError;

- (void)prepareForReuse;
- (void)traitCollectionDidChange:(id)arg1;
- (void)awakeFromNib;
- (double)_verticalPadding;
- (void)_adjustStackViewPadding;

@end
