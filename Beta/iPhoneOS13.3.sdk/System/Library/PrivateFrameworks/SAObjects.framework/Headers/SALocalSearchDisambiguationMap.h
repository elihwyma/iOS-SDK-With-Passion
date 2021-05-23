/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAUISnippet.h>

@class NSArray;

@interface SALocalSearchDisambiguationMap : SAUISnippet

@property (copy, nonatomic) NSArray *items;

+ (id)disambiguationMap;
+ (id)disambiguationMapWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
