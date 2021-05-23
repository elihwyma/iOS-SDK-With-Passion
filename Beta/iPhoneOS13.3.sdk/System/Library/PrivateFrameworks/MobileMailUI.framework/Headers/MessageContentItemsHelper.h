/*
 Image: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
 */

#import <Foundation/NSObject.h>

@class EMMailDropMetadata, NSArray, NSMutableDictionary, NSMutableSet, NSProgress, NSString, WKWebView;

@protocol ContentRepresentationHandlingDelegate, EFScheduler;

@interface MessageContentItemsHelper : NSObject

{
    NSMutableDictionary *_elementIDToContentID;
    NSMutableDictionary *_elementIDToWKAttachmentID;
    NSMutableDictionary *_contentIDToDownloadFutures;
    NSMutableSet *_inlinedImageContentIDs;
    _Bool _didComputeMailDropProperties;
    long long _totalUnstartedMailDropDownloadSize;
    id <EFScheduler> _attachmentsScheduler;
    NSProgress *_totalMailDropProgress;
    _Bool _allMailDropsDownloaded;
    WKWebView *_webView;
    NSArray *_contentItems;
    id <ContentRepresentationHandlingDelegate> _representationHandler;
    EMMailDropMetadata *_mailDropBannerMetadata;
    unsigned long long _totalMailDropDownloadSize;
    CDUnknownBlockType _maildropProgressHandler;
}

@property (retain, nonatomic) WKWebView *webView;
@property (retain, nonatomic) NSArray *contentItems;
@property (weak, nonatomic) id <ContentRepresentationHandlingDelegate> representationHandler;
@property (retain, nonatomic) EMMailDropMetadata *mailDropBannerMetadata;
@property (nonatomic) unsigned long long totalMailDropDownloadSize;
@property (nonatomic) _Bool allMailDropsDownloaded;
@property (copy, nonatomic) CDUnknownBlockType maildropProgressHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)log;

- (id)contentItemForContentID:(id)arg1;
- (void)_computeMailDropProperties;
- (void)_injectAttachmentViewForElementWithSourceAttributeValue:(id)arg1 forContentItem:(id)arg2;
- (id)contentItemForElementID:(id)arg1;
- (long long)displayStateForContentItem:(id)arg1;
- (void)displayViewerForContentItem:(id)arg1 rect:(struct CGRect)arg2 view:(id)arg3;
- (id)startDownloadForContentItem:(id)arg1 userInitiated:(_Bool)arg2;
- (id)_futureForContentItem:(id)arg1;
- (id)_futureForContentItem:(id)arg1 networkUsage:(long long)arg2 progress:(id *)arg3;
- (void)setDisplayState:(long long)arg1 forContentItem:(id)arg2;
- (void)setPercentCompleted:(double)arg1 forContentItem:(id)arg2;
- (void)_updateProgressFraction:(id)arg1 forContentItem:(id)arg2;
- (void)inlineImageFinishedDownloading:(id)arg1;
- (id)initWithWebView:(id)arg1 contentItemHandler:(id)arg2;
- (void)associateElementID:(id)arg1 withContentID:(id)arg2;
- (void)associateElementID:(id)arg1 withWKAttachmentID:(id)arg2;
- (void)noteDidFinishDocumentLoadForURL:(id)arg1;
- (void)noteDidFailLoadingResourceWithURL:(id)arg1;
- (void)attachmentWasTappedWithElementID:(id)arg1 rect:(struct CGRect)arg2 view:(id)arg3;
- (void)showMenuForContentItem:(id)arg1 rect:(struct CGRect)arg2 view:(id)arg3;
- (id)futureForContentItem:(id)arg1 download:(_Bool)arg2;
- (void)updateDragItemProvider:(id)arg1 forElementID:(id)arg2;
- (void)downloadAllMailDropAttachments;

@end
