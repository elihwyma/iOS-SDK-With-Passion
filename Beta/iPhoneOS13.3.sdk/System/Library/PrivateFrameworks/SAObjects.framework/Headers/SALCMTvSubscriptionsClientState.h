/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAAceClientState.h>

@class NSArray;

@interface SALCMTvSubscriptionsClientState : SAAceClientState

@property (copy, nonatomic) NSArray *subscriptions;

+ (id)deliveryDeadline;
+ (id)persistencePolicy;
+ (id)syncKey;
+ (id)uniqueObjectIdentifier;
+ (id)tvSubscriptionsClientState;
+ (id)tvSubscriptionsClientStateWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
