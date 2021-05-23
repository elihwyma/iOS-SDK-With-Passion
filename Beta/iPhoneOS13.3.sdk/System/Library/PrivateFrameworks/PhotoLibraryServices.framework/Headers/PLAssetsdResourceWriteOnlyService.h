/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLAbstractLibraryServicesManagerService.h>

#import <PhotoLibraryServices/Swift-Protocol.h>

@class NSString;

@interface PLAssetsdResourceWriteOnlyService : PLAbstractLibraryServicesManagerService <Swift>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)saveAssetWithDataAndPorts:(id)arg1 imageSurface:(id)arg2 previewImageSurface:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)saveAssetWithDataAndPorts:(id)arg1 clientConnection:(id)arg2 imageSurface:(id)arg3 previewImageSurface:(id)arg4 reply:(CDUnknownBlockType)arg5;

@end
