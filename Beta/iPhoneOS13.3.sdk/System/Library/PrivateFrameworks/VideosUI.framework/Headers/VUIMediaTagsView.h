/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIView.h>

@class NSArray, NSDictionary, NSString, UIImage, VUIMediaTagsViewLayout;

__attribute__((visibility("hidden")))
@interface VUIMediaTagsView : UIView

{
    VUIMediaTagsViewLayout *_layout;
    NSDictionary *_viewsMap;
    NSArray *_groupedSubviews;
    double _totalSubviewsWidth;
    UIImage *_commonSenseLightImage;
    UIImage *_commonSenseDarkImage;
}

@property (copy, nonatomic) NSDictionary *viewsMap;
@property (retain, nonatomic) NSArray *groupedSubviews;
@property (nonatomic) double totalSubviewsWidth;
@property (retain, nonatomic) UIImage *commonSenseLightImage;
@property (retain, nonatomic) UIImage *commonSenseDarkImage;
@property (nonatomic, readonly) VUIMediaTagsViewLayout *layout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)tagsViewWithMetadata:(id)arg1 layout:(id)arg2 element:(id)arg3 existingView:(id)arg4;

- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_updateAppearance;
- (id)initWithFrame:(struct CGRect)arg1 layout:(id)arg2;
- (double)topMarginWithBaselineMargin:(double)arg1;
- (double)bottomMarginWithBaselineMargin:(double)arg1;
- (void)rentalExpirationLabelNeedsRelayout:(id)arg1;
- (double)topMarginToLabel:(id)arg1 withBaselineMargin:(double)arg2;
- (double)bottomMarginToLabel:(id)arg1 withBaselineMargin:(double)arg2;
- (void)updateWithMetadata:(id)arg1;
- (struct CGSize)_layoutSubviewsForSize:(struct CGSize)arg1 computationOnly:(_Bool)arg2;
- (_Bool)_shouldPutTextOnSeparateLines;
- (void)_removeSeparatorsFromGroupsIfNeeded:(_Bool)arg1;
- (id)_newLabelAsSubview:(id)arg1;
- (id)_newImageViewAsSubview;
- (id)_newRentalExpirationlabel:(id)arg1 exisitingLabel:(id)arg2;
- (double)_totalSubviewsWidth;
- (void)_removeGenreLabelAndSeparator;

@end
