/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UITableViewCell.h>

@class UILabel, _HKEmergencyContact;

@interface _HKEmergencyCardContactCell : UITableViewCell

{
    _HKEmergencyContact *_contact;
    UILabel *_relationshipLabel;
    UILabel *_nameLabel;
    UILabel *_phoneNumberLabel;
}

@property (retain, nonatomic) UILabel *relationshipLabel;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *phoneNumberLabel;
@property (retain, nonatomic) _HKEmergencyContact *contact;

- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)setupConstraints;
- (void)_setupIndividualViews;
- (void)setupViewHeirarchy;
- (void)setContact:(id)arg1 showRelationship:(_Bool)arg2 showPhoneIcon:(_Bool)arg3;

@end
