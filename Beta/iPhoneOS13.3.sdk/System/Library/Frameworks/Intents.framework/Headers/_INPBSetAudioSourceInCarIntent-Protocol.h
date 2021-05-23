/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class _INPBIntentMetadata;

@protocol _INPBSetAudioSourceInCarIntent <Swift>

@property (nonatomic) int audioSource;
@property (nonatomic) _Bool hasAudioSource;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) _Bool hasIntentMetadata;
@property (nonatomic) int relativeAudioSourceReference;
@property (nonatomic) _Bool hasRelativeAudioSourceReference;

- (unsigned short)audioSourceAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsAudioSource: /* Error: Ran out of types for this method. */;
- (unsigned short)relativeAudioSourceReferenceAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsRelativeAudioSourceReference: /* Error: Ran out of types for this method. */;

@end
