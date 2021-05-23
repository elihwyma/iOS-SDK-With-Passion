/*
 Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import <Foundation/NSObject.h>

@class CUICommonAssetStorage, NSCache, NSMutableDictionary, NSString;

@interface CUIStructuredThemeStore : NSObject

{
    NSMutableDictionary *_cache;
    CUICommonAssetStorage *_store;
    struct os_unfair_lock_s _cacheLock;
    struct os_unfair_lock_s _storeLock;
    unsigned long long _themeIndex;
    NSString *_bundleID;
    NSCache *_namedRenditionKeyCache;
    CDUnknownFunctionPointerType _attributePresent;
}

@property (nonatomic) unsigned long long themeIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (id)initWithPath:(id)arg1;
- (id)localizations;
- (id)bundleID;
- (id)store;
- (void)_commonInit;
- (id)imagesWithName:(id)arg1;
- (id)allImageNames;
- (_Bool)assetExistsForKey:(struct _renditionkeytoken *)arg1;
- (id)renditionWithKey:(const struct _renditionkeytoken *)arg1;
- (const struct _renditionkeyfmt *)keyFormat;
- (id)renditionNameForKeyList:(struct _renditionkeytoken *)arg1;
- (unsigned long long)colorSpaceID;
- (unsigned int)distilledInCoreUIVersion;
- (const struct _renditionkeytoken *)renditionKeyForName:(id)arg1;
- (_Bool)canGetRenditionWithKey:(const struct _renditionkeytoken *)arg1;
- (id)copyKeySignatureForKey:(const struct _renditionkeytoken *)arg1 withBytesNoCopy:(char *)arg2 length:(unsigned long long)arg3;
- (id)renditionWithKey:(const struct _renditionkeytoken *)arg1 usingKeySignature:(id)arg2;
- (id)defaultAppearanceName;
- (void)clearRenditionCache;
- (long long)maximumRenditionKeyTokenCount;
- (_Bool)usesCUISystemThemeRenditionKey;
- (const struct _renditionkeytoken *)renditionKeyForName:(id)arg1 cursorHotSpot:(struct CGPoint *)arg2;
- (_Bool)canGetRenditionWithKey:(const struct _renditionkeytoken *)arg1 isFPO:(_Bool *)arg2;
- (id)renditionInfoForIdentifier:(unsigned short)arg1;
- (unsigned short)appearanceIdentifierForName:(id)arg1;
- (id)nameForAppearanceIdentifier:(unsigned short)arg1;
- (id)appearances;
- (id)debugDescriptionForKeyList:(const struct _renditionkeytoken *)arg1;
- (_Bool)getFontName:(id *)arg1 baselineOffset:(double *)arg2 forFontType:(id)arg3;
- (double)fontSizeForFontSizeType:(id)arg1;
- (unsigned short)localizationIdentifierForName:(id)arg1;
- (id)copyLookupKeySignatureForKey:(const struct _renditionkeytoken *)arg1;
- (_Bool)_formatStorageKeyArrayBytes:(void *)arg1 length:(unsigned long long)arg2 fromKey:(struct _renditionkeytoken *)arg3;
- (void)_updateKeyWithCompatibilityMapping:(struct _renditionkeytoken *)arg1;
- (id)_newRenditionKeyDataFromKey:(struct _renditionkeytoken *)arg1;
- (const struct _renditionkeyfmt *)renditionKeyFormat;
- (id)lookupAssetForKey:(struct _renditionkeytoken *)arg1;
- (void)_getKeyForAssetClosestToKey:(struct _renditionkeytoken *)arg1 foundAsset:(_Bool *)arg2;
- (_Bool)_canGetRenditionWithKey:(const struct _renditionkeytoken *)arg1 isFPO:(_Bool *)arg2 lookForSubstitutions:(_Bool)arg3;
- (id)themeStore;
- (_Bool)getPhysicalColor:(struct _colordef *)arg1 withName:(id)arg2;
- (_Bool)hasPhysicalColorWithName:(id)arg1;
- (unsigned int)documentFormatVersion;
- (unsigned int)authoredWithSchemaVersion;
- (id)catalogGlobals;
- (id)baseGradationKeySignatureForKey:(const struct _renditionkeytoken *)arg1;
- (id)keySignatureForKey:(const struct _renditionkeytoken *)arg1;
- (id)convertRenditionKeyToKeyData:(struct _renditionkeytoken *)arg1;

@end
