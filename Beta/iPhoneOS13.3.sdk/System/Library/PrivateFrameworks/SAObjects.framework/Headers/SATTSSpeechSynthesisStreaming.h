/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SATTSSpeechSynthesisStreaming : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *streamId;

+ (id)speechSynthesisStreaming;
+ (id)speechSynthesisStreamingWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
