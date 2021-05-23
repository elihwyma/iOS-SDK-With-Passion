/*
 Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import <Foundation/NSObject.h>

@class NSData, NSDictionary, NSSet;

@interface CUICommonAssetStorage : NSObject

{
    struct _carheader *_header;
    struct _carextendedMetadata *_extendedMetadata;
    struct _renditionkeyfmt *_keyfmt;
    void *_imagedb;
    void *_colordb;
    void *_fontdb;
    void *_fontsizedb;
    void *_facetKeysdb;
    void *_bitmapKeydb;
    void *_appearancedb;
    void *_localizationdb;
    NSData *_globals;
    unsigned int _swap:1;
    unsigned int _isMemoryMapped:1;
    unsigned int _reserved:30;
    NSSet *_externalTags;
    unsigned short _renditionInfoCacheLookup[20];
    id _renditionInfoCache[20];
    struct os_unfair_lock_s _lock;
    struct os_unfair_lock_s _renditionInfoCacheLock;
    NSDictionary *_appearances;
}

@property (nonatomic) struct _carheader *header;
@property (nonatomic) struct _carextendedMetadata *extendedMetadata;
@property (nonatomic) struct _renditionkeyfmt *keyfmt;
@property (nonatomic) void *imagedb;
@property (nonatomic) void *colordb;
@property (nonatomic) void *fontdb;
@property (nonatomic) void *fontsizedb;
@property (nonatomic) void *facetKeysdb;
@property (nonatomic) void *bitmapKeydb;
@property (nonatomic) void *appearancedb;
@property (nonatomic) void *localizationdb;
@property (retain, nonatomic) NSData *globals;
@property (nonatomic, readonly) NSDictionary *appearances;

+ (_Bool)isValidAssetStorageWithURL:(id)arg1;
+ (_Bool)isValidAssetStorageWithBytes:(const void *)arg1 length:(unsigned long long)arg2;

- (id)initWithBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (void)dealloc;
- (id)description;
- (struct os_unfair_lock_s *)lock;
- (_Bool)enumerateKeysAndObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)path;
- (id)initWithPath:(id)arg1;
- (id)localizations;
- (id)uuid;
- (unsigned int)schemaVersion;
- (const char *)versionString;
- (_Bool)assetExistsForKey:(id)arg1;
- (const struct _renditionkeyfmt *)keyFormat;
- (id)renditionNameForKeyList:(struct _renditionkeytoken *)arg1;
- (unsigned int)colorSpaceID;
- (long long)maximumRenditionKeyTokenCount;
- (_Bool)usesCUISystemThemeRenditionKey;
- (id)renditionInfoForIdentifier:(unsigned short)arg1;
- (unsigned short)appearanceIdentifierForName:(id)arg1;
- (id)nameForAppearanceIdentifier:(unsigned short)arg1;
- (id)externalTags;
- (id)initWithPath:(id)arg1 forWriting:(_Bool)arg2;
- (_Bool)_commonInitWithStorage:(struct _BOMStorage *)arg1 forWritting:(_Bool)arg2;
- (void)_initDefaultHeaderVersion:(double)arg1 versionString:(const char *)arg2;
- (void)_swapHeader;
- (void)_bringHeaderInfoUpToDate;
- (void)_swapKeyFormat;
- (id)_readAppearances;
- (long long)_storagefileTimestamp;
- (void)_loadExtendedMetadata;
- (_Bool)assetExistsForKeyData:(const void *)arg1 length:(unsigned long long)arg2;
- (id)assetKeysMatchingBlock:(CDUnknownBlockType)arg1;
- (_Bool)swapped;
- (void)_swapRenditionKeyArray:(unsigned short *)arg1;
- (struct os_unfair_lock_s *)renditionInfoCacheLock;
- (struct _renditionkeytoken)_swapRenditionKeyToken:(struct _renditionkeytoken)arg1;
- (const struct FontValue *)_fontValueForFontType:(id)arg1;
- (void)_addBitmapIndexForNameIdentifier:(unsigned short)arg1 attribute:(int)arg2 withValue:(unsigned short)arg3 toDictionary:(id)arg4;
- (void)_buildBitmapInfoIntoDictionary:(id)arg1;
- (struct _BOMStorage *)_bomStorage;
- (id)deploymentPlatform;
- (id)deploymentPlatformVersion;
- (void)setExternalTags:(id)arg1;
- (unsigned int)storageVersion;
- (unsigned int)coreuiVersion;
- (long long)storageTimestamp;
- (int)keySemantics;
- (id)keyFormatData;
- (id)catalogGlobalData;
- (const char *)mainVersionString;
- (unsigned int)renditionCount;
- (unsigned int)associatedChecksum;
- (id)thinningArguments;
- (id)authoringTool;
- (id)assetForKey:(id)arg1;
- (id)allAssetKeys;
- (void)enumerateKeysAndObjectsWithoutIgnoringUsingBlock:(CDUnknownBlockType)arg1;
- (const struct _renditionkeytoken *)renditionKeyForName:(const char *)arg1 hotSpot:(struct CGPoint *)arg2;
- (id)allRenditionNames;
- (id)renditionNamesWithKeys;
- (id)renditionNameForKeyBaseList:(struct _renditionkeytoken *)arg1;
- (_Bool)getColor:(struct _colordef *)arg1 forName:(const char *)arg2;
- (_Bool)hasColorForName:(const char *)arg1;
- (_Bool)getFontName:(id *)arg1 baselineOffset:(float *)arg2 forFontType:(id)arg3;
- (_Bool)getBaselineOffset:(float *)arg1 forFontType:(id)arg2;
- (float)fontSizeForFontSizeType:(id)arg1;
- (void)enumerateBitmapIndexUsingBlock:(CDUnknownBlockType)arg1;
- (int)validateBitmapInfo;
- (int)validatekeyformat;
- (unsigned short)localizationIdentifierForName:(id)arg1;
- (id)nameForLocalizationIdentifier:(unsigned short)arg1;

@end
