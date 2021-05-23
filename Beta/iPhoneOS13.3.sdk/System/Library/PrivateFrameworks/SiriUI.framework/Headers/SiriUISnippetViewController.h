/*
 Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

#import <SiriUI/SiriUIBaseSnippetViewController.h>

@class NSArray, NSAttributedString, NSString, NSUUID, SAUIAppPunchOut, SAUIConfirmationOptions, UICollectionReusableView, UIColor, UIView;

@protocol SiriUIReusableView, SiriUISnippetViewControllerDelegate;

@interface SiriUISnippetViewController : SiriUIBaseSnippetViewController

{
    UICollectionReusableView<SiriUIReusableView> *_headerView;
    UICollectionReusableView<SiriUIReusableView> *_footerView;
    UICollectionReusableView<SiriUIReusableView> *_transparentHeaderView;
    UICollectionReusableView<SiriUIReusableView> *_transparentFooterView;
    _Bool _wantsConfirmationInsets;
    _Bool _isFullPadWidth;
    _Bool _isTransparent;
    _Bool _loading;
    _Bool _confirmed;
    _Bool _cancelled;
    _Bool _virgin;
    _Bool _willAnimateConfirmation;
    _Bool _willAnimateCancellation;
    _Bool _awaitingSuccessOrFailureEvent;
    _Bool _showHeaderChevron;
    _Bool _provisional;
    struct NSUUID *_instrumentationTurnIdentifier;
    UIColor *_titleTextColor;
    UIColor *_titleBackgroundColor;
    NSAttributedString *_attributedSubtitle;
    NSString *_navigationTitle;
    NSArray *_requestContext;
    SAUIAppPunchOut *_headerPunchOut;
    SAUIAppPunchOut *_snippetPunchOut;
    UIView *_containingView;
    long long _defaultKeylineType;
    SAUIConfirmationOptions *_previousConfirmationOptions;
    struct UIEdgeInsets _defaultViewInsets;
}

@property (nonatomic, getter=_willAnimateConfirmation, setter=_setWillAnimateConfirmation:) _Bool willAnimateConfirmation;
@property (nonatomic, getter=_willAnimateCancellation, setter=_setWillAnimateCancellation:) _Bool willAnimateCancellation;
@property (retain, nonatomic, getter=_previousConfirmationOptions, setter=_setPreviousConfirmationOptions:) SAUIConfirmationOptions *previousConfirmationOptions;
@property (nonatomic, getter=_isAwaitingSuccessOrFailureEvent, setter=_setAwaitingSuccessOrFailureEvent:) _Bool awaitingSuccessOrFailureEvent;
@property (nonatomic) _Bool showHeaderChevron;
@property (nonatomic, getter=_isProvisional, setter=_setProvisional:) _Bool provisional;
@property (weak, nonatomic) id <SiriUISnippetViewControllerDelegate> delegate;
@property (retain, nonatomic) NSUUID *instrumentationTurnIdentifier;
@property (copy, nonatomic) UIColor *titleTextColor;
@property (copy, nonatomic) UIColor *titleBackgroundColor;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSAttributedString *attributedSubtitle;
@property (copy, nonatomic) NSString *navigationTitle;
@property (copy, nonatomic) NSArray *requestContext;
@property (retain, nonatomic) SAUIAppPunchOut *headerPunchOut;
@property (retain, nonatomic) SAUIAppPunchOut *snippetPunchOut;
@property (nonatomic) struct UIEdgeInsets defaultViewInsets;
@property (nonatomic) _Bool wantsConfirmationInsets;
@property (nonatomic) _Bool isFullPadWidth;
@property (nonatomic) _Bool isTransparent;
@property (nonatomic, getter=isLoading) _Bool loading;
@property (nonatomic, getter=isConfirmed) _Bool confirmed;
@property (nonatomic, getter=isCancelled) _Bool cancelled;
@property (weak, nonatomic) UIView *containingView;
@property (nonatomic, readonly, getter=isVirgin) _Bool virgin;
@property (nonatomic, readonly, getter=isIndicatingActivity) _Bool indicatingActivity;
@property (nonatomic) long long defaultKeylineType;

- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)_headerView;
- (id)_footerView;
- (id)_privateDelegate;
- (void)cancelButtonTapped:(id)arg1;
- (void)confirmSnippet;
- (void)_cancelTouchesIfNecessary;
- (void)_resumeTouchesIfNecessary;
- (void)setManageBackgroundColor:(_Bool)arg1;
- (_Bool)usePlatterStyle;
- (Class)footerViewClass;
- (void)configureReusableFooterView:(id)arg1;
- (double)desiredHeightForFooterView;
- (_Bool)shouldHidePriorViews;
- (_Bool)removedAfterDialogProgresses;
- (void)_setVirgin:(_Bool)arg1;
- (long long)_pinAnimationType;
- (long long)_insertionAnimation;
- (long long)_replacementAnimation;
- (_Bool)logContentsIfApplicable;
- (void)willCancel;
- (void)willConfirm;
- (Class)transparentHeaderViewClass;
- (void)configureReusableTransparentHeaderView:(id)arg1;
- (double)desiredHeightForTransparentHeaderView;
- (_Bool)_hasConfirmationOrCancelledInsets;
- (void)siriWillLayoutSnippetView;
- (void)_cellDidLayoutSubviews;
- (void)siriDidLayoutSnippetView;
- (_Bool)_hasConfirmationButtons;
- (double)desiredHeightForHeaderView;
- (double)desiredHeightForTransparentFooterView;
- (id)_transparentHeaderView;
- (id)_transparentFooterView;
- (void)_snippetPunchOutButtonTapped;
- (Class)headerViewClass;
- (id)_createReusableViewIfNeededWithClass:(Class)arg1;
- (void)configureReusableHeaderView:(id)arg1;
- (void)configureReusableTransparentFooterView:(id)arg1;
- (void)headerTapped:(id)arg1;
- (void)confirmButtonTapped:(id)arg1;
- (Class)transparentFooterViewClass;
- (_Bool)isMemoryIntensive;
- (void)_snippetViewControllerWillBeRemoved;
- (id)alternativeAceCommandsToPerformIfNotExposingViews;
- (_Bool)wantsToManageBackgroundColor;
- (void)setTopKeylineHidden:(_Bool)arg1;

@end
