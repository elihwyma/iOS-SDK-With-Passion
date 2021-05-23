/*
 Image: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
 */

#import <Foundation/NSOperation.h>

@class GSAddition, NSData, NSDictionary, NSError, NSObject, NSURL, QLThumbnailAddition;

@protocol OS_os_activity, QLThumbnailGenerationRequest><NSXPCProxyCreating;

@interface QLThumbnailStoreRetrievalOperation : NSOperation

{
    NSURL *_documentURL;
    NSError *_error;
    _Bool _finished;
    _Bool _executing;
    _Bool _allowsThumbnailGeneration;
    _Bool _generateThumbnailsAtBackgroundPriority;
    _Bool _thumbnailWasJustAutomaticallyGenerated;
    NSObject<OS_os_activity> *_retrievalActivity;
    NSObject<OS_os_activity> *_generationActivity;
    QLThumbnailAddition *_addition;
    id <QLThumbnailGenerationRequest><NSXPCProxyCreating> _thumbnailRequest;
    NSURL *_destinationURL;
}

@property (retain) NSError *error;
@property (nonatomic, getter=isExecuting) _Bool executing;
@property (nonatomic, getter=isFinished) _Bool finished;
@property (retain) id <QLThumbnailGenerationRequest><NSXPCProxyCreating> thumbnailRequest;
@property (retain) NSURL *documentURL;
@property (retain) NSURL *destinationURL;
@property _Bool allowsThumbnailGeneration;
@property _Bool generateThumbnailsAtBackgroundPriority;
@property (readonly) NSDictionary *thumbnailImagesDictionary;
@property (readonly) NSData *serializedQuickLookMetadataDictionary;
@property (readonly) _Bool thumbnailWasAutomaticallyGenerated;
@property (readonly) GSAddition *genStoreAddition;
@property (readonly) _Bool thumbnailWasJustAutomaticallyGenerated;
@property (readonly) QLThumbnailAddition *addition;

+ (_Bool)canMostRecentClientsGenerateThumbnailsForUTI:(id)arg1;

- (id)init;
- (id)description;
- (void)cancel;
- (void)start;
- (void)main;
- (_Bool)isConcurrent;
- (void)_finishWithError:(id)arg1;
- (_Bool)_finishIfNeeded;
- (void)_generateThumbnail;
- (void)_finishBecauseGenerationFailedWithUnderlyingError:(id)arg1;
- (void)_afterThumbnailIsGenerated;
- (void)_afterDeterminingWhetherWeCanGenerate:(_Bool)arg1;
- (void)afterThumbnailIsPutInGenstore;
- (id)initWithDocumentAtURL:(id)arg1;

@end
