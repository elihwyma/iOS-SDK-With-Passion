/*
 Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

#import <PASampling/Swift-Protocol.h>

@protocol PASerializable <Swift>

+ (unsigned short)classDictionaryKey;
+ (unsigned short)newInstanceWithoutReferencesFromBufferPosition: /* Error: Ran out of types for this method. */;

- (unsigned short)sizeInBytesForSerializedVersion;
- (unsigned short)addSelfToSerializationDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)addSelfToBufferAtPosition:withCompletedSerializationDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)populateReferencesUsingBufferPosition:andDeserializationDictionary:andDataBufferDictionary: /* Error: Ran out of types for this method. */;

@end
