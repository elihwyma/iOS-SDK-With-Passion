/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSOperation.h>

@class NSError, NSManagedObjectID, NSObject, NSString, PLPhotoLibrary;

@protocol OS_dispatch_queue;

@interface PLAssetResourceDownloadRequest : NSOperation

{
    NSObject<OS_dispatch_queue> *_queue;
    PLPhotoLibrary *_library;
    CDUnknownBlockType _progressHandler;
    NSString *_assetUUID;
    int _requestID;
    NSManagedObjectID *_objectID;
    unsigned long long _cloudResourceType;
    NSString *_cplTaskIdentifier;
    NSError *_error;
}

@property (nonatomic, readonly) int requestID;
@property (nonatomic, readonly) NSManagedObjectID *objectID;
@property (nonatomic, readonly) unsigned long long cloudResourceType;
@property (nonatomic, readonly) NSString *cplTaskIdentifier;
@property (nonatomic, readonly) NSError *error;

- (void)cancel;
- (void)main;
- (void)_onQueueAsync:(CDUnknownBlockType)arg1;
- (id)initWithRequestID:(int)arg1 library:(id)arg2 queue:(id)arg3 cloudResourceType:(unsigned long long)arg4 managedObjectID:(id)arg5 progressHandler:(CDUnknownBlockType)arg6;

@end
