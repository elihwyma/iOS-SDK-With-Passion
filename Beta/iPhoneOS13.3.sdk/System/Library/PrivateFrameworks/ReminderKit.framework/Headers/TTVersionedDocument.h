/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

@interface TTVersionedDocument : NSObject

{
    struct Document {
        CDUnknownFunctionPointerType *;
        basic_string_7c0a1c0b;
        unsigned int [1];
        int;
        struct RepeatedPtrField<versioned_document::Version>;
        unsigned int;
    } *_documentArchive;
}

@property (nonatomic) struct Document *documentArchive;
@property (nonatomic, readonly) unsigned long long futureVersionCount;

+ (unsigned int)versionedDocumentSerializationVersion;
+ (unsigned int)serializationVersion;
+ (unsigned int)minimumSupportedVersion;

- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)serialize;
- (void)loadArchive:(const Document_22a49c75 *)arg1;
- (void)saveToArchive:(Document_22a49c75 *)arg1;
- (id)initWithArchive:(const Document_22a49c75 *)arg1;
- (void)loadData:(id)arg1;
- (void)loadDocumentArchive:(Document_22a49c75 *)arg1;
- (void)mergeVersion:(unsigned int)arg1 fromData:(id)arg2;
- (id)serializeCurrentVersion:(unsigned int *)arg1;
- (void)saveCurrentVersion:(struct Version *)arg1;
- (unsigned long long)mergeWithVersionedDocument:(id)arg1;
- (unsigned int)maxDocumentVersion;

@end
