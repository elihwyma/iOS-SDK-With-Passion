/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainObject.h>

@class NSArray, NSData, NSDate, NSNumber, NSString, SADistance, SALocation;

@protocol SAAceSerializable;

@interface SALocalSearchMapItem : SADomainObject

@property (copy, nonatomic) NSArray *attributions;
@property (retain, nonatomic) id <SAAceSerializable> detail;
@property (copy, nonatomic) NSString *detailType;
@property (copy, nonatomic) NSString *directionRole;
@property (retain, nonatomic) SADistance *distance;
@property (copy, nonatomic) NSNumber *distanceInMiles;
@property (copy, nonatomic) NSString *extSessionGuid;
@property (copy, nonatomic) NSDate *extSessionGuidCreatedTimestamp;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSNumber *localSearchProviderId;
@property (retain, nonatomic) SALocation *location;
@property (copy, nonatomic) NSData *placeData;
@property (copy, nonatomic) NSData *placeData2;
@property (copy, nonatomic) NSNumber *placeId;
@property (copy, nonatomic) NSData *resultDetourInfoData;
@property (copy, nonatomic) NSString *spokenAddress;
@property (copy, nonatomic) NSString *spokenName;
@property (copy, nonatomic) NSString *suggestionsEntryType;

+ (id)mapItem;
+ (id)mapItemWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
