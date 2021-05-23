/*
 Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, TransparencyManagedDataStore;

@interface KTPublicKeyStore : NSObject

{
    _Bool _forceRefresh;
    NSDictionary *_applicationKeyStores;
    NSArray *_applications;
    TransparencyManagedDataStore *_dataStore;
}

@property (retain) NSDictionary *applicationKeyStores;
@property (retain) NSArray *applications;
@property _Bool forceRefresh;
@property (retain) TransparencyManagedDataStore *dataStore;
@property (readonly) _Bool ready;

- (id)initWithDataStore:(id)arg1;
- (void)configureWithClient:(id)arg1 ignoreCachedKeys:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)clearApplicationState:(id)arg1 error:(id *)arg2;
- (void)configureWithClient:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)configureWithDisk:(id *)arg1;
- (id)copyKeyStoreState;
- (id)copyMetadata;
- (id)readPublicKeyStoreFromDisk:(id *)arg1;
- (_Bool)writePublicKeyStoreToDisk:(id)arg1 error:(id *)arg2;
- (id)createApplicationKeyStore:(id)arg1 keyStoreResponse:(id)arg2 error:(id *)arg3;
- (_Bool)saveDiskApplicationKeyStore:(id)arg1 error:(id *)arg2;
- (void)fetchKeyStore:(id)arg1 application:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)createApplicationKeyStore:(id)arg1 keyStoreData:(id)arg2 error:(id *)arg3;
- (_Bool)clearDiskApplicationKeyStore:(id)arg1 error:(id *)arg2;
- (_Bool)hasApplicationPublicKeyStoreOnDisk:(id)arg1 error:(id *)arg2;

@end
