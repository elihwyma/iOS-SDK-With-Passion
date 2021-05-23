/*
 Image: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
 */

#import <Foundation/NSObject.h>

@class CUICatalog, ISImageBag, NSString;

@interface ISAssetCatalogResource : NSObject

{
    ISImageBag *_imageBag;
    CUICatalog *_catalog;
    NSString *_imageName;
    NSString *_symbolName;
}

@property (readonly) CUICatalog *catalog;
@property (readonly) ISImageBag *imageBag;
@property (readonly) NSString *imageName;
@property (readonly) NSString *symbolName;
@property (readonly, getter=isPrecomposed) _Bool precomposed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)assetCatalogResourceWithURL:(id)arg1 imageName:(id)arg2 symbolName:(id)arg3 error:(id *)arg4;
+ (id)coreGlyphsCatalog;
+ (id)assetCatalogResourceWithURL:(id)arg1 imageName:(id)arg2 error:(id *)arg3;
+ (id)assetCatalogResourceWithURL:(id)arg1 symbolName:(id)arg2 error:(id *)arg3;

- (id)imageForSize:(struct CGSize)arg1 scale:(double)arg2;
- (id)initWithCatalog:(id)arg1 imageName:(id)arg2 symbolName:(id)arg3;
- (long long)deviceIdiomWithName:(id)arg1;
- (id)imageWithName:(id)arg1 scale:(double)arg2;
- (id)multisizedImageWithName:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3;
- (id)symbolImageForSize:(struct CGSize)arg1 scale:(double)arg2;
- (id)symbolImageForFontSize:(double)arg1 scale:(double)arg2 symbolSize:(unsigned long long)arg3 symbolWeight:(long long)arg4;

@end
