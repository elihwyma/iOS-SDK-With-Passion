/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <UIKit/UIView.h>

@class NSLayoutConstraint, NSString, UIImageView, UILabel, UIStackView;

__attribute__((visibility("hidden")))
@interface _SFQuickLookDocumentInfoView : UIView

{
    UIStackView *_stackView;
    UILabel *_fileNameLabel;
    UILabel *_fileSizeLabel;
    UIView *_spacingView;
    NSLayoutConstraint *_iconHeightConstraint;
    NSLayoutConstraint *_iconWidthConstraint;
    NSLayoutConstraint *_lineHeightBetweenIconAndFileNameLabelConstraint;
    UIImageView *_iconImageView;
    NSString *_fileName;
    NSString *_fileSize;
    NSString *_fileType;
}

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) NSString *fileName;
@property (retain, nonatomic) NSString *fileSize;
@property (retain, nonatomic) NSString *fileType;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_updatePropertiesDefinedByContentSizeCategory;
- (void)_configureOrientationBasedConstraints:(long long)arg1;
- (void)_updateDocumentSizeLabel;

@end
