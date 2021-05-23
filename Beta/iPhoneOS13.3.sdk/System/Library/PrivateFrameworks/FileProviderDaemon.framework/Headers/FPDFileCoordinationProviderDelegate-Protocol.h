/*
 Image: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
 */

@protocol FPDFileCoordinationProviderDelegate

- (unsigned short)_fileReactorID;
- (unsigned short)_writerWithID:didFinishWritingForURL: /* Error: Ran out of types for this method. */;
- (unsigned short)_providedItemsOperationQueue;
- (unsigned short)_provideItemAtURL:toReaderWithID:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)_cancelProvidingItemAtURL:toReaderWithID: /* Error: Ran out of types for this method. */;
- (unsigned short)_physicalURLForURL: /* Error: Ran out of types for this method. */;
- (unsigned short)_providedItemAtURL:didGainPresenterWithID: /* Error: Ran out of types for this method. */;
- (unsigned short)_providedItemAtURL:didLosePresenterWithID: /* Error: Ran out of types for this method. */;
- (unsigned short)_providedItemAtURL:withPresenterWithID:didMoveToURL: /* Error: Ran out of types for this method. */;
- (unsigned short)_siblingDelegateForURL: /* Error: Ran out of types for this method. */;

@end
