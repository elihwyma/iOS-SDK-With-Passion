/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

@class NSCache, NSString, NSXPCConnection;

@interface INImageServiceConnection : NSObject

{
    NSXPCConnection *_connection;
    NSCache *_localStorageCache;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *serviceIdentifier;
@property (nonatomic, readonly) unsigned long long servicePriority;

+ (id)sharedConnection;

- (id)init;
- (void)dealloc;
- (id)loadDataImageFromImage:(id)arg1 scaledSize:(CDStruct_8caa76fc)arg2 error:(id *)arg3;
- (id)serviceProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (_Bool)canStoreImage:(id)arg1;
- (void)storeImage:(id)arg1 scaled:(_Bool)arg2 qualityOfService:(unsigned int)arg3 storeType:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)retrieveImageWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)purgeImageWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)storeUserContext:(id)arg1 forBundleIdentifier:(id)arg2;
- (id)_localStorageCache;
- (_Bool)canLoadImageDataForImage:(id)arg1;
- (void)loadDataImageFromImage:(id)arg1 usingPortableImageLoader:(id)arg2 scaledSize:(CDStruct_8caa76fc)arg3 completion:(CDUnknownBlockType)arg4;
- (void)loadImageDataAndSizeForImage:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)synchronousServiceProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_availableBundleIdentifiers;
- (id)schemaURLsForBundleIdentifiers:(id)arg1;
- (id)imageServiceSchemaURLsForBundleIdentifiers:(id)arg1 error:(id *)arg2;
- (id)availableSchemasWithError:(id *)arg1;
- (id)loadSchemasForBundleIdentifiers:(id)arg1 error:(id *)arg2;
- (_Bool)accessBundleContentForBundleIdentifiers:(id)arg1 withBlock:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (id)fetchShareExtensionIntentForExtensionContextUUID:(id)arg1;

@end
