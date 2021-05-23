/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

#import <UIKit/UIMutableApplicationSceneSettings.h>

@class BSServiceConnectionEndpoint, NSString;

@interface SBSUIMutableStarkNotificationsSceneSettings : UIMutableApplicationSceneSettings

@property (nonatomic, getter=isConnectedWirelessly) _Bool connectedWirelessly;
@property (nonatomic, getter=isGeoSupported) _Bool geoSupported;
@property (nonatomic) unsigned long long suspensionReasons;
@property (retain, nonatomic) BSServiceConnectionEndpoint *openServiceEndpoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;

@end
