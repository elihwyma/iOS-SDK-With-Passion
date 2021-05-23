/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class INIntentExecutionResult, INSpeakableString, INVoiceCommandDeviceInformation, NSString;

@protocol INRunVoiceCommandIntentExport <Swift>

@property (copy, nonatomic) INSpeakableString *voiceCommand;
@property (copy, nonatomic) INVoiceCommandDeviceInformation *originDevice;
@property (copy, nonatomic) INIntentExecutionResult *executionResult;
@property (copy, nonatomic) NSString *previousIntentIdentifier;

- (unsigned short)init;

@end
