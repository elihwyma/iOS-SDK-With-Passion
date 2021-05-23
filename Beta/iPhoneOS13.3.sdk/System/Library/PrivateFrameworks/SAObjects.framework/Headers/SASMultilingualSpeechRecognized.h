/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSDictionary;

@interface SASMultilingualSpeechRecognized : SABaseClientBoundCommand

@property (nonatomic) _Bool multilingualDisabled;
@property (copy, nonatomic) NSDictionary *speechRecognizedByLanguage;

+ (id)multilingualSpeechRecognized;
+ (id)multilingualSpeechRecognizedWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
