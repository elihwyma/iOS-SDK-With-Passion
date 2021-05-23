/*
 Image: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
 */

#import <Sharing/SFDevice.h>

@interface SFDevice (DEDSupport)

- (_Bool)isWithinDEDRange;
- (_Bool)isValidDEDPingDevice;
- (_Bool)isValidDEDPongDevice;

@end
