/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@class NSString, NUIContainerStackView, SearchUIImageView, TLKLabel;

@interface SearchUISuggestionCardSectionView

{
    SearchUIImageView *_iconView;
    TLKLabel *_suggestionLabel;
}

@property (retain, nonatomic) NUIContainerStackView *contentView;
@property (retain, nonatomic) SearchUIImageView *iconView;
@property (retain, nonatomic) TLKLabel *suggestionLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;
+ (_Bool)supportsRecyclingForCardSection:(id)arg1;

- (id)setupContentView;
- (void)tlk_updateForAppearance:(id)arg1;
- (void)updateWithRowModel:(id)arg1;
- (void)updateMargins;

@end
