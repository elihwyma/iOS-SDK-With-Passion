/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAUISnippet.h>

@class NSString, SASRecognition;

@interface SASSpeechAlternativesSnippet : SAUISnippet

@property (nonatomic) long long maxEntryToShow;
@property (retain, nonatomic) SASRecognition *recognition;
@property (copy, nonatomic) NSString *sessionId;

+ (id)speechAlternativesSnippet;
+ (id)speechAlternativesSnippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
