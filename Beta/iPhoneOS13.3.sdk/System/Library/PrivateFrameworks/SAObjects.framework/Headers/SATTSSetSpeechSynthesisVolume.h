/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSNumber, NSString;

@interface SATTSSetSpeechSynthesisVolume : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *actionType;
@property (copy, nonatomic) NSNumber *volumeValue;

+ (id)setSpeechSynthesisVolume;
+ (id)setSpeechSynthesisVolumeWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;
- (_Bool)mutatingCommand;

@end
