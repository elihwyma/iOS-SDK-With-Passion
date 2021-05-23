/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class IMPluginPayload, NSArray, NSAttributedString, NSString;

@interface CKComposition : NSObject

{
    _Bool _isFromExternalSource;
    NSAttributedString *_text;
    NSAttributedString *_subject;
    IMPluginPayload *_shelfPluginPayload;
    NSString *_expressiveSendStyleID;
}

@property (nonatomic, readonly) NSArray *pasteboardItems;
@property (nonatomic, readonly) NSArray *mediaObjects;
@property (nonatomic, readonly) NSArray *pluginDisplayContainers;
@property (nonatomic, readonly, getter=isTextOnly) _Bool textOnly;
@property (nonatomic, readonly, getter=isExpirableComposition) _Bool expirableComposition;
@property (copy, nonatomic) NSAttributedString *text;
@property (copy, nonatomic) NSAttributedString *subject;
@property (copy, nonatomic) IMPluginPayload *shelfPluginPayload;
@property (copy, nonatomic) NSString *expressiveSendStyleID;
@property (nonatomic) _Bool isFromExternalSource;
@property (nonatomic, readonly) _Bool hasContent;
@property (nonatomic, readonly) _Bool hasNonwhiteSpaceContent;
@property (copy, nonatomic, readonly) NSString *previewText;
@property (nonatomic, readonly, getter=isSendAnimated) _Bool sendAnimated;
@property (nonatomic, readonly, getter=isSaveable) _Bool saveable;

+ (id)composition;
+ (id)compositionForMessageParts:(id)arg1 preserveSubject:(_Bool)arg2;
+ (id)stickerCompositionWithMediaObjects:(id)arg1;
+ (id)compositionWithShelfPluginPayload:(id)arg1;
+ (void)updateComposition:(id *)arg1 fromItemProvider:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)requestCompositionFromItemProviders:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)savedCompositionForGUID:(id)arg1;
+ (void)deleteCompositionWithGUID:(id)arg1;
+ (id)compositionFromItemProviders:(id)arg1;
+ (id)pasteboardTypesForItemProvider:(id)arg1;
+ (id)__ck_valueForItemClass:(Class)arg1 forItemProvider:(id)arg2;
+ (_Bool)_shouldCreateMediaObjectForUTIType:(id)arg1;
+ (id)dataForPasteboardType:(id)arg1 forItemProvider:(id)arg2;
+ (id)filenameForType:(id)arg1 forItemProvider:(id)arg2;
+ (id)_transcoderUserInfoFor:(id)arg1 filename:(id)arg2 type:(id)arg3;
+ (id)pluginDisplayContainerForItemProvider:(id)arg1;
+ (id)mediaObjectForItemProvider:(id)arg1;
+ (void)requestPluginDisplayContainerForItemProvider:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)richestMediaTypeForItemProvider:(id)arg1;
+ (void)requestMediaObjectForItemProvider:(id)arg1 type:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)requestMediaObjectsForAttributedString:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)_temporaryURLFromURL:(id)arg1;
+ (void)requestFilenameForType:(id)arg1 forItemProvider:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)newExpirableCompositionWithText:(id)arg1 subject:(id)arg2 shelfPluginPayload:(id)arg3;
+ (id)audioCompositionWithMediaObject:(id)arg1;
+ (id)expirableCompositionWithMediaObject:(id)arg1;
+ (id)quickImageCompositionWithMediaObject:(id)arg1;
+ (id)compositionWithMediaObject:(id)arg1 subject:(id)arg2;
+ (id)compositionWithMSMessage:(id)arg1 appExtensionIdentifier:(id)arg2;
+ (id)compositionWithPluginDisplayContainer:(id)arg1 subject:(id)arg2;
+ (id)compositionWithMediaObjects:(id)arg1 subject:(id)arg2;
+ (id)photoPickerCompositionWithMediaObject:(id)arg1;
+ (id)photoPickerCompositionWithMediaObjects:(id)arg1;
+ (id)_savedCompositionForGUID:(id)arg1 readUsingBlock:(CDUnknownBlockType)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (Class)balloonViewClass;
- (id)initWithText:(id)arg1 subject:(id)arg2 shelfPluginPayload:(id)arg3;
- (id)compositionByReplacingMediaObject:(id)arg1 withMediaObject:(id)arg2;
- (id)superFormatText:(id *)arg1;
- (id)compositionByAppendingComposition:(id)arg1;
- (id)compositionByAppendingMediaObjects:(id)arg1;
- (id)initWithText:(id)arg1 subject:(id)arg2;
- (id)compositionByAppendingText:(id)arg1;
- (id)compositionWithExpressiveSendStyleID:(id)arg1;
- (void)saveCompositionWithGUID:(id)arg1;
- (id)compositionByAppendingPluginDisplayContainer:(id)arg1;
- (id)compositionByAppendingMediaObject:(id)arg1;
- (id)messageWithGUID:(id)arg1;
- (id)messagesFromCompositionFirstGUIDForMessage:(id)arg1;
- (id)_compositionByAppendingText:(id)arg1 isExpirable:(_Bool)arg2 shelfPluginPayload:(id)arg3;
- (id)externalSourceComposition;
- (id)messageWithGUID:(id)arg1 superFormatText:(id)arg2 superFormatSubject:(id)arg3 fileTransferGUIDs:(id)arg4 mediaObjects:(id)arg5 balloonBundleID:(id)arg6 payloadData:(id)arg7;
- (id)_compositionParts;
- (id)superFormatSubject;
- (id)superFormatText:(id)arg1 transfterGUIDs:(id *)arg2 mediaObjects:(id *)arg3;
- (id)_messageFromPayload:(id)arg1 firstGUID:(id)arg2;
- (_Bool)_saveCompositionData:(id)arg1 atURL:(id)arg2 forGUID:(id)arg3;

@end
