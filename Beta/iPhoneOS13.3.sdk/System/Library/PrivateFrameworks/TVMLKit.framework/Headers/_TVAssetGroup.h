/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface _TVAssetGroup : NSObject

{
    _Bool _manifestDirty;
    long long _groupType;
    NSString *_cachePath;
    unsigned long long _maxCacheSize;
    unsigned long long _pruneCount;
    unsigned long long _currentCacheSize;
    NSMutableDictionary *_cacheRecords;
    NSMutableDictionary *_assetKeysByTag;
    NSMutableDictionary *_manifest;
}

@property (nonatomic) long long groupType;
@property (retain, nonatomic) NSString *cachePath;
@property (nonatomic) unsigned long long maxCacheSize;
@property (nonatomic) unsigned long long currentCacheSize;
@property (retain, nonatomic) NSMutableDictionary *cacheRecords;
@property (retain, nonatomic) NSMutableDictionary *assetKeysByTag;
@property (retain, nonatomic) NSMutableDictionary *manifest;
@property (nonatomic, getter=isManifestDirty) _Bool manifestDirty;
@property (nonatomic) unsigned long long pruneCount;

+ (id)_humanReadableStringForGroupType:(long long)arg1;

- (id)description;
- (id)initWithGroupType:(long long)arg1 baseCachePath:(id)arg2 folderName:(id)arg3 maxCacheSize:(unsigned long long)arg4 purgeOnLoad:(_Bool)arg5;
- (id)assetInfoForKey:(id)arg1 queue:(id)arg2;
- (id)infoForAllAssetsWithTags:(id)arg1 queue:(id)arg2;
- (void)removeAssetInfoForKey:(id)arg1 queue:(id)arg2;
- (void)setAssetInfo:(id)arg1 forKey:(id)arg2 queue:(id)arg3;
- (void)removeAllAssetsWithQueue:(id)arg1;
- (void)updateAssetsFromFiles;
- (id)infoForAllAssetsWithQueue:(id)arg1;
- (void)_removeAssetInfoForKey:(id)arg1 removeFile:(_Bool)arg2;
- (void)_updateManifestWithChange:(CDUnknownBlockType)arg1;
- (void)_removeAssetInfoForKey:(id)arg1;
- (id)_manifestFilePath;
- (void)_saveManifest;

@end
