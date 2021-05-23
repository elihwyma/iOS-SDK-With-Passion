/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

#import <TemplateKit/TLKStackView.h>

@class SFPunchout, SearchUILabel, SearchUIMovieCardSectionView, SearchUIOfferButtonView;

@interface SearchUIMovieCardSectionBuyButtonView : TLKStackView

{
    SearchUILabel *_subtitleLabel;
    SearchUIOfferButtonView *_button;
    SFPunchout *_punchout;
    SearchUIMovieCardSectionView *_cardSectionView;
}

@property (retain, nonatomic) SearchUILabel *subtitleLabel;
@property (retain, nonatomic) SearchUIOfferButtonView *button;
@property (retain, nonatomic) SFPunchout *punchout;
@property (weak, nonatomic) SearchUIMovieCardSectionView *cardSectionView;

- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)buttonPressed;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 punchout:(id)arg3 cardSectionView:(id)arg4;

@end
