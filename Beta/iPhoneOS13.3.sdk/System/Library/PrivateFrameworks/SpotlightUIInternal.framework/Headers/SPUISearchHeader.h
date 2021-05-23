/*
 Image: /System/Library/PrivateFrameworks/SpotlightUIInternal.framework/SpotlightUIInternal
 */

#import <UIKit/UIView.h>

@class NSLayoutConstraint, NSString, SPSearchEntity, SPUITextField, UIButton, _UILegibilitySettings;

@protocol SPUIHeaderInteractionDelegate, SPUISearchHeaderDelegate;

@interface SPUISearchHeader : UIView

{
    _Bool _willClear;
    _Bool _searchTextScheduledForProcessing;
    _Bool _offersCompletions;
    id <SPUIHeaderInteractionDelegate> _interactionDelegate;
    _UILegibilitySettings *_legibilitySettings;
    long long _activeInterfaceOrientation;
    UIButton *_cancelButton;
    NSLayoutConstraint *_searchFieldTrailingConstraint;
    NSLayoutConstraint *_cancelButtonTrailingConstraint;
    NSLayoutConstraint *_widthConstraint;
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_bottomConstraint;
    id <SPUISearchHeaderDelegate> _delegate;
    unsigned long long _suggestionID;
    SPSearchEntity *_searchEntity;
    SPUITextField *_searchField;
    double _blurProgress;
}

@property (retain) UIButton *cancelButton;
@property (retain) NSLayoutConstraint *searchFieldTrailingConstraint;
@property (retain) NSLayoutConstraint *cancelButtonTrailingConstraint;
@property (retain) NSLayoutConstraint *widthConstraint;
@property (retain) NSLayoutConstraint *topConstraint;
@property (retain) NSLayoutConstraint *bottomConstraint;
@property _Bool willClear;
@property _Bool searchTextScheduledForProcessing;
@property (weak) id <SPUISearchHeaderDelegate> delegate;
@property (nonatomic, readonly) NSString *currentQuery;
@property unsigned long long suggestionID;
@property (retain, nonatomic) SPSearchEntity *searchEntity;
@property (retain) SPUITextField *searchField;
@property _Bool offersCompletions;
@property (nonatomic) double blurProgress;
@property (nonatomic) _Bool useInPlaceFilteredBlur;
@property (weak, nonatomic) id <SPUIHeaderInteractionDelegate> interactionDelegate;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (nonatomic) long long activeInterfaceOrientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)tokenFromSearchEntity:(id)arg1;

- (id)init;
- (_Bool)isFirstResponder;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (void)_dynamicUserInterfaceTraitDidChange;
- (id)_searchTextField:(id)arg1 itemProviderForCopyingToken:(id)arg2;
- (void)textDidChange:(id)arg1;
- (id)backdropVisualEffectView;
- (_Bool)textFieldShouldClear:(id)arg1;
- (void)textPasteConfigurationSupporting:(id)arg1 transformPasteItem:(id)arg2;
- (double)bottomPadding;
- (double)topPadding;
- (void)cancelButtonClicked:(id)arg1;
- (void)tlk_updateForAppearance:(id)arg1;
- (void)returnKeyPressed;
- (void)focusSearchField;
- (void)setSearchEntity:(id)arg1 fromSuggestion:(_Bool)arg2;
- (void)performTestSearchWithQuery:(id)arg1 event:(unsigned long long)arg2 sourcePreference:(unsigned long long)arg3;
- (void)searchForSuggestion:(id)arg1;
- (void)showCancelButton:(_Bool)arg1 animated:(_Bool)arg2;
- (void)unfocusSearchField;
- (void)clearSearchFieldWhyQuery:(unsigned long long)arg1 allowZKW:(_Bool)arg2;
- (void)setupKeyboardSupportForResultViewController:(id)arg1;
- (void)enableDictationIfRequired;
- (void)beginDictation;
- (void)dictationButtonPressed;
- (void)triggerSearchForUnlock;
- (void)escapeKeyPressed;
- (_Bool)textFieldShouldReturn;
- (void)textFieldDidBeginEditing;
- (void)updateBlurProgress;
- (_Bool)isOnDarkBackground;
- (void)textDidChange:(id)arg1 whyQuery:(unsigned long long)arg2 allowZKW:(_Bool)arg3;
- (id)currentQueryContextWithString:(id)arg1;
- (void)_updateClearButtonVisibility;
- (void)textDidChange:(id)arg1 whyQuery:(unsigned long long)arg2 allowZKW:(_Bool)arg3 sourcePreference:(unsigned long long)arg4 engagedSuggestion:(id)arg5;
- (void)addInputMethodInformationToQueryContext:(id)arg1;
- (void)_searchWithSearchEntity:(id)arg1 fromSuggestion:(_Bool)arg2;
- (void)focusSearchFieldAndBeginDictation:(_Bool)arg1;
- (void)performActionAfterCommit:(CDUnknownBlockType)arg1;
- (_Bool)cancelButtonIsVisible;

@end
