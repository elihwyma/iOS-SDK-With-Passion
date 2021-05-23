/*
 Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

#import <Foundation/NSObject.h>

@class PLAssetsdClientXPCConnection, PLAssetsdDemoClient, PLAssetsdLibraryManagementClient, PLAssetsdSystemLibraryURLReadOnlyClient;

@protocol OS_dispatch_queue;

@interface PLNonBindingAssetsdClient : NSObject

{
    PLAssetsdClientXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    PLAssetsdSystemLibraryURLReadOnlyClient *_systemLibraryURLReadOnlyClient;
    PLAssetsdLibraryManagementClient *_libraryManagementClient;
    PLAssetsdDemoClient *_demoClient;
}

@property (readonly) PLAssetsdSystemLibraryURLReadOnlyClient *systemLibraryURLReadOnlyClient;
@property (readonly) PLAssetsdLibraryManagementClient *libraryManagementClient;
@property (readonly) PLAssetsdDemoClient *demoClient;

- (id)init;
- (void)_updateLibraryStateConnectionInterrupted:(id)arg1;

@end
