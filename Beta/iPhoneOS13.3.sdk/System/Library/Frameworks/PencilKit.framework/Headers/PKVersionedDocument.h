/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <Foundation/NSObject.h>

@interface PKVersionedDocument : NSObject

{
    struct Document *_documentArchive;
}

@property (nonatomic) struct Document *documentArchive;
@property (nonatomic, readonly) unsigned long long futureVersionCount;

+ (unsigned int)versionedDocumentSerializationVersion;
+ (unsigned int)serializationVersion;
+ (unsigned int)minimumSupportedVersion;

- (id)init;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)serialize;
- (void)loadArchive:(const struct Document *)arg1;
- (void)saveToArchive:(struct Document *)arg1;
- (id)initWithArchive:(const struct Document *)arg1;
- (_Bool)loadData:(id)arg1;
- (_Bool)loadDocumentArchive:(struct Document *)arg1;
- (void)mergeVersion:(unsigned int)arg1 fromData:(id)arg2;
- (id)serializeCurrentVersion:(unsigned int *)arg1;
- (void)saveCurrentVersion:(struct Version *)arg1;
- (unsigned long long)mergeWithVersionedDocument:(id)arg1;
- (unsigned int)maxDocumentVersion;
- (id)initWithUnzippedData:(id)arg1;
- (_Bool)loadUnzippedData:(id)arg1;

@end
