/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <Foundation/NSObject.h>

@interface PICompositionSerializer : NSObject

+ (void)initialize;
+ (id)serializeDictionary:(id)arg1 error:(out id *)arg2;
+ (id)deserializeDictionaryFromData:(id)arg1 error:(out id *)arg2;
+ (id)serializeComposition:(id)arg1 versionInfo:(id)arg2 serializerMetadata:(id)arg3 error:(out id *)arg4;
+ (id)deserializeCompositionFromData:(id)arg1 formatIdentifier:(id)arg2 formatVersion:(id)arg3 error:(out id *)arg4;
+ (_Bool)canInterpretDataWithFormatIdentifier:(id)arg1 formatVersion:(id)arg2;
+ (id)deserializeCompositionFromAdjustments:(id)arg1 metadata:(id)arg2 formatIdentifier:(id)arg3 formatVersion:(id)arg4 error:(out id *)arg5;
+ (id)serializeComposition:(id)arg1 versionInfo:(id)arg2 error:(out id *)arg3;
+ (void)disableApertureEffects:(_Bool)arg1;
+ (_Bool)validateCompositionWithMissingSource:(id)arg1 error:(out id *)arg2;
+ (_Bool)validateAdjustmentsEnvelope:(id)arg1 error:(out id *)arg2;
+ (_Bool)_validateValueTypesForKeys:(id)arg1 requiredKeys:(id)arg2 inDictionary:(id)arg3 error:(out id *)arg4;
+ (void)_sanitizeComposition:(id)arg1;

@end
