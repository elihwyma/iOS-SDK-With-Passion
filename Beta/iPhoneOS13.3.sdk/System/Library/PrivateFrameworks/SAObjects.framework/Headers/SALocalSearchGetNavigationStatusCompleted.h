/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseCommand.h>

#import <SAObjects/Swift-Protocol.h>

@class NSString, SALocalSearchAceNavigationEta, SALocalSearchMapItem, SALocalSearchMapItemList, SALocalSearchRoute;

@interface SALocalSearchGetNavigationStatusCompleted : SABaseCommand <Swift>

@property (retain, nonatomic) SALocalSearchMapItem *destination;
@property (retain, nonatomic) SALocalSearchAceNavigationEta *nextManeuverEta;
@property (retain, nonatomic) SALocalSearchAceNavigationEta *overallEta;
@property (retain, nonatomic) SALocalSearchMapItemList *predictedDestinations;
@property (retain, nonatomic) SALocalSearchRoute *route;
@property (copy, nonatomic) NSString *trafficIncidentAlertType;
@property (copy, nonatomic) NSString *volume;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;

+ (id)getNavigationStatusCompleted;
+ (id)getNavigationStatusCompletedWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
