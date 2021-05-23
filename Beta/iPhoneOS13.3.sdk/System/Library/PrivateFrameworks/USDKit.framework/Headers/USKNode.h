/*
 Image: /System/Library/PrivateFrameworks/USDKit.framework/USDKit
 */

#import <USDKit/USKObject.h>

@class NSDictionary, NSString, USKToken;

@interface USKNode : USKObject

{
    struct UsdPrim _prim;
}

@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) USKToken *typeName;
@property (nonatomic, readonly) NSDictionary *properties;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)name;
- (id)parent;
- (id)path;
- (id)propertyList;
- (id).cxx_construct;
- (id)metadata;
- (id)newPropertyWithName:(id)arg1 type:(id)arg2 role:(id)arg3;
- (_Bool)setMetadataWithKey:(id)arg1 value:(id)arg2;
- (_Bool)setDictionaryMetadataWithKey:(id)arg1 dictionaryKey:(id)arg2 value:(id)arg3;
- (id)property:(id)arg1;
- (id)metadataWithKey:(id)arg1;
- (id)childIterator;
- (id)inheritedSkeletonBinding;
- (id)inheritedMaterialBinding;
- (id)inheritedSkeletonAnimationBinding;
- (id)initWithUsdPrim:(struct UsdPrim)arg1;
- (_Bool)setCustomMetadata:(id)arg1 value:(id)arg2;
- (id)dictionaryMetadataWithKey:(id)arg1 dictionaryKey:(id)arg2;
- (id)customMetadataWithKey:(id)arg1;
- (struct UsdPrim)usdPrim;
- (_Bool)selectVariant:(id)arg1 variantSet:(id)arg2;
- (void)applyType:(id)arg1;
- (void)addReferenceWithURL:(id)arg1 nodePath:(id)arg2;
- (void)addReferenceWithPath:(id)arg1 nodePath:(id)arg2;
- (void)addVariantSet:(id)arg1;
- (void)addVariant:(id)arg1 variantSet:(id)arg2;
- (_Bool)hasVariantSets;
- (_Bool)hasVariantSet:(id)arg1;
- (id)variantSets;
- (id)variantsWithVariantSet:(id)arg1;
- (_Bool)editVariant:(id)arg1 variantSet:(id)arg2 block:(CDUnknownBlockType)arg3;
- (id)inheritedProperty:(id)arg1;
- (_Bool)isInstanceNode;
- (id)masterNode;
- (id)newCustomPropertyWithName:(id)arg1 type:(id)arg2 role:(id)arg3;
- (id)subtreeIterator;

@end
