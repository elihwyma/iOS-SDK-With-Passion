/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAAceClientState.h>

@class NSArray, NSString;

@interface SALocalSearchGeoClientState : SAAceClientState

@property (copy, nonatomic) NSArray *additionalEnabledTransitMarkets;
@property (copy, nonatomic) NSString *environment;

+ (id)deliveryDeadline;
+ (id)persistencePolicy;
+ (id)syncKey;
+ (id)uniqueObjectIdentifier;
+ (id)geoClientState;
+ (id)geoClientStateWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
