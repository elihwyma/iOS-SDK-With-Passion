/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBIntentMetadata;

@protocol _INPBPlayAudioMessageIntent <Swift>

@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) _Bool hasIntentMetadata;
@property (copy, nonatomic) NSString *messageIdentifier;
@property (nonatomic, readonly) _Bool hasMessageIdentifier;

@end
