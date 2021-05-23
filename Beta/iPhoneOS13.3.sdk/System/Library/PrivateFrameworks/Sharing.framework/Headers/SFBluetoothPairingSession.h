/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class NSData, NSString, WPClient;

@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction;

@interface SFBluetoothPairingSession : NSObject

{
    char _btAddrStr[32];
    _Bool _btConfigured;
    _Bool _btConnecting;
    struct BTDeviceImpl *_btDevice;
    _Bool _btDisconnected;
    struct BTPairingAgentImpl *_btPairingAgent;
    _Bool _btPairingAgentStarted;
    struct BTSessionImpl *_btSession;
    _Bool _btSessionAddedServiceCallback;
    _Bool _btSessionAttaching;
    _Bool _btStarted;
    _Bool _invalidateCalled;
    unsigned int _retryCount;
    _Bool _retryOnDetach;
    NSObject<OS_dispatch_source> *_retryTimer;
    double _startTime;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    NSObject<OS_os_transaction> *_transaction;
    struct LogCategory *_ucat;
    WPClient *_wpClient;
    _Bool _aggregate;
    _Bool _connectOnly;
    _Bool _disconnectOnly;
    _Bool _guestMode;
    _Bool _softwareVolume;
    _Bool _userNotInContacts;
    unsigned int _deviceVersion;
    CDUnknownBlockType _completionHandler;
    NSString *_deviceAddress;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_guestAddress;
    NSData *_guestKey;
    NSString *_name;
}

@property (nonatomic) _Bool aggregate;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (nonatomic) _Bool connectOnly;
@property (copy, nonatomic) NSString *deviceAddress;
@property (nonatomic, readonly) unsigned int deviceVersion;
@property (nonatomic) _Bool disconnectOnly;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) NSString *guestAddress;
@property (copy, nonatomic) NSData *guestKey;
@property (nonatomic) _Bool guestMode;
@property (copy, nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) _Bool softwareVolume;
@property (nonatomic) _Bool userNotInContacts;

- (id)init;
- (void)dealloc;
- (void)_activate;
- (void)invalidate;
- (void)_invalidate;
- (void)activate;
- (int)_btEnsureStarted;
- (void)_btEnsureStopped;
- (void)_completed:(int)arg1;
- (void)_btDeletePairingAndRetry;

@end
