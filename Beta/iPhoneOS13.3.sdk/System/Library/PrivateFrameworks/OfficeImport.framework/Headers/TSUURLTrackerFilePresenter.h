/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSData, NSError, NSOperationQueue, NSSet, NSString, NSURL;

@protocol OS_dispatch_queue, TSUURLTrackerDelegate;

__attribute__((visibility("hidden")))
@interface TSUURLTrackerFilePresenter : NSObject

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    _Bool _hasStarted;
    NSURL *_URLIfAvailable;
    NSData *_bookmarkDataIfAvailable;
    NSError *_latestError;
    id <TSUURLTrackerDelegate> _delegate;
    NSOperationQueue *_presentedItemOperationQueue;
}

@property (readonly) NSData *bookmarkData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, readonly) NSURL *presentedItemURL;
@property (retain, readonly) NSOperationQueue *presentedItemOperationQueue;
@property (copy, readonly) NSURL *primaryPresentedItemURL;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;

- (id)init;
- (void)pause;
- (void)stop;
- (void)accommodatePresentedItemDeletionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)presentedItemDidMoveToURL:(id)arg1;
- (void)presentedItemDidChangeUbiquityAttributes:(id)arg1;
- (void)relinquishPresentedItemToWriter:(CDUnknownBlockType)arg1;
- (id)_description;
- (id)_bookmarkData;
- (id)initWithURL:(id)arg1 bookmarkData:(id)arg2 delegate:(id)arg3;
- (id)URLAndReturnError:(id *)arg1;
- (void)startOrResume;
- (id)_URLAndReturnError:(id *)arg1;
- (id)_bookmarkDataAndReturnError:(id *)arg1;
- (id)bookmarkDataAndReturnError:(id *)arg1;

@end
