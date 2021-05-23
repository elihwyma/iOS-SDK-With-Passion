/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@interface SATTSSpeechSynthesisCompleted : SABaseClientBoundCommand

@property (nonatomic) long long totalPacketNumber;

+ (id)speechSynthesisCompleted;
+ (id)speechSynthesisCompletedWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
