/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class NSData, NSOperationQueue, NSSet, NSString, NSURL;

@protocol SFDownloadFileDelegate;

__attribute__((visibility("hidden")))
@interface SFDownloadFile : NSObject

{
    _Bool _invalidated;
    _Bool _usingSecurityScopedURL;
    _Bool _suspended;
    id <SFDownloadFileDelegate> _delegate;
    NSURL *_URL;
    NSData *_bookmarkData;
}

@property (weak, nonatomic) id <SFDownloadFileDelegate> delegate;
@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) NSData *bookmarkData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, readonly) NSURL *presentedItemURL;
@property (retain, readonly) NSOperationQueue *presentedItemOperationQueue;
@property (copy, readonly) NSURL *primaryPresentedItemURL;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;

- (void)dealloc;
- (void)_suspend;
- (void)_resume;
- (void)invalidate;
- (id)initWithURL:(id)arg1;
- (void)accommodatePresentedItemDeletionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)presentedItemDidChange;
- (void)presentedItemDidMoveToURL:(id)arg1;
- (id)initWithURL:(id)arg1 bookmarkData:(id)arg2;
- (id)initWithBookmarkData:(id)arg1;

@end
