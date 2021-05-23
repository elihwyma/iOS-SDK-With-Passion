/*
 Image: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, NSUUID;

@interface SAKernelCache : NSObject

{
    NSUUID *_uuid;
    NSArray *_binaryLoadInfos;
    unsigned long long _textSegmentsStartAddress;
    unsigned long long _textSegmentsEndAddress;
    unsigned long long _loadAddress;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain) NSArray *binaryLoadInfos;
@property (readonly) unsigned long long loadAddress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) NSUUID *uuid;
@property (readonly) unsigned long long textSegmentsStartAddress;
@property (readonly) unsigned long long textSegmentsEndAddress;

+ (void)clearCaches;
+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const CDStruct_0b74e904 *)arg1 bufferLength:(unsigned long long)arg2;
+ (id)kernelCacheWithUUID:(id)arg1 loadAddress:(unsigned long long)arg2;
+ (void)_doKernelCachesWork:(CDUnknownBlockType)arg1;

- (void)writeJSONDictionaryEntriesToStream:(id)arg1;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (void)addSelfToSerializationDictionary:(struct NSMutableDictionary *)arg1;
- (_Bool)addSelfToBuffer:(CDStruct_0b74e904 *)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(struct NSMutableDictionary *)arg3;
- (void)populateReferencesUsingBuffer:(const CDStruct_0b74e904 *)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(struct NSMutableDictionary *)arg3 andDataBufferDictionary:(struct NSMutableDictionary *)arg4;
- (_Bool)matchesUUID:(unsigned char [16])arg1 loadAddress:(unsigned long long)arg2;
- (id)initWithUUID:(id)arg1 loadAddress:(unsigned long long)arg2;

@end
