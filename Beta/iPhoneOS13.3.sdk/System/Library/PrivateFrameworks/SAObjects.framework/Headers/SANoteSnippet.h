/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAUISnippet.h>

@class NSArray;

@interface SANoteSnippet : SAUISnippet

@property (copy, nonatomic) NSArray *notes;

+ (id)snippet;
+ (id)snippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
