/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/Swift-Protocol.h>

@protocol CPLResourceProgressDelegate <Swift>

- (unsigned short)libraryManager:downloadDidStartForResourceTransferTask: /* Error: Ran out of types for this method. */;
- (unsigned short)libraryManager:downloadDidFinishForResourceTransferTask:withError: /* Error: Ran out of types for this method. */;
- (unsigned short)libraryManager:inMemoryDownloadDidFinishForResourceTransferTask:data:withError: /* Error: Ran out of types for this method. */;
- (unsigned short)libraryManager:backgroundDownloadDidFinishForResource: /* Error: Ran out of types for this method. */;
- (unsigned short)libraryManager:uploadDidStartForResourceTransferTask: /* Error: Ran out of types for this method. */;
- (unsigned short)libraryManager:uploadDidFinishForResourceTransferTask:withError: /* Error: Ran out of types for this method. */;

@end
