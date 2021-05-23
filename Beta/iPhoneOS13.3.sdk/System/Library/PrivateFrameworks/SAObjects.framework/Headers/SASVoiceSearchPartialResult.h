/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, NSString;

@interface SASVoiceSearchPartialResult : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *recognitionText;
@property (nonatomic) _Bool stable;
@property (copy, nonatomic) NSArray *voiceSearchResults;

+ (id)voiceSearchPartialResult;
+ (id)voiceSearchPartialResultWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
