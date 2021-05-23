/*
 Image: /System/Library/PrivateFrameworks/CarPlayUIServices.framework/CarPlayUIServices
 */

#import <UIKit/UIMutableApplicationSceneSettings.h>

@class NSString;

@interface CRSUIMutableProxyApplicationSceneSettings : UIMutableApplicationSceneSettings

@property (copy, nonatomic) NSString *proxiedApplicationBundleIdentifier;
@property (nonatomic) _Bool proxiedApplicationLinkedOnOrAfterYukon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
