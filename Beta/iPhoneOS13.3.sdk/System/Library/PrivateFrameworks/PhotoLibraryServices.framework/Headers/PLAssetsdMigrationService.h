/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLAbstractLibraryServicesManagerService.h>

@class NSObject, NSString;

@protocol OS_dispatch_queue;

@interface PLAssetsdMigrationService : PLAbstractLibraryServicesManagerService

{
    NSObject<OS_dispatch_queue> *_backgroundQueue;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *backgroundQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithLibraryServicesManager:(id)arg1;
- (void)cleanupModelForDataMigrationForRestoreType:(long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)dataMigrationWillFinishWithReply:(CDUnknownBlockType)arg1;
- (void)moveiPhotoLibraryMediaWithReply:(CDUnknownBlockType)arg1;

@end
