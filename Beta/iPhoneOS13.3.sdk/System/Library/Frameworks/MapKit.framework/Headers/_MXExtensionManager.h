/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class _MXExtensionProvider;

@protocol _MXExtensionLookupPolicy, _MXExtensionManagerDelegate;

@interface _MXExtensionManager : NSObject

{
    id <_MXExtensionLookupPolicy> _lookupPolicy;
    id _matchingContext;
    id <_MXExtensionManagerDelegate> _delegate;
    _MXExtensionProvider *_extensionProvider;
}

@property (retain, nonatomic) id matchingContext;
@property (weak, nonatomic) id <_MXExtensionManagerDelegate> delegate;
@property (retain, nonatomic) _MXExtensionProvider *extensionProvider;
@property (nonatomic, readonly) id <_MXExtensionLookupPolicy> lookupPolicy;

+ (id)_queue;
+ (id)_maps_ridesharingOptionalIntentClassesForNonUIHandling;
+ (id)_maps_ridesharingRequiredIntentClassesForNonUIHandling;
+ (id)_lookupPolicyWithBlock:(CDUnknownBlockType)arg1;
+ (id)_maps_ridesharingAllIntentClassesForNonUIHandling;
+ (id)_maps_ridesharingIntentClassesForUIInteraction;
+ (id)_maps_lookupPolicyForEnabledRidesharingNonUIExtensions;
+ (id)_maps_lookupPolicyForRidesharingNonUIExtensions;
+ (void)_maps_updateRideBookingExtensions:(id)arg1;
+ (id)restaurantQueueingIntentClassNames;
+ (id)_lookupPolicyForExtensionWithContainingAppIdentifier:(id)arg1 supportsIntentClassNames:(id)arg2;
+ (id)_lookupPolicyForExtensionSupportsIntentClassNames:(id)arg1;
+ (id)lookupPolicyForRestaurantQueueingExtensionWithContainingAppIdentifier:(id)arg1;
+ (id)lookupPolicyForRestaurantQueueingExtensions;
+ (id)restaurantReservationIntentClassNames;
+ (id)lookupPolicyForRestaurantReservationExtensionWithContainingAppIdentifier:(id)arg1;
+ (id)lookupPolicyForRestaurantReservationExtensions;
+ (void)imageForKey:(id)arg1 extension:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)_lookupPolicyWithExtensionPointNames:(id)arg1;
+ (id)managerWithLookupPolicy:(id)arg1 delegate:(id)arg2;
+ (id)managerWithExtensionLookupPolicy:(id)arg1 updateHandler:(CDUnknownBlockType)arg2;
+ (id)_extensionsWithLookupPolicy:(id)arg1;
+ (id)_lookupPolicyForUIExtension;
+ (id)_lookupPolicyForNonUIExtension;
+ (id)_lookupPolicyForAllExtensions;
+ (id)_lookupPolicyForIntentsExtensions;
+ (id)lookupPolicyForExtensionWithCapability:(id)arg1;
+ (id)lookupPolicyForExtensionWithCapabilities:(id)arg1;
+ (id)_lookupPolicyForExtensionWithIdentifier:(id)arg1;

- (void)dealloc;
- (void)invalidate;
- (id)initWithLookupPolicy:(id)arg1 delegate:(id)arg2;
- (id)_applyExtensionPredicateWithExtensionsIfNeeded:(id)arg1;
- (id)initWithLookupPolicy:(id)arg1 delegate:(id)arg2 extensionProvider:(id)arg3;

@end
