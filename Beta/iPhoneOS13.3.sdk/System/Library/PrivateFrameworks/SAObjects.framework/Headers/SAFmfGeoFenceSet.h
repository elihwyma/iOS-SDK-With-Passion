/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainCommand.h>

@class NSNumber, NSString, SALocation, SAPerson;

@interface SAFmfGeoFenceSet : SADomainCommand

@property (copy, nonatomic) NSNumber *enable;
@property (copy, nonatomic) NSString *fenceType;
@property (retain, nonatomic) SAPerson *friend;
@property (copy, nonatomic) NSString *geoFenceTrigger;
@property (copy, nonatomic) NSNumber *oneTimeOnly;
@property (retain, nonatomic) SALocation *requestedLocation;

+ (id)geoFenceSet;
+ (id)geoFenceSetWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
