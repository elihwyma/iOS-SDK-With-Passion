/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLAbstractLibraryServicesManagerService.h>

@class NSString;

@interface PLAssetsdDiagnosticsService : PLAbstractLibraryServicesManagerService

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dumpStatusIncludingDaemon:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;
- (void)dumpPhotoAnalysisStatusWithReply:(CDUnknownBlockType)arg1;
- (void)incompleteRestoreProcessesWithReply:(CDUnknownBlockType)arg1;
- (void)getPhotosXPCEndpointWithReply:(CDUnknownBlockType)arg1;
- (void)setPhotosXPCEndpoint:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)initializeSharedMemoryForDeferredLogs:(id)arg1;

@end
