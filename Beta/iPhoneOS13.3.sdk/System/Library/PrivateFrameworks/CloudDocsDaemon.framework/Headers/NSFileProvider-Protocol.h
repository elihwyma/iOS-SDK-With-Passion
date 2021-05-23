/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <CloudDocsDaemon/Swift-Protocol.h>

@class NSOperationQueue, NSString, NSURL;

@protocol NSFileProvider <Swift>

@property (copy, readonly) NSURL *_providedItemsURL;
@property (readonly) NSOperationQueue *_providedItemsOperationQueue;
@property (copy, readonly) NSString *_fileReactorID;

- (unsigned short)_provideItemAtURL:completionHandler: /* Error: Ran out of types for this method. */;

@end
