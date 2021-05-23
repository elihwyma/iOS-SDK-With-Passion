/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Navigation/Swift-Protocol.h>

@protocol MNTimeballServiceProxyDelegate;

@protocol MNTimeballServiceProxyInterface <Swift>

@property (nonatomic) id <MNTimeballServiceProxyDelegate> delegate;

- (unsigned short)requestRoutingOptions:forDestinations:freshness:handlerID: /* Error: Ran out of types for this method. */;
- (unsigned short)subscribeToDestination:options:refreshPolicy: /* Error: Ran out of types for this method. */;
- (unsigned short)unsubscribeFromDestination: /* Error: Ran out of types for this method. */;
- (unsigned short)subscribeToAllDestinations;
- (unsigned short)unsubscribeFromAllDestinations;

@end
