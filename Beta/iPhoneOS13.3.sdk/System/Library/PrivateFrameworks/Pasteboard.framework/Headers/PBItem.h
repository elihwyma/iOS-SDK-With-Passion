/*
 Image: /System/Library/PrivateFrameworks/Pasteboard.framework/Pasteboard
 */

#import <Foundation/NSObject.h>

@class NSArray, NSData, NSDictionary, NSMutableDictionary, NSMutableOrderedSet, NSString, NSURL, NSUUID;

@protocol NSObject, PBItemDataTransferDelegate;

@interface PBItem : NSObject

{
    _Bool _itemQueue_isStoredOnServer;
    NSData *_itemQueue_primaryData;
    NSURL *_itemQueue_primaryFileURL;
    id <PBItemDataTransferDelegate> _itemQueue_dataTransferDelegate;
    NSDictionary *_itemQueue_privateMetadata;
    NSMutableDictionary *_itemQueue_representationByType;
    NSMutableOrderedSet *_itemQueue_typeOrder;
    NSMutableDictionary *_itemQueue_preferredRepresentationByType;
    NSMutableDictionary *_itemQueue_visibilityByType;
    NSMutableDictionary *_itemQueue_dataAvailabilityByType;
    id _itemQueue_localUserInfo;
    id <NSObject> _itemQueue_localObject;
    NSDictionary *_itemQueue_metadata;
    NSUUID *_UUID;
}

@property (retain, nonatomic) NSData *itemQueue_primaryData;
@property (retain, nonatomic) NSURL *itemQueue_primaryFileURL;
@property (weak, nonatomic) id <PBItemDataTransferDelegate> itemQueue_dataTransferDelegate;
@property (retain, nonatomic) NSDictionary *itemQueue_privateMetadata;
@property (retain, nonatomic) NSMutableDictionary *itemQueue_representationByType;
@property (retain, nonatomic) NSMutableOrderedSet *itemQueue_typeOrder;
@property (retain, nonatomic) NSMutableDictionary *itemQueue_preferredRepresentationByType;
@property (retain, nonatomic) NSMutableDictionary *itemQueue_visibilityByType;
@property (retain, nonatomic) NSMutableDictionary *itemQueue_dataAvailabilityByType;
@property (retain, nonatomic) id itemQueue_localUserInfo;
@property (retain, nonatomic) id <NSObject> itemQueue_localObject;
@property (copy, nonatomic) NSDictionary *itemQueue_metadata;
@property (nonatomic) _Bool itemQueue_isStoredOnServer;
@property (retain, nonatomic) id localObject;
@property (retain, nonatomic) NSDictionary *privateMetadata;
@property (nonatomic, readonly) NSUUID *UUID;
@property (nonatomic, readonly) NSArray *representations;
@property (weak, nonatomic) id <PBItemDataTransferDelegate> dataTransferDelegate;
@property (retain, nonatomic) id localUserInfo;
@property (copy, nonatomic) NSDictionary *metadata;
@property (copy, nonatomic, readonly) NSArray *availableTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)item;
+ (id)allowedClassesForSecureCoding;
+ (id)itemWithObject:(id)arg1;
+ (id)itemWithData:(id)arg1 type:(id)arg2;
+ (id)itemWithContentsOfFileURL:(id)arg1 type:(id)arg2 outError:(id *)arg3;

- (id)init;
- (void)dealloc;
- (id)initWithObject:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_commonInitGenerateUUID:(_Bool)arg1;
- (id)_representationForType:(id)arg1;
- (id)initWithNSItemProvider:(id)arg1;
- (id)representationConformingToType:(id)arg1;
- (_Bool)isDataAvailableImmediatelyForType:(id)arg1;
- (unsigned long long)preferredRepresentationForType:(id)arg1;
- (_Bool)canInstantiateObjectOfClass:(Class)arg1;
- (_Bool)hasRepresentationConformingToType:(id)arg1;
- (void)uikit_loadRepresentationAsType:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)uikit_loadObjectOfClass:(Class)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)uikit_addRepresentationType:(id)arg1 loaderBlock:(CDUnknownBlockType)arg2;
- (_Bool)uikit_canInstantiateObjectOfClass:(Class)arg1;
- (void)addRepresentation:(id)arg1;
- (id)initWithData:(id)arg1 type:(id)arg2;
- (void)itemRepresentationFinishedDataTransfer:(id)arg1;
- (void)itemRepresentation:(id)arg1 beganDataTransferWithProgress:(id)arg2;
- (id)itemQueue_availableTypes;
- (id)initWithContentsOfFileURL:(id)arg1 type:(id)arg2 outError:(id *)arg3;
- (id)initDoNothing;
- (id)_itemQueue_copyWithDoNothingRepresentations;
- (void)itemQueue_setItemRepresentation:(id)arg1;
- (void)v2_addFileCopyRepresentationType:(id)arg1 loader:(CDUnknownBlockType)arg2;
- (void)v2_addRepresentationType:(id)arg1 preferredRepresentation:(unsigned long long)arg2 loader:(CDUnknownBlockType)arg3;
- (void)_addRepresentationType:(id)arg1 loaderBlock:(CDUnknownBlockType)arg2;
- (void)itemQueue_removeRepresentationOfType:(id)arg1;
- (_Bool)itemQueue_hasRepresentationOfType:(id)arg1;
- (_Bool)itemQueue_hasRepresentationConformingToType:(id)arg1;
- (_Bool)itemQueue_canInstantiateObjectOfClass:(Class)arg1;
- (_Bool)_canInstantiateObjectOfClass:(Class)arg1;
- (id)itemQueue_representationForType:(id)arg1;
- (void)_loadObjectOfClass:(Class)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_loadRepresentationAsType:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)itemQueue_setDataTransferDelegate:(id)arg1;
- (id)availableTypesWithPreferredRepresentation:(unsigned long long)arg1;
- (id)copyWithDoNothingRepresentations;
- (void)addDataRepresentationType:(id)arg1 loader:(CDUnknownBlockType)arg2;
- (void)addFileCopyRepresentationType:(id)arg1 loader:(CDUnknownBlockType)arg2;
- (void)addOpenInPlaceRepresentationType:(id)arg1 loader:(CDUnknownBlockType)arg2;
- (void)addRepresentationType:(id)arg1 loader:(CDUnknownBlockType)arg2;
- (void)addRepresentationType:(id)arg1 preferredRepresentation:(unsigned long long)arg2 loader:(CDUnknownBlockType)arg3;
- (void)addRepresentationType:(id)arg1 loaderBlock:(CDUnknownBlockType)arg2;
- (void)removeRepresentationOfType:(id)arg1;
- (long long)visibilityForType:(id)arg1;
- (_Bool)hasRepresentationOfType:(id)arg1;
- (void)loadObjectOfClass:(Class)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)loadRepresentationAsType:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end
