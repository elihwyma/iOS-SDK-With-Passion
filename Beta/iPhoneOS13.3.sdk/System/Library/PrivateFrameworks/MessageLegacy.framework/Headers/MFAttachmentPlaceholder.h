/*
 Image: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
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
+ (id)_placeholderMagic;

- (id)init;
- (void)dealloc;
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
