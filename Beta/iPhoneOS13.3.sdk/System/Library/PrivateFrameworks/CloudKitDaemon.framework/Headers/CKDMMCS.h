/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class CKDAssetCache, CKDClientContext, CKDMMCSEngineContext, NSString;

__attribute__((visibility("hidden")))
@interface CKDMMCS : NSObject

{
    _Bool _didDrop;
    NSString *_path;
    CKDAssetCache *_assetCache;
    CKDClientContext *_clientContext;
    long long _checkoutCount;
    CKDMMCSEngineContext *_MMCSEngineContext;
}

@property (nonatomic) _Bool didDrop;
@property (nonatomic) long long checkoutCount;
@property (retain, nonatomic) CKDMMCSEngineContext *MMCSEngineContext;
@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) CKDAssetCache *assetCache;
@property (weak, nonatomic) CKDClientContext *clientContext;
@property (nonatomic, readonly, getter=getMaxChunkCountForSection) unsigned int maxChunkCountForSection;

+ (id)protocolVersion;
+ (id)MMCSWrapperForApplicationBundleID:(id)arg1 assetDirectoryContext:(id)arg2 isUTAccount:(_Bool)arg3 error:(id *)arg4;
+ (id)protocolHeaders;
+ (id)zeroSizeFileSignature;
+ (id)sharedWrappersByPath;
+ (long long)_commonErrorCodeWithMMCSError:(id)arg1;
+ (long long)_errorCodeWithMMCSPutError:(id)arg1;
+ (long long)_errorCodeWithMMCSGetError:(id)arg1;
+ (long long)_errorCodeWithMMCSRegisterError:(id)arg1;
+ (id)_userInfoFromMMCSRetryableError:(id)arg1;
+ (id)_errorWithMMCSError:(id)arg1 path:(id)arg2 description:(id)arg3 operationType:(long long)arg4;
+ (void)purgeMMCSDirectoryWithPath:(id)arg1;
+ (id)_errorWithMMCSError:(id)arg1 description:(id)arg2 operationType:(long long)arg3;
+ (id)sharedMMCSItemReaders;
+ (id)sharedItemIDs;
+ (void)startTrackingMMCSItemReader:(id)arg1;
+ (void)stopTrackingMMCSItemReader:(id)arg1;
+ (void)startTrackingItemIDsForMMCSItems:(id)arg1;
+ (void)stopTrackingItemIDsForMMCSItems:(id)arg1;
+ (_Bool)isTrackingItemID:(unsigned long long)arg1;

- (void)dealloc;
- (id)CKStatusReportArray;
- (void)drop;
- (id)getSectionItem:(id)arg1 operation:(id)arg2 options:(id)arg3 progress:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)getItemGroupSet:(id)arg1 operation:(id)arg2 shouldFetchAssetContentInMemory:(_Bool)arg3 options:(id)arg4 progress:(CDUnknownBlockType)arg5 command:(CDUnknownBlockType)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (id)registerItemGroupSet:(id)arg1 operation:(id)arg2 options:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)getChunkKeysItemGroupSet:(id)arg1 operation:(id)arg2 options:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)putSectionItem:(id)arg1 operation:(id)arg2 options:(id)arg3 progress:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)putItemGroupSet:(id)arg1 operation:(id)arg2 options:(id)arg3 progress:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)putChunkKeysItemGroupSet:(id)arg1 operation:(id)arg2 options:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)initWithMMCSEngineContext:(id)arg1 path:(id)arg2;
- (id)_referenceIdentifierFromAssetKey:(id)arg1;
- (struct _mmcs_engine *)getMMCSEngine;
- (id)_contextToRegisterItemGroup:(id)arg1 operation:(id)arg2 options:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_logMMCSOptions:(id)arg1;
- (id)_contextToGetOrPutChunkKeysItemGroup:(id)arg1 operation:(id)arg2 options:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)_contextToGetItemGroup:(id)arg1 operation:(id)arg2 options:(id)arg3 progress:(CDUnknownBlockType)arg4 command:(CDUnknownBlockType)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (id)_contextToPutItemGroup:(id)arg1 operation:(id)arg2 options:(id)arg3 progress:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)performOnRunLoop:(CDUnknownBlockType)arg1;
- (_Bool)registeredItemCount:(unsigned long long *)arg1 error:(id *)arg2;
- (_Bool)_getRegisteredItemsGreaterThan:(unsigned long long)arg1 itemIds:(unsigned long long *)arg2 itemCount:(unsigned long long *)arg3 error:(id *)arg4;
- (void)_unregisterItemIDs:(id)arg1;
- (id)_contextToPutSectionItem:(id)arg1 operation:(id)arg2 options:(id)arg3 progress:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)_contextToGetSectionItem:(id)arg1 operation:(id)arg2 options:(id)arg3 progress:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)showRegisteredItems;
- (void)unregisterItemIDs:(id)arg1;
- (void)unregisterItemIDs:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end
