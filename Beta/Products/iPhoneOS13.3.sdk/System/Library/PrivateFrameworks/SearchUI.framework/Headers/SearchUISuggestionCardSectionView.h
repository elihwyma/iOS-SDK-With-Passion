/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUISuggestionCardSectionView : SearchUICardSectionView <NUIContainerViewDelegate> {
    SearchUIImageView * _iconView;
    TLKLabel * _suggestionLabel;
}

@property (nonatomic, retain) NUIContainerStackView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SearchUIImageView *iconView;
@property (nonatomic, retain) TLKLabel *suggestionLabel;
@property (readonly) Class superclass;

+ (void)initialize;
+ (bool)supportsRecyclingForCardSection:(id)arg1;

- (void).cxx_destruct;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (void)setSuggestionLabel:(id)arg1;
- (id)setupContentView;
- (id)suggestionLabel;
- (void)tlk_updateForAppearance:(id)arg1;
- (void)updateMargins;
- (void)updateWithRowModel:(id)arg1;

@end