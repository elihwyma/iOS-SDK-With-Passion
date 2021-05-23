/*
 Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

#import <Foundation/NSObject.h>

@class NSString, NSUUID;

@interface PAImageInfo : NSObject

{
    _Bool _isTextExecSegment;
    unsigned long long _loadAddress;
    unsigned long long _size;
    NSUUID *_imageUUID;
    NSString *_path;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) unsigned long long loadAddress;
@property (readonly) unsigned long long size;
@property (readonly) NSUUID *imageUUID;
@property (readonly) NSString *path;
@property (readonly) _Bool isTextExecSegment;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromBufferPosition:(const void *)arg1;

- (unsigned long long)sizeInBytesForSerializedVersion;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (id)initWithUUID:(id)arg1 andAddress:(unsigned long long)arg2 andSize:(unsigned long long)arg3 andPath:(id)arg4;
- (id)initWithUUID:(id)arg1 andAddress:(unsigned long long)arg2;
- (id)initWithUUID:(id)arg1 andAddress:(unsigned long long)arg2 andSize:(unsigned long long)arg3 andPath:(id)arg4 isTextExecSegment:(_Bool)arg5;
- (_Bool)addSelfToBufferAtPosition:(void *)arg1 withCompletedSerializationDictionary:(id)arg2;
- (void)populateReferencesUsingBufferPosition:(const void *)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3;
- (id)initWithImageInfo:(const void *)arg1 is64Bit:(_Bool)arg2;
- (id)initWithUUID:(id)arg1 andAddress:(unsigned long long)arg2 andPath:(id)arg3;
- (void)addNewInformationFromImageInfo:(id)arg1;
- (id)initWithSerializedImageInfo:(const CDStruct_51667c10 *)arg1;

@end
