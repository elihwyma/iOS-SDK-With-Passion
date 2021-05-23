/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class CUICatalog, CUIMutableCatalog, NSBundle, NSDictionary, NSMapTable, NSString, UITraitCollection, _UICache;

@interface _UIAssetManager : NSObject

{
    _UICache *_imageCache;
    CUICatalog *_catalog;
    NSString *_assetManagerName;
    long long _preferredIdiom;
    double _preferredScale;
    unsigned long long _preferredIdiomSubtype;
    long long _preferredGamut;
    long long _preferredLayoutDirectionTrait;
    NSBundle *_bundle;
    NSMapTable *_assetMap;
    NSDictionary *_systemSymbolNameAliases;
    CUIMutableCatalog *_runtimeCatalog;
    struct os_unfair_lock_s _runtimeCatalogCreationLock;
    UITraitCollection *_preferredTraitCollection;
    struct os_unfair_lock_s _assetMapLock;
    struct {
        unsigned int isStarkAssetManager:1;
        unsigned int isStandaloneAssetManager:1;
        unsigned int isUIKitAssetsManager:1;
        unsigned int isCoreGlyphsManager:1;
    } _assetManagerFlags;
    _UIAssetManager *_nextAssetManager;
}

@property (retain, nonatomic) _UIAssetManager *nextAssetManager;
@property (nonatomic) double preferredScale;
@property (retain, nonatomic) UITraitCollection *preferredTraitCollection;
@property (nonatomic, readonly) NSString *carFileName;
@property (nonatomic, readonly) CUIMutableCatalog *runtimeCatalog;
@property (nonatomic, readonly) NSBundle *bundle;
@property (nonatomic, readonly, getter=_managingUIKitAssets) _Bool managingUIKitAssets;
@property (nonatomic, readonly, getter=_managingCoreGlyphs) _Bool managingCoreGlyphs;

+ (id)assetManagerForBundle:(id)arg1;
+ (id)newAssetNamed:(id)arg1 fromBundle:(id)arg2;
+ (void)_dropResourceReferencesForURL:(id)arg1;
+ (_Bool)validStackImageFile:(id)arg1;
+ (_Bool)_validStackImageData:(id)arg1;
+ (long long)_userInterfaceIdiomForDeviceClass:(unsigned long long)arg1;
+ (void)_convertTraitCollection:(id)arg1 toCUIScale:(double *)arg2 CUIIdiom:(long long *)arg3 UIKitIdiom:(long long *)arg4 UIKitUserInterfaceStyle:(long long *)arg5 subtype:(unsigned long long *)arg6 CUIDisplayGamut:(long long *)arg7 UIKitLayoutDirection:(long long *)arg8 CUILayoutDirection:(unsigned long long *)arg9;
+ (id)sharedRuntimeCatalog;
+ (void)_saveAssetManager:(id)arg1 forBundle:(id)arg2 lock:(_Bool)arg3;
+ (id)_assetManagerCache;
+ (id)sharedRuntimeAssetMap;
+ (id)_sharedRuntimeAssetMapKeyForAssetName:(id)arg1 inAssetManager:(id)arg2;
+ (id)_sharedRuntimeAssetMapKeyForAssetName:(id)arg1 fromFilesInBundle:(id)arg2;
+ (void)_executeUnitTestWithAssetManagerCache:(CDUnknownBlockType)arg1;
+ (void)clearSharedRuntimeAssetMapForUnitTests;
+ (void)_clearAllCachedImagesAndAssets;
+ (double)_watchScreenScale;

- (void)dealloc;
- (id)description;
- (id)_catalog;
- (id)dataNamed:(id)arg1;
- (id)colorNamed:(id)arg1 withTraitCollection:(id)arg2;
- (id)resolvedColorNamed:(id)arg1 withTraitCollection:(id)arg2;
- (id)initWithName:(id)arg1 inBundle:(id)arg2 idiom:(long long)arg3;
- (id)initManagerWithoutCatalogWithName:(id)arg1;
- (id)imageNamed:(id)arg1 configuration:(id)arg2;
- (id)imageNamed:(id)arg1;
- (id)_allImageNames;
- (id)stackImageWithContentsOfFile:(id)arg1 forTraitCollection:(id)arg2;
- (id)stackImageWithData:(id)arg1 forTraitCollection:(id)arg2;
- (id)_assetFromMapForName:(id)arg1;
- (id)_insertAssetIntoMap:(id)arg1 forName:(id)arg2;
- (id)imageNamed:(id)arg1 configuration:(id)arg2 cachingOptions:(unsigned long long)arg3 attachCatalogImage:(_Bool)arg4;
- (id)_initWithName:(id)arg1 inBundle:(id)arg2 idiom:(long long)arg3 lock:(_Bool)arg4 allowMissingCatalog:(_Bool)arg5;
- (void)_clearCachedResources:(id)arg1;
- (void)_disconnectImageAssets;
- (void)disableCacheFlushing;
- (id)_starkAssetManager;
- (id)_symbolNameAliasForName:(id)arg1;
- (id)_assetForName:(id)arg1;
- (id)_lookUpObjectForTraitCollection:(id)arg1 withAccessorWithAppearanceName:(CDUnknownBlockType)arg2;
- (_Bool)_isSystemAssetManager;
- (id)imageNamed:(id)arg1 scale:(double)arg2 idiom:(long long)arg3 subtype:(unsigned long long)arg4;
- (id)imageNamed:(id)arg1 idiom:(long long)arg2 subtype:(unsigned long long)arg3;
- (id)imageNamed:(id)arg1 idiom:(long long)arg2;
- (_Bool)_hasMultipleAppearances;
- (id)_assetFromMapForName:(id)arg1 lock:(_Bool)arg2;
- (void)_performBlockWithAssetLock:(CDUnknownBlockType)arg1;
- (id)_insertAssetIntoMap:(id)arg1 forName:(id)arg2 lock:(_Bool)arg3;
- (void)_clearCachedResources;
- (_Bool)_imageBelongsToUIKit:(id)arg1;
- (_Bool)_imageBelongsToCoreGlyphs:(id)arg1;
- (id)_defaultAppearanceNames;
- (id)_appearanceNames;
- (id)_translateAppearanceNameToNative:(id)arg1;
- (id)initWithURL:(id)arg1 idiom:(long long)arg2 error:(id *)arg3;
- (id)imageNamed:(id)arg1 withTrait:(id)arg2;
- (_Bool)_imageIsSystemImage:(id)arg1;

@end
