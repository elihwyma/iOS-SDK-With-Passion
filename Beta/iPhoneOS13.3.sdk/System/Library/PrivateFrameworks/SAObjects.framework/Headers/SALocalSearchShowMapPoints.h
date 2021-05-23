/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainCommand.h>

@class NSDate, NSNumber, NSString, SALocalSearchCarRouteOptions, SALocalSearchMapItem, SALocalSearchMapItemList;

@interface SALocalSearchShowMapPoints : SADomainCommand

@property (copy, nonatomic) NSDate *arrivalDate;
@property (retain, nonatomic) SALocalSearchCarRouteOptions *carRouteOptions;
@property (nonatomic) _Bool chainResultSet;
@property (copy, nonatomic) NSDate *departureDate;
@property (copy, nonatomic) NSString *directionsType;
@property (retain, nonatomic) SALocalSearchMapItem *itemDestination;
@property (retain, nonatomic) SALocalSearchMapItem *itemSource;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *preferredDirectionsMode;
@property (copy, nonatomic) NSNumber *regionOfInterestRadiusInMiles;
@property (nonatomic) _Bool searchAlongRoute;
@property (retain, nonatomic) SALocalSearchMapItemList *searchItems;
@property (nonatomic) _Bool showDirections;
@property (nonatomic) _Bool showTraffic;
@property (nonatomic) _Bool suppressNavigation;

+ (id)showMapPoints;
+ (id)showMapPointsWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
