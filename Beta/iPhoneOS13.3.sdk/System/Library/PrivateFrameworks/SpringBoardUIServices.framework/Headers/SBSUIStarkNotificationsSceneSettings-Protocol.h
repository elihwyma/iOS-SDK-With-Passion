/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

#import <SpringBoardUIServices/Swift-Protocol.h>

@class BSServiceConnectionEndpoint;

@protocol SBSUIStarkNotificationsSceneSettings <Swift>

@property (nonatomic, readonly, getter=isConnectedWirelessly) _Bool connectedWirelessly;
@property (nonatomic, readonly, getter=isGeoSupported) _Bool geoSupported;
@property (nonatomic, readonly) unsigned long long suspensionReasons;
@property (nonatomic, readonly) BSServiceConnectionEndpoint *openServiceEndpoint;

@end
