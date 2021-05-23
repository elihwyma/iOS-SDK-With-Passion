/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SALocalSearchBusiness2.h>

@class NSArray, NSURL;

@interface SARestaurantRestaurant : SALocalSearchBusiness2

@property (copy, nonatomic) NSArray *attributeSet;
@property (copy, nonatomic) NSArray *makeReservationPunchOuts;
@property (copy, nonatomic) NSURL *menuLink;
@property (copy, nonatomic) NSArray *openings;
@property (copy, nonatomic) NSArray *orderDeliveryPunchOuts;

+ (id)restaurant;
+ (id)restaurantWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
