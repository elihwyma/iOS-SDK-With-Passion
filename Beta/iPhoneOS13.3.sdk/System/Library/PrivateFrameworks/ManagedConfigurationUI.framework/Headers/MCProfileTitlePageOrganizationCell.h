/*
 Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

#import <UIKit/UITableViewCell.h>

@class NSString, UILabel, UIStackView;

__attribute__((visibility("hidden")))
@interface MCProfileTitlePageOrganizationCell : UITableViewCell

{
    NSString *_organizationName;
    NSString *_appleID;
    UILabel *_organizationLabel;
    UILabel *_appleIDLabel;
    UILabel *_organizationValueLabel;
    UILabel *_appleIDValueLabel;
    UIStackView *_labelStackView;
}

@property (retain, nonatomic) UILabel *organizationLabel;
@property (retain, nonatomic) UILabel *appleIDLabel;
@property (retain, nonatomic) UILabel *organizationValueLabel;
@property (retain, nonatomic) UILabel *appleIDValueLabel;
@property (retain, nonatomic) UIStackView *labelStackView;
@property (copy, nonatomic) NSString *organizationName;
@property (copy, nonatomic) NSString *appleID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)updateProgressWithTranslationDistance:(double)arg1 referenceDistance:(double)arg2 isScrolling:(_Bool)arg3;
- (id)_createLabelLabel;
- (id)_createValueLabel;
- (id)_createHorizontalStackWithViews:(id)arg1;
- (id)_createVerticalStackWithViews:(id)arg1;
- (void)_updateConstraintWithStack:(id)arg1;

@end
