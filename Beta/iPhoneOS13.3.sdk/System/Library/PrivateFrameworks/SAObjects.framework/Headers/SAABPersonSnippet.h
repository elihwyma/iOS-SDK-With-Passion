/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAUISnippet.h>

@class NSArray;

@interface SAABPersonSnippet : SAUISnippet

@property (copy, nonatomic) NSArray *displayProperties;
@property (copy, nonatomic) NSArray *persons;

+ (id)personSnippet;
+ (id)personSnippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
