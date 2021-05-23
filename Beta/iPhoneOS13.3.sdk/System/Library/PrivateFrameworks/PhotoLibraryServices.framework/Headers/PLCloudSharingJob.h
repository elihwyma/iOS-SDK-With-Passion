/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLDaemonJob.h>

@class NSString, PLPhotoLibrary;

@interface PLCloudSharingJob : PLDaemonJob

{
    NSString *_archiveFilename;
    _Bool _shouldPrioritize;
}

@property (nonatomic, readonly) PLPhotoLibrary *transientPhotoLibrary;
@property (nonatomic) _Bool shouldPrioritize;

+ (id)recoveredEventsWithPathManager:(id)arg1;

- (id)initWithAssetsdClient:(id)arg1;
- (id)initFromXPCObject:(id)arg1 libraryServicesManager:(id)arg2;
- (void)runDaemonSide;
- (_Bool)shouldArchiveXPCToDisk;
- (void)archiveXPCToDisk:(id)arg1;
- (id)serialOperationQueue;
- (void)deleteAllRecoveryEvents;
- (void)runAndWaitForMessageToBeSent;

@end
