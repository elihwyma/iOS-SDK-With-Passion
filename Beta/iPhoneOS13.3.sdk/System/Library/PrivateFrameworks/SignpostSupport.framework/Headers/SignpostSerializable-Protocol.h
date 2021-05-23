/*
 Image: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
 */

#import <SignpostSupport/Swift-Protocol.h>

@protocol SignpostSerializable <Swift>

+ (unsigned short)serializationTypeNumber;

- (unsigned short)initWithDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)serializeableDictionaryWithShouldRedact: /* Error: Ran out of types for this method. */;
- (unsigned short)humanReadableType;
- (unsigned short)humanReadableDictionaryRepresentation;

@end
