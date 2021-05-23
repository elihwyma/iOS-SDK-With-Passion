/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAUISnippet.h>

@class NSArray;

@interface SAWeatherLocationSnippet : SAUISnippet

@property (copy, nonatomic) NSArray *weatherLocations;

+ (id)locationSnippet;
+ (id)locationSnippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
