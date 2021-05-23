/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <TVMLKit/_TVAppDocumentRequestController.h>

@class IKAppContext, NSMutableOrderedSet, NSString, VUIAppDocumentUpdateEventStore;

@protocol VUIAppDocumentUpdateContext;

@interface VUIAppDocumentServiceViewController : _TVAppDocumentRequestController

{
    _Bool _deferDocumentUpdateEventProcessing;
    _Bool _markDocumentDirtyForRefreshUpdate;
    NSString *_viewControllerIdentifier;
    IKAppContext *_appContext;
    NSString *_documentRef;
    id <VUIAppDocumentUpdateContext> _documentUpdateContext;
    NSMutableOrderedSet *_documentUpdateViewElements;
    VUIAppDocumentUpdateEventStore *_deferredDocumentUpdateEventStore;
}

@property (weak, nonatomic) IKAppContext *appContext;
@property (copy, nonatomic) NSString *documentRef;
@property (retain, nonatomic) id <VUIAppDocumentUpdateContext> documentUpdateContext;
@property (retain, nonatomic) NSMutableOrderedSet *documentUpdateViewElements;
@property (retain, nonatomic) VUIAppDocumentUpdateEventStore *deferredDocumentUpdateEventStore;
@property (nonatomic) _Bool deferDocumentUpdateEventProcessing;
@property (nonatomic) _Bool markDocumentDirtyForRefreshUpdate;
@property (retain, nonatomic) NSString *viewControllerIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_findCollectionListChildElementsInViewElement:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (void)popoverPresentationController:(id)arg1 willRepositionPopoverToRect:(inout struct CGRect *)arg2 inView:(inout id *)arg3;
- (id)initWithAppContext:(id)arg1;
- (void)serviceRequest:(id)arg1 didCompleteWithStatus:(long long)arg2 errorDictionary:(id)arg3;
- (void)documentDidUpdate:(id)arg1;
- (void)updateServiceRequest:(id)arg1 documentDidChange:(id)arg2;
- (id)initWithDocumentServiceRequest:(id)arg1;
- (id)initWithDocumentServiceRequest:(id)arg1 loadImmediately:(_Bool)arg2;
- (void)didCompleteDocumentCreationWithStatus:(long long)arg1 errorDictionary:(id)arg2;
- (_Bool)handleEvent:(id)arg1 targetResponder:(id)arg2 viewElement:(id)arg3 extraInfo:(id *)arg4;
- (id)interactionPreviewControllerForViewController:(id)arg1 presentingView:(id)arg2 presentingElement:(id)arg3;
- (void)vui_handleEvent:(id)arg1 forElement:(id)arg2 sourceView:(id)arg3;
- (id)initWithDocumentServiceRequest:(id)arg1 loadImmediately:(_Bool)arg2 documentRef:(id)arg3 viewControllerIdentifier:(id)arg4;
- (void)appDocumentDidReceiveEvent:(id)arg1;
- (void)_cancelDocumentUpdates;
- (void)_unregisterDocumentUpdateEventDescriptors;
- (void)_cancelDocumentUpdatesAndPreserveUpdateEvents;
- (void)_startDocumentUpdatesWithContext:(id)arg1;
- (void)_startDocumentUpdatesForDeferredEventsIfPossible;
- (void)_registerDocumentUpdateEventDescriptorsWithServiceCompletionStatus:(long long)arg1;
- (void)_performNextDocumentUpdateIfNeeded;
- (void)_cancelDocumentUpdateWithRequest:(id)arg1;
- (void)_startDocumentUpdateWithRequest:(id)arg1;
- (void)updateDocumentWithContextDictionary:(id)arg1 element:(id)arg2;

@end
