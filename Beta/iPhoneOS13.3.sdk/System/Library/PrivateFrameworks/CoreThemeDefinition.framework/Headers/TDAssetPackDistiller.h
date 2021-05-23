/*
 Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

#import <CoreThemeDefinition/TDDistiller.h>

@class NSSet;

@interface TDAssetPackDistiller : TDDistiller

{
    NSSet *assetPackMap;
}

@property (retain, nonatomic) NSSet *assetPackMap;

- (void)dealloc;
- (id)assetPackForTags:(id)arg1;
- (void)removeRenditionsFromAssetStoreWithKey:(id)arg1;
- (void)setAssetStoreRenditionCount:(unsigned int)arg1;
- (void)setAssetStoreUuid:(id)arg1;
- (void)setAssetStoreAssociatedChecksum:(unsigned int)arg1;
- (void)setAssetStoreKeyFormatData:(id)arg1;
- (void)setAssetStoreKeySemantics:(int)arg1;
- (void)setAssetStorageVersion:(unsigned int)arg1;
- (void)setAssetStorageVersionString:(const char *)arg1;
- (void)setAssetSchemaVersion:(unsigned int)arg1;
- (void)setAssetColorSpaceID:(unsigned int)arg1;
- (_Bool)assetStoreWriteToDisk;
- (id)initWithDocument:(id)arg1 outputPath:(id)arg2 versionString:(id)arg3 usingAssetPackMapping:(id)arg4 attemptIncremental:(_Bool)arg5;
- (_Bool)_storeRenditions;

@end
