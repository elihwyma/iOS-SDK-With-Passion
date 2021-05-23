/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSString, SFDevice, SFSession;

@protocol OS_dispatch_queue;

@interface SFRemoteAutoFillSession : NSObject

{
    _Bool _activateCalled;
    NSString *_contextBundleID;
    NSString *_contextLocalizedAppName;
    int _contextRequestState;
    NSString *_contextUnlocalizedAppName;
    NSArray *_contextAssociatedDomains;
    NSString *_contextURL;
    _Bool _invalidateCalled;
    _Bool _pairingFinishedNotified;
    NSDate *_pairClock;
    int _pairState;
    struct PairingSubstate _pairSubstate;
    int _passwordPickerState;
    NSString *_pickedPassword;
    NSString *_pickedUsername;
    int _sendCredentialsState;
    SFSession *_session;
    int _sessionState;
    _Bool _prefPairContactsDisabled;
    _Bool _prefPairHomeKitDisabled;
    _Bool _prefPairVerifyDisabled;
    _Bool _prefPairVisualDisabled;
    CDUnknownBlockType _completedHandler;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    SFDevice *_peerDevice;
    CDUnknownBlockType _pairingFinishedHandler;
    CDUnknownBlockType _promptForPINHandler;
    CDUnknownBlockType _promptForPickerHandler;
}

@property (copy, nonatomic) CDUnknownBlockType completedHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) SFDevice *peerDevice;
@property (copy, nonatomic) CDUnknownBlockType pairingFinishedHandler;
@property (copy, nonatomic) CDUnknownBlockType promptForPINHandler;
@property (copy, nonatomic) CDUnknownBlockType promptForPickerHandler;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)_cleanup;
- (void)activate;
- (void)_run;
- (void)tryPIN:(id)arg1;
- (void)_completedWithError:(id)arg1;
- (int)_runPair;
- (void)_receivedObject:(id)arg1 flags:(unsigned int)arg2;
- (int)_runPairVerify;
- (int)_runSessionStart;
- (int)_runContextRequest;
- (int)_runPasswordPicker;
- (int)_runSendCredentials;
- (int)_runPairHomeKit;
- (int)_runPairContacts;
- (int)_runPairVisual;
- (int)_runPairPIN;
- (void)_handleContextRequestResponse:(id)arg1 error:(id)arg2;
- (void)_handlePasswordPickerResponse:(id)arg1 password:(id)arg2 error:(id)arg3;
- (void)_handleSendCredentialsResponse:(id)arg1 error:(id)arg2;

@end
