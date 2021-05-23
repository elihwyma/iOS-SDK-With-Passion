/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKUIBehavior.h>

__attribute__((visibility("hidden")))
@interface CKUIBehaviorPad : CKUIBehavior

- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldSuppressRotationInNewCompose;
- (_Bool)shouldRefreshAlternateAddressesSheet;
- (_Bool)isAppStripInKeyboard;
- (_Bool)canPresentOverKeyboard;
- (_Bool)showsConversationListCellChevronImage;
- (unsigned long long)defaultConversationViewingMessageCount;
- (_Bool)usesPopovers;
- (_Bool)showPendingInConversationList;
- (id)fullscreenPickerActionLayoutAxisPrioritiesForWidth:(double)arg1;
- (double)conversationListMinimumWidthForHiddenContactImage;
- (_Bool)canShowContactPhotosInConversationList;
- (double)transcriptContactImageDiameter;
- (double)entryViewMaxHandWritingPluginShelfHeight;
- (_Bool)shouldShowDisclosureChevronInRecipientAtoms;
- (double)maxPrimaryColumnWidthForInterfaceOrientation:(long long)arg1;
- (struct UIEdgeInsets)minTranscriptMarginInsets;
- (_Bool)usesUncollapsedSplitview;
- (_Bool)lowClearanceInLandscape;
- (_Bool)presentsQuickLookController;
- (_Bool)presentForwardingUIModally;
- (_Bool)shouldOnlyResumeToConversationListAfterTimeout;
- (double)resumeToConversationListTimeInterval;
- (double)transcriptHeaderViewMaxRows;
- (_Bool)showMMSSetup;
- (struct UIEdgeInsets)contactPhotoTranscriptInsets;
- (struct CGSize)documentIconSize;
- (_Bool)presentsFullscreenInViewService;
- (struct CGSize)attachmentBrowserDefaultSizeForSquare;
- (double)attachmentBrowserGridInterItemSpacing;
- (double)photoPickerPopoverWidth;
- (unsigned long long)numberOfButtonsInPhotoPicker;
- (_Bool)photoPickerShouldZoomOnSelection;
- (double)photoPickerMaxPopoverPhotoHeight;
- (double)welcomeViewContentViewTopAnchorLayoutConstraintConstant;
- (_Bool)shouldAlignRecipientGlyphsWithMargins;
- (unsigned long long)suggestedAppStripLimit;
- (_Bool)shouldPopoverSuggestionsBanner;
- (double)searchPhotoThumbnailWidth;
- (double)searchLinkThumbnailWidth;

@end
