/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSLayoutConstraint, NSString, UIImage, UIImageView, UIView, _MKUILabel;

__attribute__((visibility("hidden")))
@interface MKTransitSystemCell

{
    UIImageView *_shieldImageView;
    _MKUILabel *_systemLabel;
    UIView *_disclosureButton;
    NSLayoutConstraint *_imageToLabelConstraint;
    NSLayoutConstraint *_systemLabelToTopConstraint;
    NSLayoutConstraint *_systemLabelToBottomConstraint;
    _Bool _showDisclosureButton;
    _Bool _expanded;
}

@property (copy, nonatomic) NSString *systemName;
@property (retain, nonatomic) UIImage *systemArtwork;
@property (nonatomic) _Bool showDisclosureButton;
@property (nonatomic, getter=isExpanded) _Bool expanded;

- (void)prepareForReuse;
- (id)initWithReuseIdentifier:(id)arg1;
- (id)_disclosureButton;
- (void)infoCardThemeChanged;
- (void)_contentSizeCategoryDidChange;
- (void)_updateConstraintValues;
- (struct CGAffineTransform)_transformForExpandedState:(_Bool)arg1 animating:(_Bool)arg2;
- (void)setExpanded:(_Bool)arg1 insideAnimation:(_Bool)arg2;

@end
