/*
 Image: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface WLWiFiNetwork : NSObject

{
    struct __WiFiNetwork *_ref;
}

@property (nonatomic) struct __WiFiNetwork *ref;
@property (nonatomic, readonly) NSString *ssid;

- (void)dealloc;
- (id)initWithWiFiNetworkRef:(struct __WiFiNetwork *)arg1;

@end
