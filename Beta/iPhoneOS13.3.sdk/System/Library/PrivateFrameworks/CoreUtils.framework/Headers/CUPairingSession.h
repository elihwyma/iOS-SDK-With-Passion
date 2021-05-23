/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@class CUAppleIDClient, CUPairedPeer, NSArray, NSData, NSDictionary, NSString;

@protocol OS_dispatch_queue;

@interface CUPairingSession : NSObject

{
    struct PairingSessionPrivate *_pairingSession;
    struct NSMutableDictionary *_pairingStreams;
    struct LogCategory *_ucat;
    unsigned int _flags;
    unsigned int _pinType;
    unsigned int _pinTypeActual;
    unsigned int _sessionType;
    NSDictionary *_acl;
    NSDictionary *_aclActual;
    NSDictionary *_additionalPeerInfo;
    NSDictionary *_additionalSelfInfo;
    NSArray *_allowedMACAddresses;
    unsigned long long _selfAppFlags;
    NSDictionary *_appInfoSelf;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_fixedPIN;
    NSString *_label;
    NSDictionary *_peerInfo;
    NSData *_mfiCertificateData;
    NSString *_mfiProductType;
    NSString *_mfiSerialNumber;
    NSData *_mfiToken;
    NSString *_myAppleID;
    CUAppleIDClient *_myAppleIDInfoClient;
    NSString *_peerAppleID;
    CDUnknownBlockType _completionHandler;
    CDUnknownBlockType _promptForPINHandler;
    CDUnknownBlockType _showPINHandlerEx;
    CDUnknownBlockType _showPINHandler;
    CDUnknownBlockType _hidePINHandler;
    CDUnknownBlockType _sendDataHandler;
    CDUnknownBlockType _signDataHandler;
    CDUnknownBlockType _verifySignatureHandler;
}

@property (copy, nonatomic) NSDictionary *acl;
@property (copy, nonatomic, readonly) NSDictionary *aclActual;
@property (copy, nonatomic) NSDictionary *additionalPeerInfo;
@property (copy, nonatomic) NSDictionary *additionalSelfInfo;
@property (copy, nonatomic) NSArray *allowedMACAddresses;
@property (nonatomic, readonly) unsigned long long peerAppFlags;
@property (nonatomic) unsigned long long selfAppFlags;
@property (copy, nonatomic, readonly) NSDictionary *appInfoPeer;
@property (copy, nonatomic) NSDictionary *appInfoSelf;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) NSString *fixedPIN;
@property (nonatomic) unsigned int flags;
@property (copy, nonatomic) NSString *label;
@property (nonatomic, readonly) CUPairedPeer *pairedPeer;
@property (copy, nonatomic, readonly) NSDictionary *peerInfo;
@property (nonatomic) unsigned int pinType;
@property (nonatomic, readonly) unsigned int pinTypeActual;
@property (nonatomic) unsigned int sessionType;
@property (copy, nonatomic) NSData *mfiCertificateData;
@property (copy, nonatomic) NSString *mfiProductType;
@property (copy, nonatomic) NSString *mfiSerialNumber;
@property (copy, nonatomic) NSData *mfiToken;
@property (copy, nonatomic) NSString *myAppleID;
@property (retain, nonatomic) CUAppleIDClient *myAppleIDInfoClient;
@property (copy, nonatomic) NSString *peerAppleID;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (copy, nonatomic) CDUnknownBlockType promptForPINHandler;
@property (copy, nonatomic) CDUnknownBlockType showPINHandlerEx;
@property (copy, nonatomic) CDUnknownBlockType showPINHandler;
@property (copy, nonatomic) CDUnknownBlockType hidePINHandler;
@property (copy, nonatomic) CDUnknownBlockType sendDataHandler;
@property (copy, nonatomic) CDUnknownBlockType signDataHandler;
@property (copy, nonatomic) CDUnknownBlockType verifySignatureHandler;

- (id)init;
- (void)dealloc;
- (void)_activate;
- (void)invalidate;
- (void)_cleanup;
- (void)activate;
- (void)_completed:(id)arg1;
- (void)receivedData:(id)arg1;
- (void)_receivedData:(id)arg1 flags:(unsigned int)arg2;
- (void)tryPIN:(id)arg1;
- (void)_tryPIN:(id)arg1;
- (id)openStreamWithName:(id)arg1 error:(id *)arg2;
- (id)openStreamWithName:(id)arg1 type:(int)arg2 error:(id *)arg3;
- (void)closeStream:(id)arg1;
- (int)deriveKeyWithSaltPtr:(const void *)arg1 saltLen:(unsigned long long)arg2 infoPtr:(const void *)arg3 infoLen:(unsigned long long)arg4 keyLen:(unsigned long long)arg5 outputKeyPtr:(void *)arg6;

@end
