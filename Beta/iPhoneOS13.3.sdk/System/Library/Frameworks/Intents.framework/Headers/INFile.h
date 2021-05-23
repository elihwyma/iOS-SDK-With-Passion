/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

@class NSData, NSString, NSURL;

@interface INFile : NSObject

{
    NSData *_memoryMappedFileData;
    _Bool _deletesFileOnDeallocationIfNeeded;
    NSData *_data;
    NSString *_filename;
    NSURL *_fileURL;
    NSString *_typeIdentifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool _hasAssociatedAuditToken;
@property (nonatomic, getter=_isMarkedForDeletionOnDeallocation, setter=_setMarkedForDeletionOnDeallocation:) _Bool _markedForDeletionOnDeallocation;
@property (nonatomic, setter=_setDeletesFileOnDeallocationIfNeeded:) _Bool _deletesFileOnDeallocationIfNeeded;
@property (nonatomic, readonly) _Bool _isFileURLBased;
@property (copy, nonatomic, readonly) NSData *data;
@property (copy, nonatomic) NSString *filename;
@property (copy, nonatomic, readonly) NSString *typeIdentifier;
@property (nonatomic, readonly) NSURL *fileURL;

+ (void)initialize;
+ (_Bool)supportsSecureCoding;
+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
+ (id)fileWithData:(id)arg1 filename:(id)arg2 typeIdentifier:(id)arg3;
+ (id)fileWithFileURL:(id)arg1 filename:(id)arg2 typeIdentifier:(id)arg3;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_dictionaryRepresentation;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (id)_intents_readableDescriptionForLanguage:(id)arg1 withMetadata:(id)arg2;
- (_Bool)_intents_enumerateObjectsOfClass:(Class)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)_initWithData:(id)arg1 filename:(id)arg2 fileURL:(id)arg3 typeIdentifier:(id)arg4;
- (_Bool)_associatedAuditTokenIsEqualToAuditToken:(CDStruct_6ad76789)arg1;
- (void)_setAssociatedAuditToken:(CDStruct_6ad76789)arg1;

@end
