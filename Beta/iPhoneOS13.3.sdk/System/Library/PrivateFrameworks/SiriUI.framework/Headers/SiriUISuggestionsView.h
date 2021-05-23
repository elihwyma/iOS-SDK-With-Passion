/*
 Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

#import <UIView.h>

@class NSArray, NSMutableOrderedSet, NSTimer, SiriUIAcousticIDSpinner, SiriUISuggestionsHeaderText, UIColor, UILabel;

@protocol SiriUISuggestionsViewDelegate;

@interface SiriUISuggestionsView : UIView

{
    UIView *_contentView;
    UILabel *_headerLabel;
    UILabel *_oldHeaderLabel;
    UILabel *_subheaderLabel;
    UILabel *_largeSubheaderLabel;
    NSArray *_suggestionLabels;
    NSArray *_oldSuggestionLabels;
    _Bool _firstSuggestionPresentation;
    NSTimer *_updateSuggestionsTimer;
    NSMutableOrderedSet *_pendedSuggestions;
    SiriUIAcousticIDSpinner *_acousticIDSpinner;
    unsigned long long _numberOfSuggestions;
    struct NSDirectionalEdgeInsets _edgeInsets;
    UIView *_guideView;
    SiriUISuggestionsHeaderText *_headerText;
    SiriUISuggestionsHeaderText *_subheaderText;
    SiriUISuggestionsHeaderText *_largeSubheaderText;
    UIColor *_textColor;
    id <SiriUISuggestionsViewDelegate> _delegate;
    long long _orientation;
    struct CGPoint _contentOffset;
}

@property (retain, nonatomic) UIView *guideView;
@property (nonatomic, getter=isGuideHidden) _Bool guideHidden;
@property (copy, nonatomic) SiriUISuggestionsHeaderText *headerText;
@property (copy, nonatomic) SiriUISuggestionsHeaderText *subheaderText;
@property (copy, nonatomic) SiriUISuggestionsHeaderText *largeSubheaderText;
@property (copy, nonatomic) UIColor *textColor;
@property (nonatomic) struct CGPoint contentOffset;
@property (weak, nonatomic) id <SiriUISuggestionsViewDelegate> delegate;
@property (nonatomic) long long orientation;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)animateOutWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_isPortrait;
- (void)_updateSuggestions;
- (void)stopSuggesting;
- (void)acousticIDSpinnerDidHide:(id)arg1;
- (double)_suggestionFontSize;
- (void)_setHeaderText:(id)arg1;
- (void)_setSubheaderText:(id)arg1;
- (double)_headerToSubheaderOffset;
- (double)_headerToLargeSubheaderOffset;
- (double)_suggestionSpacing;
- (id)_createSpringAnimation:(double)arg1;
- (double)_updateSuggestionsDelay;
- (void)setGuideHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_animateHeaderOut;
- (void)_animateHeaderIn;
- (void)_loadSubheaderViewIfNeeded;
- (void)_setLargeSubheaderText:(id)arg1;
- (void)_loadLargeSubheaderViewIfNeeded;
- (void)_loadSuggestionsViewsIfNeeded;
- (void)_animateOutSuggestionAtIndex:(unsigned long long)arg1;
- (void)_animateInSuggestionAtIndex:(unsigned long long)arg1;
- (void)_setSuggestionTexts:(id)arg1;
- (void)clearCurrentSuggestions;
- (void)_reallyShowAcousticIDSpinner;
- (unsigned long long)_numberOfSuggestionsToDisplay;
- (int)_heightType;
- (_Bool)_isPadHeightType;
- (void)startSuggesting;
- (_Bool)isShowingSuggestions;
- (void)showAcousticIDSpinner;
- (void)hideAcousticIDSpinner;

@end
