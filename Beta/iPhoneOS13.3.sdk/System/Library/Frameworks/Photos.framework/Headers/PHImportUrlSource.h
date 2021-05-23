/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Photos/PHImportSource.h>

@class NSArray, NSMutableDictionary, NSObject, NSString;

@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface PHImportUrlSource : PHImportSource

{
    NSObject<OS_dispatch_queue> *_pendingAssetDataRequestQueue;
    NSObject<OS_dispatch_queue> *_activeAssetDataRequestQueue;
    NSObject<OS_dispatch_semaphore> *_concurrentAssetDataRequestSemaphore;
    _Bool _isReadonlyVolume;
    NSString *_prefix;
    NSArray *_urls;
    NSMutableDictionary *_pathsByFileBaseName;
    NSArray *_baseNames;
    NSObject<OS_dispatch_queue> *_pathsByFileBaseNameAccess;
}

@property (retain, nonatomic) NSArray *urls;
@property (nonatomic) _Bool isReadonlyVolume;
@property (retain, nonatomic) NSMutableDictionary *pathsByFileBaseName;
@property (retain, nonatomic) NSArray *baseNames;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *pathsByFileBaseNameAccess;

+ (_Bool)treatAsReadonlyVolume:(id)arg1;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)name;
- (id)path;
- (_Bool)isAvailable;
- (id)prefix;
- (void)setPrefix:(id)arg1;
- (id)volumePath;
- (id)productKind;
- (_Bool)canReference;
- (id)initWithUrls:(id)arg1;
- (_Bool)isEqualToImportUrlSource:(id)arg1;
- (void)beginWork;
- (id)assetsByProcessingItem:(id)arg1;
- (void)endWork;
- (void)dispatchAssetDataRequestAsync:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)rootUrlOfUrls:(id)arg1;

@end
