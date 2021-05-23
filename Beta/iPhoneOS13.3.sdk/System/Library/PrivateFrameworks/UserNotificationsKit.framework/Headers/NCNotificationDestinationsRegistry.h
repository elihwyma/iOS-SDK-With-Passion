/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary;

@interface NCNotificationDestinationsRegistry : NSObject

{
    struct NSMutableDictionary *_destinations;
    struct NSMutableDictionary *_activeDestinations;
    struct NSMutableDictionary *_readyDestinations;
}

@property (retain, nonatomic) NSMutableDictionary *destinations;
@property (retain, nonatomic) NSMutableDictionary *activeDestinations;
@property (retain, nonatomic) NSMutableDictionary *readyDestinations;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) NSArray *registeredDestinations;

- (id)init;
- (void)registerDestination:(id)arg1;
- (void)unregisterDestination:(id)arg1;
- (void)setDestination:(id)arg1 enabled:(_Bool)arg2;
- (void)setDestination:(id)arg1 ready:(_Bool)arg2;
- (_Bool)isRegisteredDestination:(id)arg1;
- (id)destinationsForRequestDestinations:(id)arg1;
- (id)readyDestinationsForRequestDestinations:(id)arg1;
- (void)registerDestination:(id)arg1 forIdentifier:(id)arg2;
- (void)unregisterDestinationForIdentifier:(id)arg1;
- (id)_destinationsForRequestDestinations:(id)arg1 inDestinationDict:(struct NSMutableDictionary *)arg2;
- (void)setDestinationWithIdentifier:(id)arg1 enabled:(_Bool)arg2;
- (_Bool)hasActiveDestinationsForRequest:(id)arg1;
- (id)destinationIdentifiersForRequestDestinations:(id)arg1;

@end
