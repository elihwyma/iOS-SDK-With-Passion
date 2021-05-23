/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

#import <TemplateKit/TLKStackView.h>

@class SFPunchout, SearchUIButton, SearchUITrailersCardSectionView, TLKLabel, UIView;

@interface SearchUITrailerView : TLKStackView

{
    SearchUITrailersCardSectionView *_cardSectionView;
    SearchUIButton *_playButton;
    TLKLabel *_titleLabel;
    SFPunchout *_punchout;
    UIView *_centeredBoxView;
}

@property (weak, nonatomic) SearchUITrailersCardSectionView *cardSectionView;
@property (retain, nonatomic) SearchUIButton *playButton;
@property (retain, nonatomic) TLKLabel *titleLabel;
@property (retain, nonatomic) SFPunchout *punchout;
@property (retain, nonatomic) UIView *centeredBoxView;

- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)playTrailer;
- (id)initWithMediaItem:(id)arg1 cardSectionView:(id)arg2;

@end
