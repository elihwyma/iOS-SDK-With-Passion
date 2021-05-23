/*
 Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSMutableDictionary;

@interface UISUIActivityExtensionItemData : NSObject

{
    NSArray *_extensionItems;
    NSDictionary *_openURLAnnotationsByURL;
    struct __CFDictionary *_itemProviderOrExtensionItemWithMetadataToUUID;
    NSMutableDictionary *_attachmentNamesByItemUUID;
    NSMutableDictionary *_subjectsByItemUUID;
    NSMutableDictionary *_previewImagesByItemUUID;
    NSMutableDictionary *_previewImageDataByItemUUID;
    NSMutableDictionary *_dataTypesByItemUUID;
}

@property (nonatomic, readonly) struct __CFDictionary *itemProviderOrExtensionItemWithMetadataToUUID;
@property (nonatomic, readonly) NSMutableDictionary *attachmentNamesByItemUUID;
@property (nonatomic, readonly) NSMutableDictionary *subjectsByItemUUID;
@property (nonatomic, readonly) NSMutableDictionary *previewImagesByItemUUID;
@property (nonatomic, readonly) NSMutableDictionary *previewImageDataByItemUUID;
@property (nonatomic, readonly) NSMutableDictionary *dataTypesByItemUUID;
@property (retain, nonatomic) NSArray *extensionItems;
@property (retain, nonatomic) NSDictionary *openURLAnnotationsByURL;

+ (_Bool)supportsSecureCoding;
+ (id)_extensionItemsByPreparingToSendExtensionItems:(id)arg1 toDestinationExtension:(id)arg2;
+ (id)_onBackgroundQueue_extensionItemsByPreparingToSendExtensionItems:(id)arg1 toDestinationExtension:(id)arg2;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)addAttachmentName:(id)arg1 forItem:(id)arg2;
- (void)addSubject:(id)arg1 forItem:(id)arg2;
- (void)addPreviewImageData:(id)arg1 forItem:(id)arg2;
- (void)addPreviewImage:(id)arg1 forItem:(id)arg2;
- (void)addDataType:(id)arg1 forItem:(id)arg2;
- (void)prepareForSendingToExtension:(id)arg1;
- (id)attachmentNameForItem:(id)arg1;
- (id)subjectForItem:(id)arg1;
- (id)previewImageForItem:(id)arg1;
- (id)previewImageDataForItem:(id)arg1;
- (id)dataTypeForItem:(id)arg1;
- (void)_loadItemProviderOrExtensionItemWithMetadataToUUIDFromTemporaryUUIDMappingAttachedToExtensionItems:(id)arg1;
- (void)_removeTemporaryUUIDMappingAttachmentFromExtensionItems:(id)arg1;
- (void)_appendTemporaryUUIDMappingAttachmentToExtensionItem:(id)arg1;
- (id)_getItemUUIDForItem:(id)arg1 createIfNeeded:(_Bool)arg2;
- (void)_changeUUIDMappingFromExtensionItems:(id)arg1 toClonedExtensionItems:(id)arg2;
- (void)_setItemUUID:(id)arg1 forItem:(id)arg2;
- (id)_uuidMappingDataForTemporaryAttachmentToExtensionItem:(id)arg1 attachments:(id)arg2;
- (id)allDataTypes;
- (void)prepareForSendingAsCompletionToHostWithAuditToken:(CDStruct_6ad76789)arg1;

@end
