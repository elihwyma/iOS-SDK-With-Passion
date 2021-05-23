/*
 Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

#import <NSObject.h>

@class ATIDSSocket, IDSDevice;

@interface ATIDSConnectionInfo : NSObject

{
    unsigned int _failureCount;
    IDSDevice *_device;
    long long _priority;
    double _wakeupTimestamp;
    unsigned long long _connectionState;
    ATIDSSocket *_socket;
}

@property (retain, nonatomic) IDSDevice *device;
@property (nonatomic) long long priority;
@property (nonatomic) double wakeupTimestamp;
@property (nonatomic) unsigned long long connectionState;
@property (nonatomic) unsigned int failureCount;
@property (retain, nonatomic) ATIDSSocket *socket;

- (id)init;
- (void)dealloc;

@end
