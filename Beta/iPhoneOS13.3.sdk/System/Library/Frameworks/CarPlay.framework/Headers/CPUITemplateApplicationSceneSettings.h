/*
 Image: /System/Library/Frameworks/CarPlay.framework/CarPlay
 */

#import <UIKit/UIApplicationSceneSettings.h>

@class NSObject, NSString;

@protocol OS_xpc_object;

@interface CPUITemplateApplicationSceneSettings : UIApplicationSceneSettings

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSObject<OS_xpc_object> *endpoint;

- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

@end
