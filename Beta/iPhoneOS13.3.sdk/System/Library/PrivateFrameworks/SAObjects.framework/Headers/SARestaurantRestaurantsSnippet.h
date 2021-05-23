/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAUISirilandSnippet.h>

@class NSArray, NSDictionary;

@interface SARestaurantRestaurantsSnippet : SAUISirilandSnippet

@property (copy, nonatomic) NSArray *attributionOrder;
@property (copy, nonatomic) NSArray *contributingProviderIds;
@property (copy, nonatomic) NSDictionary *providerPunchOutMap;
@property (copy, nonatomic) NSArray *restaurants;

+ (id)restaurantsSnippet;
+ (id)restaurantsSnippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
