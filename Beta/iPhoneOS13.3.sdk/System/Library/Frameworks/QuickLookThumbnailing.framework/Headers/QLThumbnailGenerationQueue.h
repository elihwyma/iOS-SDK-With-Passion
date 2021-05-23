/*
 Image: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSOperationQueue;

@interface QLThumbnailGenerationQueue : NSObject

{
    NSOperationQueue *_queue;
    NSMutableDictionary *_queuedURLs;
}

@property (retain) NSMutableDictionary *queuedURLs;
@property (retain) NSOperationQueue *queue;

+ (id)sharedInstance;

- (id)init;
- (void)noteThumbnailGenerationQueuedExternallyForDocumentAtURL:(id)arg1;
- (void)enqueueThumbnailGenerationIfNeededForDocumentAtURL:(id)arg1 atBackgroundPriority:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
