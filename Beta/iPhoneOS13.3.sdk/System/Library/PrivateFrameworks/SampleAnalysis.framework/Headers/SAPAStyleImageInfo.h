/*
 Image: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
 */

#import <Foundation/NSObject.h>

@class SABinaryLoadInfo;

__attribute__((visibility("hidden")))
@interface SAPAStyleImageInfo : NSObject

{
    SABinaryLoadInfo *_binaryLoadInfo;
}

@property (retain) SABinaryLoadInfo *binaryLoadInfo;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const CDStruct_14f26992 *)arg1 bufferLength:(unsigned long long)arg2;

- (unsigned long long)sizeInBytesForSerializedVersion;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (_Bool)addSelfToBuffer:(void *)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(struct NSMutableDictionary *)arg3;
- (void)populateReferencesUsingBuffer:(const CDStruct_14f26992 *)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4;

@end
