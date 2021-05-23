/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@class NSString, TLKDescriptionView;

@interface SearchUIDescriptionCardSectionView

{
    _Bool _expanded;
}

@property (retain, nonatomic) TLKDescriptionView *contentView;
@property (nonatomic) _Bool expanded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsRecyclingForCardSection:(id)arg1;
+ (id)dragTitleForCardSection:(id)arg1;
+ (id)dragSubtitleForCardSection:(id)arg1;

- (id)setupContentView;
- (void)didPressMoreButton;
- (void)didPressFootnoteButton;
- (void)updateWithRowModel:(id)arg1;

@end
