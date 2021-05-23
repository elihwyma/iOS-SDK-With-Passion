/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAUISnippet.h>

@class NSArray, SAUIAppPunchOut;

@interface SAGKSnippet : SAUISnippet

@property (retain, nonatomic) SAUIAppPunchOut *appPunchOut;
@property (copy, nonatomic) NSArray *pods;

+ (id)snippet;
+ (id)snippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
