/*
 Image: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
 */

#import <BookLibrary/Swift-Protocol.h>

@class NSArray;

@protocol SSBookDownloadQueue <Swift>

@property (nonatomic, readonly) NSArray *downloads;

+ (unsigned short)sharedInstance;

- (unsigned short)addObserver: /* Error: Ran out of types for this method. */;
- (unsigned short)removeObserver: /* Error: Ran out of types for this method. */;
- (unsigned short)cancelDownloadWithID:withCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)pauseDownloadWithID:withCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)resumeDownloadWithID:withCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)addDownloadWithPurchaseParameters:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)addDownloadWithPermlink:title:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)addDownloadWithMetadata:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)addRestoreDownloadWithMetadata:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)cancelAllActiveDownloadsWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)addDownloadsWithMetadata:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)addRestoreDownloadsWithMetadata:completion: /* Error: Ran out of types for this method. */;

@end
