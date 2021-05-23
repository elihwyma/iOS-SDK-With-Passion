/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSOperationQueue;

@interface ICRemoteFileAttachmentDownloader : NSObject

{
    NSMutableDictionary *_operationsByAttachmentIdentifier;
    NSOperationQueue *_operationQueue;
}

@property (retain, nonatomic) NSMutableDictionary *operationsByAttachmentIdentifier;
@property (retain, nonatomic) NSOperationQueue *operationQueue;

+ (_Bool)needsToDownloadRemoteFileAttachments;
+ (id)sharedDownloader;
+ (id)allUndownloadedLegacyAttachmentsInContext:(id)arg1;
+ (void)releaseSharedDownloaderIfPossible;
+ (void)initializeDownloaderAfterDelayIfNecessary;

- (id)init;
- (void)dealloc;
- (void)reachabilityChanged:(id)arg1;
- (void)resumeDownloadsAfterDelay;
- (void)downloadUndownloadedLegacyAttachments;
- (void)downloadRemoteFileForAttachment:(id)arg1;
- (void)downloadRemoteFileForAttachmentObjectID:(id)arg1;

@end
