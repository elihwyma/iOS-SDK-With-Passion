/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

#import <UIKit/UIApplicationSceneSettings.h>

@class BSServiceConnectionEndpoint, NSString;

@interface SBSUIStarkNotificationsSceneSettings : UIApplicationSceneSettings

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly, getter=isConnectedWirelessly) _Bool connectedWirelessly;
@property (nonatomic, readonly, getter=isGeoSupported) _Bool geoSupported;
@property (nonatomic, readonly) unsigned long long suspensionReasons;
@property (nonatomic, readonly) BSServiceConnectionEndpoint *openServiceEndpoint;

- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;

@end
