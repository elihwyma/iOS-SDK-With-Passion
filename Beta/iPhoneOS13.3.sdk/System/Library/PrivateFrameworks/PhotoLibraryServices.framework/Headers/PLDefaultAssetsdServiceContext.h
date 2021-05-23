/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSError, NSString, NSXPCConnection, PLAssetsdConnectionAuthorization, PLPhotoLibraryBundle;

@interface PLDefaultAssetsdServiceContext : NSObject

{
    SEL _selector;
    NSXPCConnection *_connection;
    PLPhotoLibraryBundle *_libraryBundle;
    PLAssetsdConnectionAuthorization *_connectionAuthorization;
    NSError *_replyWarning;
}

@property (copy, nonatomic) NSError *replyWarning;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool isClientAuthorizedForTCCServicePhotos;
@property (nonatomic, readonly) _Bool isClientAuthorizedForTCCServicePhotosAdd;
@property (copy, nonatomic, readonly) NSString *clientDebugDescription;

- (_Bool)hasEntitlement:(id)arg1;
- (id)libraryServicesManager;
- (void)awaitLibraryState:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithSelector:(SEL)arg1 connection:(id)arg2 libraryBundle:(id)arg3 connectionAuthorization:(id)arg4;

@end
