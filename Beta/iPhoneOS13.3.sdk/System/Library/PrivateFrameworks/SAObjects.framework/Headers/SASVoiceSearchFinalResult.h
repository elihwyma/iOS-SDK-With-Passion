/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, NSString;

@interface SASVoiceSearchFinalResult : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *recognitionText;
@property (copy, nonatomic) NSArray *voiceSearchResults;

+ (id)voiceSearchFinalResult;
+ (id)voiceSearchFinalResultWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
