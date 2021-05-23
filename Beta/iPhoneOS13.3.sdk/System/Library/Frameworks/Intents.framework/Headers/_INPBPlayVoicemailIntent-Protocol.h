/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBIntentMetadata;

@protocol _INPBPlayVoicemailIntent <Swift>

@property (copy, nonatomic) NSString *callRecordIdentifier;
@property (nonatomic, readonly) _Bool hasCallRecordIdentifier;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) _Bool hasIntentMetadata;

@end
