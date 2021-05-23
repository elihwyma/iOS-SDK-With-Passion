/*
 Image: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
 */

#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, NSString, UIImageView, UILabel, UIStackView, WFAssociationStateView, WFHotspotDetails;

@interface WFNetworkListCell : UITableViewCell

{
    _Bool _secure;
    _Bool _personalHotspot;
    _Bool _connectionError;
    unsigned long long _bars;
    NSString *_title;
    NSString *_subtitle;
    UIImageView *_signalImageView;
    UIImageView *_lockImageView;
    UILabel *_nameLabel;
    UILabel *_subtitleLabel;
    UIStackView *_stackView;
    NSLayoutConstraint *_stackViewTopConstraint;
    NSLayoutConstraint *_stackViewBottomConstraint;
    WFAssociationStateView *_associationStateView;
    NSLayoutConstraint *_signalImageViewCenterConstraint;
}

@property (weak, nonatomic) UIImageView *signalImageView;
@property (weak, nonatomic) UIImageView *lockImageView;
@property (weak, nonatomic) UILabel *nameLabel;
@property (weak, nonatomic) UILabel *subtitleLabel;
@property (weak, nonatomic) UIStackView *stackView;
@property (weak, nonatomic) NSLayoutConstraint *stackViewTopConstraint;
@property (weak, nonatomic) NSLayoutConstraint *stackViewBottomConstraint;
@property (weak, nonatomic) WFAssociationStateView *associationStateView;
@property (weak, nonatomic) NSLayoutConstraint *signalImageViewCenterConstraint;
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
- (id)imageFromSignalBars:(unsigned long long)arg1;
- (void)_updateSignalImage;

@end
