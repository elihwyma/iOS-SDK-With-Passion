/*
 Image: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
 */

#import <Foundation/NSObject.h>

@class NSOperationQueue, NSString, NSURL;

@protocol FPDFileCoordinationProviderDelegate;

__attribute__((visibility("hidden")))
@interface FPDFileCoordinationProvider : NSObject

{
    NSURL *_providedItemsURL;
    id <FPDFileCoordinationProviderDelegate> _delegate;
    NSString *_extensionIdentifier;
}

@property (weak) id <FPDFileCoordinationProviderDelegate> delegate;
@property (copy) NSString *extensionIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, readonly) NSURL *_providedItemsURL;
@property (readonly) NSOperationQueue *_providedItemsOperationQueue;
@property (copy, readonly) NSString *_fileReactorID;

- (void)_writerWithID:(id)arg1 didFinishWritingForURL:(id)arg2;
- (void)_provideItemAtURL:(id)arg1 toReaderWithID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_provideItemAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_cancelProvidingItemAtURL:(id)arg1 toReaderWithID:(id)arg2;
- (id)_physicalURLForURL:(id)arg1;
- (void)_providedItemAtURL:(id)arg1 didGainPresenterWithID:(id)arg2;
- (void)_providedItemAtURL:(id)arg1 didLosePresenterWithID:(id)arg2;
- (void)_providedItemAtURL:(id)arg1 withPresenterWithID:(id)arg2 didMoveToURL:(id)arg3;
- (id)delegateForURL:(id)arg1;
- (id)initWithRootURL:(id)arg1;

@end
