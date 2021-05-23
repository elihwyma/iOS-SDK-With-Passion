/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <Foundation/NSObject.h>

@class ICAttachmentPreviewGeneratorOperationQueue, ICProgressIndicatorTracker, NSMapTable, NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, NSString;

@protocol OS_dispatch_queue;

@interface ICAttachmentPreviewGenerator : NSObject

{
    _Atomic _Bool _shouldGenerateAttachmentsWhenReachable;
    ICAttachmentPreviewGeneratorOperationQueue *_asyncGeneratorQueue;
    ICAttachmentPreviewGeneratorOperationQueue *_costlyGeneratorQueue;
    ICAttachmentPreviewGeneratorOperationQueue *_generatorQueue;
    NSMapTable *_lastOperationForAttachmentID;
    NSMutableSet *_attachmentIDsPending;
    NSMutableDictionary *_attachmentIDsProgress;
    ICProgressIndicatorTracker *_progressTracker;
    ICAttachmentPreviewGeneratorOperationQueue *_postProcessingQueue;
    NSMutableOrderedSet *_postProcessingIDsPending;
    unsigned long long _postProcessingRequestIndex;
    unsigned long long _previewGenerationState;
    NSObject<OS_dispatch_queue> *_previewQueue;
    NSObject<OS_dispatch_queue> *_previewProgressQueue;
}

@property (retain, nonatomic) ICAttachmentPreviewGeneratorOperationQueue *asyncGeneratorQueue;
@property (retain, nonatomic) ICAttachmentPreviewGeneratorOperationQueue *costlyGeneratorQueue;
@property (retain, nonatomic) ICAttachmentPreviewGeneratorOperationQueue *generatorQueue;
@property (retain, nonatomic) NSMapTable *lastOperationForAttachmentID;
@property (retain, nonatomic) NSMutableSet *attachmentIDsPending;
@property (retain, nonatomic) NSMutableDictionary *attachmentIDsProgress;
@property (retain, nonatomic) ICProgressIndicatorTracker *progressTracker;
@property (retain, nonatomic) ICAttachmentPreviewGeneratorOperationQueue *postProcessingQueue;
@property (retain, nonatomic) NSMutableOrderedSet *postProcessingIDsPending;
@property unsigned long long postProcessingRequestIndex;
@property unsigned long long previewGenerationState;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *previewQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *previewProgressQueue;
@property (nonatomic) _Atomic _Bool shouldGenerateAttachmentsWhenReachable;
@property (nonatomic, readonly) _Bool previewOperationsIdle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedGenerator;
+ (_Bool)ocrGenerationEnabled;
+ (_Bool)imageClassificationEnabled;
+ (void)setImageClassificationTemporarilyDisabled:(_Bool)arg1;
+ (void)purgeImageClassificationsInContext:(id)arg1;
+ (void)purgeOCRInContext:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)resume;
- (void)suspend;
- (void)managedObjectContextDidSave:(id)arg1;
- (void)reachabilityChanged:(id)arg1;
- (void)generatePreviewsIfNeeded;
- (void)generatePreviewIfNeededForAttachmentWithObjectID:(id)arg1;
- (void)operationComplete:(id)arg1;
- (void)enableAutomaticPreviewGeneration;
- (_Bool)isPreviewGenerationSupported;
- (void)generatePendingPreviews;
- (id)missingOrOutdatedOCRSummaryAttachmentsInContext:(id)arg1;
- (id)missingOrOutdatedImageClassificationSummaryAttachmentsInContext:(id)arg1;
- (id)missingOrOutdatedMetaDataAttachmentsInContext:(id)arg1;
- (void)postProcessIfNeededForAttachment:(id)arg1;
- (void)beginPostProcessingAfterDelayIfNecessaryWithForceDelay:(_Bool)arg1;
- (void)postProcessPendingPreviews;
- (void)postProcessPreviewForAttachment:(id)arg1;
- (void)adjustUserTitleIfNecessaryForAttachment:(id)arg1;
- (void)attachmentNeedsPreviewGenerationNotification:(id)arg1;
- (void)generatePreviewIfNeededForAttachment:(id)arg1;
- (void)attachmentDidLoad:(id)arg1;
- (void)attachmentWillBeDeleted:(id)arg1;
- (void)mediaDidLoad:(id)arg1;
- (void)generatePendingPreviewForAttachment:(id)arg1;
- (void)progressIndicatorTrackerStartAnimation;
- (void)progressIndicatorTrackerStopAnimation;
- (void)generateMissingOrOutdatedAttachmentMetaDataIfNeededInContext:(id)arg1;
- (void)attachmentNeedsPostProcessingNotification:(id)arg1;
- (void)cancelGenerationOfPendingPreviews;
- (void)didRecieveMemoryWarning;
- (void)disableAutomaticPreviewGeneration;
- (void)setProgress:(id)arg1 forObjectID:(id)arg2;
- (id)progressForObjectID:(id)arg1;
- (void)cancelIfNeededForAttachment:(id)arg1;

@end
