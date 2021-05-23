/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <UIKit/UITableViewHeaderFooterView.h>

@class NSAttributedString, NSLayoutConstraint, NSString, NSURL, UILabel, UITextView;

__attribute__((visibility("hidden")))
@interface WDHeartRhythmHeaderView : UITableViewHeaderFooterView

{
    UILabel *_titleLabel;
    UITextView *_bodyTextView;
    NSString *_bodyText;
    NSString *_bodyURLText;
    NSURL *_bodyURL;
    NSLayoutConstraint *_titleFirstBaselineToTopMarginConstraint;
    NSLayoutConstraint *_bodyFirstBaslineToTitleLastBaslineConstraint;
    NSLayoutConstraint *_bottomMarginToBodyLastBaselineConstraint;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UITextView *bodyTextView;
@property (copy, nonatomic) NSString *bodyText;
@property (copy, nonatomic) NSString *bodyURLText;
@property (copy, nonatomic) NSURL *bodyURL;
@property (nonatomic, readonly) NSAttributedString *bodyTextAttributedString;
@property (nonatomic, readonly) NSAttributedString *bodyURLAttributedString;
@property (retain, nonatomic) NSLayoutConstraint *titleFirstBaselineToTopMarginConstraint;
@property (retain, nonatomic) NSLayoutConstraint *bodyFirstBaslineToTitleLastBaslineConstraint;
@property (retain, nonatomic) NSLayoutConstraint *bottomMarginToBodyLastBaselineConstraint;
@property (copy, nonatomic) NSString *titleText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)defaultReuseIdentifier;

- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithReuseIdentifier:(id)arg1;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (void)updateConstraintConstants;
- (void)setBodyText:(id)arg1 URLText:(id)arg2 URL:(id)arg3;
- (void)setUpUI;
- (void)updateBodyTextView;

@end
