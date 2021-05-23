/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString, SFDevice, SFSession;

@protocol OS_dispatch_queue;

@interface SFPasswordSharingSession : NSObject

{
    _Bool _activateCalled;
    _Bool _invalidateCalled;
    int _pairState;
    int _passwordShareState;
    SFSession *_sfSession;
    int _sfSessionState;
    NSDate *_shareClock;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_deviceName;
    NSString *_hashedEmail;
    NSString *_hashedPhone;
    NSString *_hotspotPSK;
    SFDevice *_peerDevice;
    CDUnknownBlockType _progressHandler;
    CDUnknownBlockType _promptForPINHandler;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) NSString *deviceName;
@property (retain, nonatomic) NSString *hashedEmail;
@property (retain, nonatomic) NSString *hashedPhone;
@property (retain, nonatomic) NSString *hotspotPSK;
@property (retain, nonatomic) SFDevice *peerDevice;
@property (copy, nonatomic) CDUnknownBlockType progressHandler;
@property (copy, nonatomic) CDUnknownBlockType promptForPINHandler;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)_cleanup;
- (void)activate;
- (void)_run;
- (void)tryPIN:(id)arg1;
- (void)_completedWithError:(id)arg1;
- (int)_runSFSessionStart;
- (int)_runPair;
- (int)_runPasswordShare;
- (void)_receivedObject:(id)arg1 flags:(unsigned int)arg2;
- (void)_runPasswordShareSendInfo;
- (void)_runPasswordShareReceiveResponse:(id)arg1;

@end
