/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSArray, NSMutableArray, NSString, UIKBTree, UIKeyboardEmojiWellView, UIStackView;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiFamilyConfigurationView : UIView

{
    double _metachronalRhythmAnimationStartTime;
    _Bool _usesDarkStyle;
    NSMutableArray *_familyMemberStackViews;
    UIView *_separatorView;
    UIStackView *_previewWellStackView;
    UIKeyboardEmojiWellView *_neutralWellView;
    UIKeyboardEmojiWellView *_configuredWellView;
    NSString *_baseEmojiString;
    NSMutableArray *_selectedVariantIndices;
    NSArray *_skinToneVariantRows;
    UIKBTree *_representedKey;
}

@property (nonatomic) _Bool usesDarkStyle;
@property (retain, nonatomic) NSMutableArray *familyMemberStackViews;
@property (retain, nonatomic) UIView *separatorView;
@property (retain, nonatomic) UIStackView *previewWellStackView;
@property (retain, nonatomic) UIKeyboardEmojiWellView *neutralWellView;
@property (retain, nonatomic) UIKeyboardEmojiWellView *configuredWellView;
@property (retain, nonatomic) NSString *baseEmojiString;
@property (retain, nonatomic) NSMutableArray *selectedVariantIndices;
@property (retain, nonatomic) NSArray *skinToneVariantRows;
@property (retain, nonatomic) UIKBTree *representedKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (struct CGSize)preferredContentViewSizeForKey:(id)arg1 withTraits:(id)arg2;
+ (id)_selectionAndSeparatorColorForDarkMode:(_Bool)arg1;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)updateForKeyplane:(id)arg1 key:(id)arg2;
- (void)retestSelectedVariantIndexForKey:(id)arg1 atPoint:(struct CGPoint)arg2;
- (void)updateRenderConfig:(id)arg1;
- (void)_configureFamilyMemberWellStackViews;
- (void)_updatePreviewWellForCurrentSelection;
- (id)_wellViewForSection:(long long)arg1 item:(long long)arg2;
- (id)_currentlySelectedSkinToneConfiguration;
- (_Bool)_hasCompletelyConfiguredSkinToneConfiguration;
- (void)_updateReferencedKeySelectedVariantIndexBasedOnCurrentConfiguration;
- (void)_beginFamilyMetachronalRhythmAnimation;
- (void)_configureSkinToneVariantSpecifiersForBaseString:(id)arg1;
- (void)_setCurrentlySelectedSkinToneConfiguration:(id)arg1;
- (void)_colorConfigurationDidChange;

@end
