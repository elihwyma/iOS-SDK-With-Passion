/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAUISnippet.h>

@class NSArray, NSNumber, SALocation;

@interface SALocalSearchMapItemSnippet : SAUISnippet

@property (nonatomic) _Bool chainResultSet;
@property (copy, nonatomic) NSArray *items;
@property (copy, nonatomic) NSArray *providerCommand;
@property (copy, nonatomic) NSNumber *regionOfInterestRadiusInMiles;
@property (nonatomic) _Bool searchAlongRoute;
@property (retain, nonatomic) SALocation *searchRegionCenter;
@property (copy, nonatomic) NSNumber *userCurrentLocation;

+ (id)mapItemSnippet;
+ (id)mapItemSnippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
