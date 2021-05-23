/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAUISnippet.h>

@class NSArray;

@interface SAReminderSiriKitSnippet : SAUISnippet

@property (copy, nonatomic) NSArray *interactions;

+ (id)siriKitSnippet;
+ (id)siriKitSnippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
