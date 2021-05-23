/*
 Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

#import <SiriUI/SiriUICardSnippetViewController.h>

@class SAUISnippet;

@interface SiriUILegacyCardSnippetViewController : SiriUICardSnippetViewController

{
    SAUISnippet *_snippet;
}

+ (void)initialize;

- (void)setDelegate:(id)arg1;
- (_Bool)isCancelled;
- (id)subtitle;
- (void)setSubtitle:(id)arg1;
- (void)setCancelled:(_Bool)arg1;
- (id)snippet;
- (void)setSnippet:(id)arg1;
- (id)requestContext;
- (void)setRequestContext:(id)arg1;
- (id)navigationTitle;
- (_Bool)isConfirmed;
- (void)setConfirmed:(_Bool)arg1;
- (id)attributedSubtitle;
- (void)setAttributedSubtitle:(id)arg1;
- (void)setNavigationTitle:(id)arg1;
- (void)cardViewControllerDidLoad:(id)arg1;
- (_Bool)cardViewController:(id)arg1 shouldLoadIdentifiedCardSectionViewProvidersWithProviderManager:(id)arg2;
- (void)siriWillActivateFromSource:(long long)arg1;
- (void)siriDidDeactivate;
- (id)initWithSnippet:(id)arg1;
- (_Bool)usePlatterStyle;
- (void)wasAddedToTranscript;
- (void)endEditingAndCorrect:(_Bool)arg1;
- (_Bool)removedAfterDialogProgresses;
- (void)_setVirgin:(_Bool)arg1;
- (void)willCancel;
- (void)willConfirm;
- (id)sashItem;
- (Class)transparentHeaderViewClass;
- (void)siriWillLayoutSnippetView;
- (void)siriDidLayoutSnippetView;
- (id)snippetPunchOut;
- (id)headerPunchOut;
- (void)setWantsConfirmationInsets:(_Bool)arg1;
- (_Bool)wantsConfirmationInsets;
- (_Bool)wantsToManageBackgroundColor;
- (void)setHeaderPunchOut:(id)arg1;
- (void)setSnippetPunchOut:(id)arg1;
- (_Bool)isFullPadWidth;
- (void)setIsFullPadWidth:(_Bool)arg1;
- (id)_legacyCardSectionViewController;
- (id)_backingSnippetViewController;

@end
