/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

@class NSManagedObjectID, NSString, NSXPCConnection, PLPhotoLibrary;

@interface PHAvailabilityRequest : NSObject

{
    _Atomic _Bool _isCancelled;
    PLPhotoLibrary *_photoLibrary;
    NSManagedObjectID *_assetObjectID;
    NSString *_taskIdentifier;
    unsigned long long _signpostID;
    NSXPCConnection *_clientConnection;
}

@property (nonatomic, readonly) NSManagedObjectID *assetObjectID;
@property (copy, nonatomic, readonly) NSString *taskIdentifier;
@property (nonatomic) unsigned long long signpostID;
@property (nonatomic, readonly) PLPhotoLibrary *photoLibrary;
@property (retain, nonatomic) NSXPCConnection *clientConnection;

- (id)description;
- (void)cancel;
- (_Bool)isCancelled;
- (void)runDaemonSide;
- (id)initWithPlistDictionary:(id)arg1 photoLibrary:(id)arg2;
- (id)plistDictionary;
- (void)abortClientSide;
- (id)initWithTaskIdentifier:(id)arg1 assetObjectID:(id)arg2;

@end
