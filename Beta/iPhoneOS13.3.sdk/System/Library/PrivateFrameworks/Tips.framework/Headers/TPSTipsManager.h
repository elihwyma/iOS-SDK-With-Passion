/*
 Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

#import <Foundation/NSObject.h>

@class NSBundle, NSMutableDictionary, NSString, _TPSXPCConnection;

@protocol OS_os_transaction;

@interface TPSTipsManager : NSObject

{
    _TPSXPCConnection *_xpcConnection;
    NSBundle *_frameworkBundle;
    NSObject<OS_os_transaction> *_collectionImageFetchTransaction;
    NSMutableDictionary *_collectionImageDownloadHandlerMap;
    NSMutableDictionary *_collectionImageDownloadTasksMap;
}

@property (retain, nonatomic) NSObject<OS_os_transaction> *collectionImageFetchTransaction;
@property (retain, nonatomic) NSMutableDictionary *collectionImageDownloadHandlerMap;
@property (retain, nonatomic) NSMutableDictionary *collectionImageDownloadTasksMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)defaultManager;

- (id)init;
- (void)dealloc;
- (id)exportedInterface;
- (id)xpcConnection;
- (void)clearCaches;
- (id)imageNamed:(id)arg1;
- (void)connectionInvalidated;
- (void)connectionInterrupted;
- (id)remoteInterface;
- (void)_destroyXPCConnection;
- (void)activateCollectionIdentifier:(id)arg1 context:(id)arg2;
- (id)localizedStringForKey:(id)arg1 localizedStringsFileName:(id)arg2;
- (id)modelWithSeparator:(id)arg1;
- (id)cacheDirectoryCreateIfEmpty:(_Bool)arg1;
- (id)collectionImageNameWithCollectionIdentifier:(id)arg1;
- (id)cachePathForCollectionIdentifier:(id)arg1;
- (id)cacheCollectionImageFileURLForCollectionIdentifier:(id)arg1;
- (id)welcomeInformationWithUserType:(long long)arg1;
- (void)collectionImageForCollectionIdentifier:(id)arg1 path:(id)arg2 fetchIfNeeded:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end
