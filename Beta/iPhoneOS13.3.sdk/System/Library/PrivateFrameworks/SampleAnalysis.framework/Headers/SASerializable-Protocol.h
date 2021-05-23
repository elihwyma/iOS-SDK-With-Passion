/*
 Image: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
 */

#import <SampleAnalysis/Swift-Protocol.h>

@protocol SASerializable <Swift>

+ (unsigned short)classDictionaryKey;
+ (unsigned short)newInstanceWithoutReferencesFromSerializedBuffer:bufferLength: /* Error: Ran out of types for this method. */;

- (unsigned short)sizeInBytesForSerializedVersion;
- (unsigned short)addSelfToSerializationDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)addSelfToBuffer:bufferLength:withCompletedSerializationDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)populateReferencesUsingBuffer:bufferLength:andDeserializationDictionary:andDataBufferDictionary: /* Error: Ran out of types for this method. */;

@end
