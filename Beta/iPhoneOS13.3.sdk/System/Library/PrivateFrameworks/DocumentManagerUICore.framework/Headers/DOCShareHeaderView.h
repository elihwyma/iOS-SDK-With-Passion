/*
 Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
 */

#import <AppSupportUI/NUIContainerStackView.h>

@class DOCStackedThumbnailView, DOCTagsLineView, DOCVisualEffectLabel, NSArray, NSString, NUIContainerGridView, UIButton;

@protocol DOCTagViewDelegate;

@interface DOCShareHeaderView : NUIContainerStackView

{
    NUIContainerGridView *_infoGrid;
    NSArray *_tags;
    UIButton *_addTagButton;
    id <DOCTagViewDelegate> _tagDelegate;
    DOCVisualEffectLabel *_displayNameLabel;
    DOCVisualEffectLabel *_providerNameLabel;
    DOCStackedThumbnailView *_thumbnailView;
    DOCTagsLineView *_tagsView;
}

@property (nonatomic, readonly) DOCVisualEffectLabel *displayNameLabel;
@property (nonatomic, readonly) DOCVisualEffectLabel *providerNameLabel;
@property (nonatomic, readonly) DOCStackedThumbnailView *thumbnailView;
@property (nonatomic, readonly) DOCTagsLineView *tagsView;
@property (retain, nonatomic) NSArray *items;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSString *providerName;
@property (retain, nonatomic) NSArray *tags;
@property (nonatomic) _Bool showAddTagButton;
@property (nonatomic, readonly) UIButton *addTagButton;
@property (weak, nonatomic) id <DOCTagViewDelegate> tagDelegate;

- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)didMoveToWindow;
- (void)updateArrangedSubviews;
- (void)updateThumbnailSize;

@end
