/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface MFAttachmentPlaceholder : NSObject

{
    NSMutableDictionary *_jsonDictionary;
}

+ (id)placeholder;
+ (_Bool)isPlaceholderSerializedRepresentation:(id)arg1;
+ (id)placeholderFromSerializedRepresentation:(id)arg1;
+ (id)dataForPlaceholder:(id)arg1;
+ (void)cloneFileAtURL:(id)arg1 toPlaceholderURL:(id)arg2;
+ (_Bool)writeData:(id)arg1 forURL:(id)arg2;
+ (id)placeholderDirectory;
+ (id)_placeholderMagic;
+ (void)removePlaceholderForFileURL:(id)arg1;
+ (id)_localStoreURLForFileData:(id)arg1 contentID:(id)arg2;
+ (id)attachmentPlaceholderForFileURL:(id)arg1 fileName:(id)arg2 fileSize:(long long)arg3 type:(id)arg4 contentID:(id)arg5;
+ (id)attachmentPlaceholderForData:(id)arg1 fileName:(id)arg2 type:(id)arg3 contentID:(id)arg4;
+ (_Bool)hasPlaceholderRepresentation:(id)arg1;
+ (id)placeholderRepresentations:(id)arg1;
+ (_Bool)setFileProtectionForFileAt:(id)arg1 error:(id *)arg2;
+ (void)removePlaceholder:(id)arg1;
+ (id)serializedPlaceholderForFileName:(id)arg1 fileSize:(long long)arg2 mimeType:(id)arg3 contentID:(id)arg4;

- (id)init;
- (id)description;
- (unsigned long long)fileSize;
- (id)serializedRepresentation;
- (id)fileURL;
- (id)mimeType;
- (void)setMimeType:(id)arg1;
- (void)setFileSize:(unsigned long long)arg1;
- (id)fileName;
- (void)setFileName:(id)arg1;
- (id)contentID;
- (void)setContentID:(id)arg1;
- (id)fileURLString;
- (_Bool)useMailDrop;
- (void)_setJSONDictionary:(id)arg1;
- (void)setFileURLString:(id)arg1;
- (void)setUseMailDrop:(_Bool)arg1;

@end
