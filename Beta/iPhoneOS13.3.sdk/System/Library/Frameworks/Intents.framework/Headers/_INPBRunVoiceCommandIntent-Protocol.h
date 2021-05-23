/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBDataString, _INPBIntentExecutionResult, _INPBIntentMetadata, _INPBVoiceCommandDeviceInformation;

@protocol _INPBRunVoiceCommandIntent <Swift>

@property (retain, nonatomic) _INPBIntentExecutionResult *executionResult;
@property (nonatomic, readonly) _Bool hasExecutionResult;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) _Bool hasIntentMetadata;
@property (retain, nonatomic) _INPBVoiceCommandDeviceInformation *originDevice;
@property (nonatomic, readonly) _Bool hasOriginDevice;
@property (copy, nonatomic) NSString *previousIntentIdentifier;
@property (nonatomic, readonly) _Bool hasPreviousIntentIdentifier;
@property (retain, nonatomic) _INPBDataString *voiceCommand;
@property (nonatomic, readonly) _Bool hasVoiceCommand;

@end
