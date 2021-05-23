/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAUISnippet.h>

@class NSArray, NSString;

@interface SAUIPronunciationSnippet : SAUISnippet

@property (copy, nonatomic) NSArray *cancelCommands;
@property (copy, nonatomic) NSString *interactionId;
@property (copy, nonatomic) NSString *orthography;
@property (copy, nonatomic) NSArray *pronunciations;
@property (copy, nonatomic) NSArray *selectNoneCommands;
@property (copy, nonatomic) NSString *selectNoneText;

+ (id)pronunciationSnippet;
+ (id)pronunciationSnippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
