/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAUISnippet.h>

@class NSArray;

@interface SAPhoneCallSnippet : SAUISnippet

@property (copy, nonatomic) NSArray *calls;

+ (id)callSnippet;
+ (id)callSnippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
