/*
 Image: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
 */

#import <Foundation/NSObject.h>

@class RPDevice, RPLegacyDeviceDiscovery, RPLegacySession;

__attribute__((visibility("hidden")))
@interface RPDeviceContext : NSObject

{
    _Bool _reported;
    int _state;
    RPDevice *_device;
    RPLegacyDeviceDiscovery *_discovery;
    RPLegacySession *_session;
}

@property (retain, nonatomic) RPDevice *device;
@property (retain, nonatomic) RPLegacyDeviceDiscovery *discovery;
@property (nonatomic) _Bool reported;
@property (retain, nonatomic) RPLegacySession *session;
@property (nonatomic) int state;

- (void)invalidate;
- (void)pairVerify;
- (void)systemInfoResponse:(id)arg1 error:(id)arg2;

@end
