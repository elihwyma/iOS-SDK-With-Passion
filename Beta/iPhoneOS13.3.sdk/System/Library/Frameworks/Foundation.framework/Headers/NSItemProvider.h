/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

#import <Foundation/Swift-Protocol.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSMutableOrderedSet, NSString, NSUUID;

@protocol NSItemProviderDataTransferDelegate, _NSItemProviderLoading;

@interface NSItemProvider : NSObject <Swift>

{
    CDUnknownBlockType _previewImageHandler;
    NSMutableDictionary *_metadata;
    id <_NSItemProviderLoading> _loadOperator;
    NSMutableDictionary *_representationByType;
    NSMutableOrderedSet *_typeOrder;
    NSArray *_representations;
    NSMutableDictionary *_preferredRepresentationByType;
    NSUUID *_UUID;
    NSString *_suggestedName;
    NSString *_sanitizedSuggestedName;
    NSDictionary *_userInfo;
    id <NSItemProviderDataTransferDelegate> _dataTransferDelegate;
}

@property (copy) CDUnknownBlockType previewImageHandler;
@property (retain, nonatomic) NSMutableDictionary *_representationByType;
@property (retain, nonatomic) NSMutableOrderedSet *_typeOrder;
@property (retain, nonatomic) NSMutableDictionary *_preferredRepresentationByType;
@property (retain) id <_NSItemProviderLoading> _loadOperator;
@property (copy) NSDictionary *userInfo;
@property (readonly) NSArray *_representations;
@property (readonly) NSUUID *_UUID;
@property (weak) id <NSItemProviderDataTransferDelegate> dataTransferDelegate;
@property (copy, readonly) NSString *_sanitizedSuggestedName;
@property (copy, readonly) NSArray *registeredTypeIdentifiers;
@property (copy) NSString *suggestedName;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithObject:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1;
- (void)loadItemForTypeIdentifier:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_loadItemOfClass:(Class)arg1 forTypeIdentifier:(id)arg2 options:(id)arg3 coerceForCoding:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_loadPreviewImageOfClass:(Class)arg1 options:(id)arg2 coerceForCoding:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_commonInitGenerateUUID:(_Bool)arg1;
- (id)_availableTypes;
- (id)_representationConformingToType:(id)arg1;
- (void)_setItemRepresentation:(id)arg1;
- (void)_addRepresentationType:(id)arg1 preferredRepresentation:(long long)arg2 visibility:(long long)arg3 loader:(CDUnknownBlockType)arg4;
- (void)_addRepresentationType_v2:(id)arg1 preferredRepresentation:(long long)arg2 loader:(CDUnknownBlockType)arg3;
- (id)_representationForType:(id)arg1;
- (id)_availableTypesWithFilterBlock:(CDUnknownBlockType)arg1;
- (id)registeredTypeIdentifiersWithFileOptions:(long long)arg1;
- (_Bool)_hasRepresentationConformingToType:(id)arg1;
- (void)registerObject:(id)arg1 visibility:(long long)arg2;
- (_Bool)_hasRepresentationOfType:(id)arg1;
- (void)registerDataRepresentationForTypeIdentifier:(id)arg1 visibility:(long long)arg2 loadHandler:(CDUnknownBlockType)arg3;
- (void)registerFileRepresentationForTypeIdentifier:(id)arg1 fileOptions:(long long)arg2 visibility:(long long)arg3 loadHandler:(CDUnknownBlockType)arg4;
- (id)_loadObjectOfClass:(Class)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)hasRepresentationConformingToTypeIdentifier:(id)arg1 fileOptions:(long long)arg2;
- (void)registerItemForTypeIdentifier:(id)arg1 loadHandler:(CDUnknownBlockType)arg2;
- (_Bool)hasItemConformingToTypeIdentifier:(id)arg1;
- (void)_loadItemOfClass:(Class)arg1 withLoadHandler:(CDUnknownBlockType)arg2 options:(id)arg3 coerceForCoding:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_addRepresentationType:(id)arg1 preferredRepresentation:(long long)arg2 loader:(CDUnknownBlockType)arg3;
- (id)representations;
- (id)_metadataValueForKey:(id)arg1;
- (void)_setMetadataValue:(id)arg1 forKey:(id)arg2;
- (id)loadDataRepresentationForTypeIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)loadFileRepresentationForTypeIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)loadInPlaceFileRepresentationForTypeIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)registerObjectOfClass:(Class)arg1 visibility:(long long)arg2 loadHandler:(CDUnknownBlockType)arg3;
- (_Bool)canLoadObjectOfClass:(Class)arg1;
- (id)loadObjectOfClass:(Class)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithItem:(id)arg1 typeIdentifier:(id)arg2;
- (void)loadPreviewImageWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
