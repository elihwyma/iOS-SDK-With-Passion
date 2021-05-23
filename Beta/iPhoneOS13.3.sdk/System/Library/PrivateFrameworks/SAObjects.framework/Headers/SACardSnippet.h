/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAUISnippet.h>

@class NSArray, NSData;

@interface SACardSnippet : SAUISnippet

@property (copy, nonatomic) NSData *cardData;
@property (copy, nonatomic) NSArray *contextItems;
@property (copy, nonatomic) NSArray *referencedCommands;
@property (copy, nonatomic) NSArray *referencedSnippets;

+ (id)snippet;
+ (id)snippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
