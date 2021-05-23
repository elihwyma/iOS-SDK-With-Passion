/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class CUINamedLayerStack, NSBundle, NSString, UITraitCollection, _UIAssetManager;

@interface UIImageAsset : NSObject <Swift>

{
    _UIAssetManager *_assetManager;
    NSBundle *_containingBundle;
    _Bool _cacheContents;
    UITraitCollection *_defaultTraitCollection;
    struct {
        unsigned int hasRegisteredImages:1;
        unsigned int supportsBlockGeneration:1;
        unsigned int disconnectedFromAssetManager:1;
    } _assetFlags;
    CUINamedLayerStack *_layerStack;
    id _unpinObserver;
    CDUnknownBlockType _rebuildStackImage;
    CDUnknownBlockType _creationBlock;
    NSString *_assetName;
}

@property (copy, nonatomic) CDUnknownBlockType creationBlock;
@property (weak, nonatomic, setter=_setUnpinObserver:) id _unpinObserver;
@property (copy, nonatomic) NSString *assetName;
@property (weak, nonatomic, readonly) _UIAssetManager *_assetManager;
@property (nonatomic, readonly) UITraitCollection *_defaultTraitCollection;
@property (copy, nonatomic, setter=_setRebuildStackImage:) CDUnknownBlockType _rebuildStackImage;
@property (retain, nonatomic, setter=_setLayerStack:) CUINamedLayerStack *_layerStack;

+ (_Bool)supportsSecureCoding;
+ (id)_dynamicAssetNamed:(id)arg1 generator:(CDUnknownBlockType)arg2;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)imageWithConfiguration:(id)arg1;
- (id)imageWithTraitCollection:(id)arg1;
- (void)_registerImage:(id)arg1 withConfiguration:(id)arg2;
- (id)_initWithAssetName:(id)arg1 forManager:(id)arg2;
- (id)_mutableCatalog;
- (id)_nameForStoringRuntimeRegisteredImagesInMutableCatalog;
- (id)_lookUpRegisteredObjectForTraitCollection:(id)arg1 withAccessorWithAppearanceName:(CDUnknownBlockType)arg2;
- (id)_updateAssetFromBlockGenerationWithConfiguration:(id)arg1 resolvedCatalogImage:(id)arg2;
- (id)_registeredAppearanceNames;
- (id)_renditionCache:(_Bool)arg1;
- (id)_initWithAssetName:(id)arg1 forFilesInBundle:(id)arg2;
- (id)_symbolConfiguration;
- (void)registerImage:(id)arg1 withTraitCollection:(id)arg2;
- (void)registerImage:(id)arg1 withConfiguration:(id)arg2;
- (void)unregisterImageWithConfiguration:(id)arg1;
- (void)unregisterImageWithTraitCollection:(id)arg1;
- (void)_registerImage:(id)arg1 withTraitCollection:(id)arg2;
- (void)_clearResolvedImageResources;
- (_Bool)_containsImagesInPath:(id)arg1;
- (void)_disconnectFromAssetManager;
- (void)_cacheRendition:(id)arg1 forSize:(struct CGSize)arg2 tintColor:(id)arg3 traitCollection:(id)arg4 bold:(_Bool)arg5 letterpress:(_Bool)arg6 drawMode:(unsigned int)arg7;
- (id)_cachedRenditionWithSize:(struct CGSize)arg1 tintColor:(id)arg2 traitCollection:(id)arg3 bold:(_Bool)arg4 letterpress:(_Bool)arg5 drawMode:(unsigned int)arg6;

@end
