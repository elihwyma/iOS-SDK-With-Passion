/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIAttributedStringView.h>

__attribute__((visibility("hidden")))
@interface SKUIAttributedStringWrapperView : SKUIAttributedStringView

{
    SKUIAttributedStringView *_delegateView;
}

@property (nonatomic, readonly) SKUIAttributedStringView *delegateView;

- (id)layout;
- (void)setLayout:(id)arg1;
- (double)baselineOffset;
- (double)firstBaselineOffset;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setTextColor:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)textColor;
- (long long)badgePlacement;
- (void)setBadgePlacement:(long long)arg1;
- (void)setStringTreatment:(long long)arg1;
- (void)setTreatmentColor:(id)arg1;
- (void)setTextColorFollowsTintColor:(_Bool)arg1;
- (void)setRequiredBadges:(id)arg1;
- (void)viewWasRecycled;
- (_Bool)usesTallCharacterSet;
- (void)setFirstLineTopInset:(long long)arg1;
- (id)requiredBadges;
- (long long)stringTreatment;
- (id)treatmentColor;
- (long long)firstLineTopInset;
- (_Bool)textColorFollowsTintColor;

@end
