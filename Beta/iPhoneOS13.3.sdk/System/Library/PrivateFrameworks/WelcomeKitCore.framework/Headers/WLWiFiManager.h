/*
 Image: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
 */

#import <Foundation/NSObject.h>

@interface WLWiFiManager : NSObject

{
    struct __WiFiManagerClient *_ref;
}

@property (nonatomic) struct __WiFiManagerClient *ref;
@property (nonatomic, readonly) _Bool isTetheringSupported;

- (id)init;
- (void)dealloc;
- (void)disable;
- (void)enable;
- (id)createDeviceClient;

@end
