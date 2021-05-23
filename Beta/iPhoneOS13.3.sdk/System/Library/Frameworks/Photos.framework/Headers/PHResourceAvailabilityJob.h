/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <PhotoLibraryServices/PLDaemonJob.h>

@class NSArray, NSMutableArray, NSMutableSet;

@interface PHResourceAvailabilityJob : PLDaemonJob

{
    NSMutableArray *_requests;
    NSArray *_cancelledRequestIdentifiers;
    NSMutableSet *_unsentRequestIdentifiers;
    struct os_unfair_lock_s _lock;
}

- (void)run;
- (id)description;
- (void)addRequest:(id)arg1;
- (id)initWithPhotoLibrary:(id)arg1;
- (void)encodeToXPCObject:(id)arg1;
- (id)initFromXPCObject:(id)arg1 libraryServicesManager:(id)arg2;
- (void)runDaemonSide;
- (long long)daemonOperation;
- (void)setClientConnection:(id)arg1;
- (_Bool)shouldRunOnDaemonSerialQueue;
- (void)cancelAll;

@end
