/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class MKVibrantLabel, NSArray, NSLayoutConstraint, NSString, UIImage, _MKRightImageButton;

__attribute__((visibility("hidden")))
@interface MKPlaceSectionHeaderView

{
    NSLayoutConstraint *_baselineToTopConstraint;
    NSLayoutConstraint *_baselineToBottomConstraint;
    NSLayoutConstraint *_baselineToBaselineConstraint;
    NSLayoutConstraint *_iconHeightConstraint;
    NSLayoutConstraint *_iconWidthConstraint;
    _Bool _contentChanged;
    double _width;
    _Bool _showSeeMoreButton;
    NSString *_seeMoreButtonText;
    NSString *_providerName;
    MKVibrantLabel *_sectionHeaderLabel;
    _MKRightImageButton *_seeMoreButton;
    NSArray *_seeMoreButtonConstraints;
    NSArray *_constraints;
    SEL _action;
    id _target;
    struct CGSize _iconDisplaySize;
}

@property (retain, nonatomic) MKVibrantLabel *sectionHeaderLabel;
@property (retain, nonatomic) _MKRightImageButton *seeMoreButton;
@property (retain, nonatomic) NSArray *seeMoreButtonConstraints;
@property (retain, nonatomic) NSArray *constraints;
@property (nonatomic) SEL action;
@property (weak, nonatomic) id target;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *seeMoreButtonText;
@property (retain, nonatomic) NSString *providerName;
@property (retain, nonatomic) UIImage *icon;
@property (nonatomic) struct CGSize iconDisplaySize;
@property (nonatomic) _Bool showSeeMoreButton;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateConstraints;
- (void)updateContent;
- (void)_updateConstraints;
- (void)contentSizeDidChange;
- (void)createConstraints;
- (_Bool)shouldStack;
- (void)setTarget:(id)arg1 action:(SEL)arg2;

@end
