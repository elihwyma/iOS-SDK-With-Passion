/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIView.h>

@class NSArray, NSString, PXCapsuleButton, PXUpdater, UILabel, UIVisualEffectView;

@interface PXCMMPosterBannerView : UIView

{
    struct _NSRange _headlineBoldRange;
    PXCapsuleButton *_actionButton;
    NSString *_actionButtonTitle;
    CDUnknownBlockType _actionButtonAction;
    UILabel *_headlineLabel;
    UILabel *_subheadlineLabel;
    UIVisualEffectView *_visualEffectView;
    PXUpdater *_updater;
    _Bool _containsUnverifiedPersons;
    _Bool _loadingPeopleSuggestions;
    NSString *_headline;
    NSString *_subheadline;
    NSArray *_localizedNamesForHeadline;
}

@property (copy, nonatomic) NSString *headline;
@property (copy, nonatomic) NSString *subheadline;
@property (copy, nonatomic) NSArray *localizedNamesForHeadline;
@property (nonatomic) _Bool containsUnverifiedPersons;
@property (nonatomic, getter=isLoadingPeopleSuggestions) _Bool loadingPeopleSuggestions;

+ (id)_headlineLabelBoldFont;
+ (id)_headlineLabelFont;
+ (id)_subheadlineLabelFont;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)tintColorDidChange;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)willMoveToWindow:(id)arg1;
- (void)_actionButtonTapped:(id)arg1;
- (void)_updateTitles;
- (void)setHeadline:(id)arg1 boldRange:(struct _NSRange)arg2;
- (void)setActionButtonWithTitle:(id)arg1 actionBlock:(CDUnknownBlockType)arg2;
- (void)_updateLoadingPeopleSuggestions;
- (struct CGSize)_performLayoutInWidth:(double)arg1 updateSubviewFrames:(_Bool)arg2;
- (void)_updateActionButton;
- (id)_actionButtonWithTitle:(id)arg1 action:(SEL)arg2 enabled:(_Bool)arg3;
- (id)_headlineStringAttributes;
- (id)_attributedStringWithString:(id)arg1 boldRange:(struct _NSRange)arg2;

@end
