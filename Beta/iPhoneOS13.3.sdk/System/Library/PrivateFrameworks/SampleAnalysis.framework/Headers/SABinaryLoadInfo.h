/*
 Image: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
 */

#import <Foundation/NSObject.h>

@class NSString, SABinary;

@interface SABinaryLoadInfo : NSObject

{
    SABinary *_binary;
    unsigned long long _textSegmentLoadAddress;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property unsigned long long textSegmentLoadAddress;
@property (readonly) SABinary *binary;
@property (readonly) _Bool isInKernelAddressSpace;

+ (id)binaryLoadInfoForLiveProcessWithPid:(int)arg1 dataGatheringOptions:(unsigned long long)arg2;
+ (id)binaryLoadInfoForAddress:(unsigned long long)arg1 inBinaryLoadInfos:(id)arg2 libraryCache:(id)arg3;
+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const CDStruct_cdea0219 *)arg1 bufferLength:(unsigned long long)arg2;
+ (id)binaryLoadInfoWithBinary:(id)arg1 textSegmentLoadAddress:(unsigned long long)arg2 isInKernelAddressSpace:(_Bool)arg3;
+ (id)binaryLoadInfoForAddress:(unsigned long long)arg1 inBinaryLoadInfos:(id)arg2;
+ (id)binaryLoadInfoForLiveProcessWithPid:(int)arg1;
+ (id)binaryLoadInfoWithoutReferencesFromPAStyleSerializedImageInfo:(const CDStruct_14f26992 *)arg1;

- (void)writeJSONDictionaryEntriesToStream:(id)arg1;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (void)addSelfToSerializationDictionary:(struct NSMutableDictionary *)arg1;
- (_Bool)addSelfToBuffer:(CDStruct_cdea0219 *)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(struct NSMutableDictionary *)arg3;
- (void)populateReferencesUsingBuffer:(const CDStruct_cdea0219 *)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(struct NSMutableDictionary *)arg3 andDataBufferDictionary:(struct NSMutableDictionary *)arg4;
- (id)initWithBinary:(id)arg1 textSegmentLoadAddress:(unsigned long long)arg2;
- (id)initWithDyldUUIDInfo:(const void *)arg1 is64Bit:(_Bool)arg2;
- (void)populateReferencesUsingPAStyleSerializedImageInfo:(const CDStruct_14f26992 *)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3;

@end
