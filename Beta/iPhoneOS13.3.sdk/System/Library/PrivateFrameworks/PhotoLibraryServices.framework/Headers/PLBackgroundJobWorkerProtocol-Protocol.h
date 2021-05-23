/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/Swift-Protocol.h>

@protocol PLBackgroundJobWorkerProtocol <Swift>

+ (unsigned short)workerWithLibrary: /* Error: Ran out of types for this method. */;

- (unsigned short)hasPendingJobs;
- (unsigned short)managedObjectIDsNeedingProcessing;
- (unsigned short)performWorkOnManagedObjectID:completion: /* Error: Ran out of types for this method. */;

@end
