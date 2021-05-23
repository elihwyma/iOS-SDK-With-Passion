/*
 Image: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
 */

#import <UIKit/UIView.h>

@class NSArray, OBHeaderAccessoryButton, OBImageView, OBTemplateHeaderDetailLabel, OBTemplateLabel, UIImage;

@interface OBHeaderView : UIView

{
    _Bool _usingSymbolImage;
    _Bool _iconInheritsTint;
    OBImageView *_imageView;
    OBTemplateLabel *_headerLabel;
    OBTemplateHeaderDetailLabel *_detailLabel;
    NSArray *_imageViewConstraints;
    NSArray *_detailLabelConstraints;
    OBHeaderAccessoryButton *_accessoryButton;
    unsigned long long _templateType;
    UIImage *_originalIconImage;
}

@property (retain, nonatomic) OBImageView *imageView;
@property (retain, nonatomic) OBTemplateLabel *headerLabel;
@property (retain, nonatomic) OBTemplateHeaderDetailLabel *detailLabel;
@property (retain, nonatomic) NSArray *imageViewConstraints;
@property (retain, nonatomic) NSArray *detailLabelConstraints;
@property (retain, nonatomic) OBHeaderAccessoryButton *accessoryButton;
@property (nonatomic) unsigned long long templateType;
@property (retain, nonatomic) UIImage *originalIconImage;
@property (nonatomic) _Bool iconInheritsTint;

- (void)setTitle:(id)arg1;
- (void)setLanguage:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)tintColorDidChange;
- (id)initWithTitle:(id)arg1;
- (id)symbolConfiguration;
- (void)setDetailText:(id)arg1;
- (double)bottomPadding;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3;
- (id)initWithTitle:(id)arg1 symbolName:(id)arg2;
- (id)initWithTitle:(id)arg1 icon:(id)arg2;
- (double)topPadding;
- (double)iconToHeaderLabelPadding;
- (double)headerLabelToDetailLabelPadding;
- (double)detailLabelToAccessoryButtonPadding;
- (void)addAccessoryButton:(id)arg1;
- (void)setIcon:(id)arg1 accessibilityLabel:(id)arg2;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 symbolName:(id)arg3;
- (id)_symbolIconForHeaderStyle:(id)arg1 configuration:(id)arg2;
- (id)_createImageView:(id)arg1;
- (void)extendedInitWithTitle:(id)arg1 detailText:(id)arg2;
- (id)headerFont;
- (id)_createDetailLabelIfNeeded;
- (void)_updateConstraintsForImageView;
- (void)_updateConstraintsForDetailLabel;
- (void)setDetailedTextHeader:(id)arg1 detailedTextBody:(id)arg2;
- (id)_detailFont;
- (double)iconHeight;

@end
