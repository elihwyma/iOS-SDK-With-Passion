/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableSet, NSString, NSXPCListener, PLBackgroundJobService, PLDistributedNotificationHandler, PLPhotoLibraryBundleController, PLXPCMessageLogger;

@interface PLAssetsdServer : NSObject

{
    NSXPCListener *_listener;
    PLXPCMessageLogger *_connectionLogger;
    struct os_unfair_lock_s _servicesLock;
    NSMutableSet *_services;
    PLPhotoLibraryBundleController *_libraryBundleController;
    PLBackgroundJobService *_backgroundJobService;
    PLDistributedNotificationHandler *_distributedNotificationHandler;
    NSArray *_previewRenderedContentURLs;
    NSArray *_previewAssetLocalIdentifiers;
}

@property (nonatomic, readonly) unsigned long long previewRenderedContentURLCount;
@property (retain, nonatomic) NSArray *previewAssetLocalIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedServer;

- (id)init;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)start;
- (void)handleInterruption:(id)arg1;
- (void)logStatus;
- (void)_checkInWithLaunchd;
- (void)addService:(id)arg1;
- (void)removeService:(id)arg1;
- (void)handleInvalidation:(id)arg1;
- (void)setPreviewRenderedContentURLs:(id)arg1;
- (id)previewRenderedContentURLAtIndex:(unsigned long long)arg1;

@end
