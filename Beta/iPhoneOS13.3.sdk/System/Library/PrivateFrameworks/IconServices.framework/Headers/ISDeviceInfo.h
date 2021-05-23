/*
 Image: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface ISDeviceInfo : NSObject

{
    unsigned long long _screenClass;
    unsigned long long _deviceClass;
    unsigned long long _deviceSubtype;
    double _screenScale;
}

@property (readonly) int screenClass;
@property (readonly) int deviceClass;
@property (readonly) double screenScale;
@property (readonly) struct CGSize homeScreenIconSize;
@property (readonly) struct CGSize largeHomeScreenIconSize;
@property (readonly) struct CGSize messagesLauncherIconSize;
@property (readonly) unsigned long long ideom;
@property (readonly) unsigned long long deviceSubtype;

+ (id)sharedInstance;

- (id)init;

@end
