/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <SafariServices/_SFWebProcessPlugInAutoFillPageController.h>

@class NSDictionary, NSString, SFWebProcessPlugInCertificateWarningController, SFWebProcessPlugInPageExtensionController, _SFReaderWebProcessPlugInPageController, _SFWebProcessPlugInAppleConnectExtensionController, _SFWebProcessSharingLinkExtractor, _WKRemoteObjectInterface;

@protocol SFReaderEventsListener;

@interface _SFWebProcessPlugInReaderEnabledPageController : _SFWebProcessPlugInAutoFillPageController

{
    struct unique_ptr<SafariServices::ReaderAvailabilityController, std::__1::default_delete<SafariServices::ReaderAvailabilityController>> _readerAvailabilityController;
    _WKRemoteObjectInterface *_availabilityControllerInterface;
    id <SFReaderEventsListener> _readerActivityListenerProxy;
    _SFReaderWebProcessPlugInPageController *_readerPageController;
    long long _cachedReaderTopScrollOffset;
    NSDictionary *_initialScrollPositionAsDictionary;
    SFWebProcessPlugInPageExtensionController *_extensionController;
    _SFWebProcessSharingLinkExtractor *_sharingLinkExtractor;
    SFWebProcessPlugInCertificateWarningController *_certificateWarningController;
    _SFWebProcessPlugInAppleConnectExtensionController *_appleConnectExtensionController;
    _Bool _viewingReadingListArchive;
    NSDictionary *_initalArticleScrollPositionAsDictionary;
    NSDictionary *_initialReaderConfiguration;
}

@property (retain, nonatomic) _SFReaderWebProcessPlugInPageController *readerPageController;
@property (copy, nonatomic) NSDictionary *initalArticleScrollPositionAsDictionary;
@property (nonatomic) long long cachedReaderTopScrollOffset;
@property (nonatomic, readonly) NSDictionary *initialReaderConfiguration;
@property (nonatomic, readonly, getter=isViewingReadingListArchive) _Bool viewingReadingListArchive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id).cxx_construct;
- (void)setConfiguration:(id)arg1;
- (void)webProcessPlugInBrowserContextController:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2;
- (void)webProcessPlugInBrowserContextController:(id)arg1 didCommitLoadForFrame:(id)arg2;
- (void)webProcessPlugInBrowserContextController:(id)arg1 didFinishDocumentLoadForFrame:(id)arg2;
- (void)webProcessPlugInBrowserContextController:(id)arg1 didSameDocumentNavigation:(long long)arg2 forFrame:(id)arg3;
- (void)webProcessPlugInBrowserContextController:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (void)webProcessPlugInBrowserContextController:(id)arg1 globalObjectIsAvailableForFrame:(id)arg2 inScriptWorld:(id)arg3;
- (void)webProcessPlugInBrowserContextController:(id)arg1 renderingProgressDidChange:(unsigned long long)arg2;
- (id)initWithPlugIn:(id)arg1 contextController:(id)arg2;
- (void)willDestroyBrowserContextController:(id)arg1;
- (struct OpaqueJSValue *)originalArticleFinder;
- (void)setReaderIsActive:(_Bool)arg1;
- (void)didDetermineReaderAvailability:(_Bool)arg1 dueToSameDocumentNavigation:(_Bool)arg2;
- (void)didSetReaderConfiguration:(id)arg1;
- (void)prepareToTransitionToReader;
- (void)didCreateReaderPageContextHandle:(id)arg1;
- (void)loadNewReaderArticle;
- (void)setReaderInitialTopScrollOffset:(long long)arg1 configuration:(id)arg2 isViewingArchive:(_Bool)arg3;
- (void)collectReadingListItemInfoWithBookmarkID:(id)arg1;
- (void)collectReaderContentForMail;
- (void)activateFont:(id)arg1;
- (void)prepareReaderContentForPrinting;
- (void)didFinishPresentationUpdateAfterTransitioningToReader;
- (void)checkReaderAvailability;
- (void)collectArticleContent;
- (void)readerContentDidBecomeReadyWithDetectedLanguage:(id)arg1;
- (void)articleContentDidChange;
- (void)readerTextWasExtracted:(id)arg1 withMetadata:(id)arg2 wasDeterminingAvailability:(_Bool)arg3;
- (void)_setUpReaderControllerInterface;
- (void)_clearReaderControllerInterface;
- (void)_setUpReaderActivityListenerProxy;
- (void)_detectReaderAvailabilityAfterSameDocumentNavigation;
- (void)_detectAvailabilityAfterDelay:(double)arg1 loadEvent:(int)arg2;

@end
