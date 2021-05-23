/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UISearchBarLayoutBase.h>

@class NSString, UISearchBarTextField, UIView, _UISearchBarPromptContainerView, _UISearchBarScopeContainerLayout, _UISearchBarScopeContainerView, _UISearchBarSearchContainerLayout, _UISearchBarSearchContainerView;

__attribute__((visibility("hidden")))
@interface _UISearchBarLayout : _UISearchBarLayoutBase

{
    struct {
        unsigned int hasCancelButton:1;
        unsigned int hasDeleteButton:1;
        unsigned int hasLeftButton:1;
        unsigned int hasScopeBar:1;
        unsigned int hasPromptLabel:1;
        unsigned int hasSearchBarBackground:1;
        unsigned int hasSearchBarBackdrop:1;
        unsigned int hasSeparator:1;
        unsigned int allowSearchFieldShrinkage:1;
        unsigned int searchFieldUsesCustomBackgroundImage:1;
        unsigned int isProspective:1;
        unsigned int isHostingNavBarTransitionActive:1;
    } _searchBarLayoutFlags;
    UIView *_searchBarBackground;
    UIView *_searchBarBackdrop;
    UIView *_separator;
    _UISearchBarScopeContainerView *_scopeBarContainer;
    _UISearchBarSearchContainerView *_searchFieldContainer;
    _UISearchBarPromptContainerView *_promptContainer;
    double _backgroundExtension;
    double _searchBarReadableWidth;
    unsigned long long _numberOfScopeTitles;
    long long _representedLayoutState;
    _UISearchBarScopeContainerLayout *_scopeContainerLayout;
    _UISearchBarSearchContainerLayout *_searchContainerLayout;
    struct UIOffset _searchFieldBackgroundPositionAdjustment;
    CDStruct_ef18196a _heightRange;
    struct CGRect _promptContainerLayoutFrame;
    struct CGRect _searchFieldContainerLayoutFrame;
    struct CGRect _scopeBarContainerLayoutFrame;
    struct CGRect _searchBarBackgroundLayoutFrame;
    struct CGRect _separatorLayoutFrame;
}

@property (retain, nonatomic) _UISearchBarScopeContainerLayout *scopeContainerLayout;
@property (retain, nonatomic) _UISearchBarSearchContainerLayout *searchContainerLayout;
@property (nonatomic, readonly) double naturalSearchBarHeight;
@property (nonatomic, readonly) double naturalSearchFieldHeight;
@property (nonatomic, readonly) double naturalScopeBarHeight;
@property (nonatomic, readonly) struct UIEdgeInsets scopeContainerSpecificInsets;
@property (nonatomic, readonly) double naturalPromptContainerHeight;
@property (nonatomic, readonly) double naturalTotalHeight;
@property (nonatomic, getter=isProspective) _Bool prospective;
@property (nonatomic, getter=isHostingNavBarTransitionActive) _Bool hostingNavBarTransitionActive;
@property (retain, nonatomic) UIView *searchBarBackground;
@property (retain, nonatomic) UIView *searchBarBackdrop;
@property (retain, nonatomic) UIView *separator;
@property (retain, nonatomic) _UISearchBarScopeContainerView *scopeBarContainer;
@property (retain, nonatomic) _UISearchBarSearchContainerView *searchFieldContainer;
@property (retain, nonatomic) _UISearchBarPromptContainerView *promptContainer;
@property (retain, nonatomic) UIView *scopeBar;
@property (retain, nonatomic) UISearchBarTextField *searchField;
@property (retain, nonatomic) UIView *cancelButton;
@property (retain, nonatomic) UIView *deleteButton;
@property (retain, nonatomic) UIView *leftButton;
@property (nonatomic) _Bool hasCancelButton;
@property (nonatomic) _Bool hasDeleteButton;
@property (nonatomic) _Bool hasLeftButton;
@property (nonatomic) _Bool hasScopeBar;
@property (nonatomic) _Bool hasPromptLabel;
@property (nonatomic) _Bool hasSearchBarBackground;
@property (nonatomic) _Bool hasSearchBarBackdrop;
@property (nonatomic) _Bool hasSeparator;
@property (nonatomic) double backgroundExtension;
@property (nonatomic) _Bool allowSearchFieldShrinkage;
@property (nonatomic) _Bool searchFieldUsesCustomBackgroundImage;
@property (nonatomic) struct UIOffset searchFieldBackgroundPositionAdjustment;
@property (nonatomic) double searchBarReadableWidth;
@property (nonatomic) unsigned long long numberOfScopeTitles;
@property (nonatomic, readonly) struct CGRect searchFieldContainerLayoutFrame;
@property (nonatomic, readonly) struct CGRect scopeBarContainerLayoutFrame;
@property (nonatomic, readonly) struct CGRect promptContainerLayoutFrame;
@property (nonatomic, readonly) struct CGRect searchBarBackgroundLayoutFrame;
@property (nonatomic, readonly) struct CGRect separatorLayoutFrame;
@property (nonatomic) long long representedLayoutState;
@property (nonatomic, readonly) CDStruct_c3b9c2ee heightRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)updateLayout;
- (void)setDelegateSearchFieldFrameManipulationBlock:(CDUnknownBlockType)arg1;
- (void)applyLayout;
- (void)setUpSearchContainerLayout;
- (void)setUpScopeContainerLayout;
- (void)prepareSearchContainerLayout;
- (void)prepareScopeContainerLayout;
- (void)prepareBaseConfigurationForSublayout:(id)arg1;
- (double)minimumLayoutWidth;
- (void)ensureCorrectContainerViewOrdering;
- (void)prepareSublayouts;
- (void)containerLayoutWillUpdateLayout:(id)arg1;
- (void)applyScopeContainerSublayout;
- (void)cleanUpLayout;

@end
