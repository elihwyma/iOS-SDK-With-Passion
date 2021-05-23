/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@class NSString, SearchUIButton, SearchUILabel, SearchUISelectableTextView, TLKStackView;

@interface SearchUIAudioPlaybackCardSectionView

{
    SearchUILabel *_detailTextLabel;
    SearchUISelectableTextView *_titleTextView;
    SearchUISelectableTextView *_subtitleView;
    SearchUIButton *_playButton;
}

@property (retain, nonatomic) TLKStackView *contentView;
@property (retain, nonatomic) SearchUILabel *detailTextLabel;
@property (retain, nonatomic) SearchUISelectableTextView *titleTextView;
@property (retain, nonatomic) SearchUISelectableTextView *subtitleView;
@property (retain, nonatomic) SearchUIButton *playButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)_playButtonPressed:(id)arg1;
- (id)setupContentView;
- (id)initWithRowModel:(id)arg1 feedbackDelegate:(id)arg2;
- (void)selectableTextView:(id)arg1 presentViewController:(id)arg2;
- (void)_updateStateFromCardSection:(id)arg1 animated:(_Bool)arg2;
- (void)updateStateFromCardSection:(id)arg1;

@end
