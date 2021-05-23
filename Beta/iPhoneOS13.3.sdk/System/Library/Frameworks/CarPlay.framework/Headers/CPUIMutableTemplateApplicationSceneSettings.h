/*
 Image: /System/Library/Frameworks/CarPlay.framework/CarPlay
 */

#import <UIKit/UIMutableApplicationSceneSettings.h>

@class NSObject, NSString;

@protocol OS_xpc_object;

@interface CPUIMutableTemplateApplicationSceneSettings : UIMutableApplicationSceneSettings

@property (copy, nonatomic) NSObject<OS_xpc_object> *endpoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
