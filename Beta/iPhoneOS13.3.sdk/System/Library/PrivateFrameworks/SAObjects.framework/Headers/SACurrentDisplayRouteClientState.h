/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAAceClientState.h>

@class NSArray;

@interface SACurrentDisplayRouteClientState : SAAceClientState

@property (copy, nonatomic) NSArray *activeDisplayRoutes;

+ (id)deliveryDeadline;
+ (id)persistencePolicy;
+ (id)currentDisplayRouteClientState;
+ (id)currentDisplayRouteClientStateWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
