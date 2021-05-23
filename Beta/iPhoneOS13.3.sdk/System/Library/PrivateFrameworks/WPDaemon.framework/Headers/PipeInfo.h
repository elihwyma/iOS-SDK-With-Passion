/*
 Image: /System/Library/PrivateFrameworks/WPDaemon.framework/WPDaemon
 */

#import <Foundation/NSObject.h>

@class CBScalablePipe, PipeDataTransfer;

@protocol OS_dispatch_source, OS_voucher;

@interface PipeInfo : NSObject

{
    struct pthread_override_s *_qosOverride;
    struct pthread_override_s *_socketThreadQOSOverride;
    _Bool _newProtocol;
    _Bool _versionInfoSent;
    _Bool _versionInfoReceived;
    _Bool _pipeDidConnectSent;
    unsigned char _version;
    unsigned char _localVersion;
    _Bool _useConnectStatusPDU;
    _Bool _connectionInitiator;
    unsigned int _supportedFeatures;
    unsigned int _localSupportedFeatures;
    NSObject<OS_dispatch_source> *_pipeReadSource;
    CBScalablePipe *_pipe;
    NSObject<OS_voucher> *_voucher;
    PipeDataTransfer *_pipeDataTransfer;
}

@property (retain) NSObject<OS_dispatch_source> *pipeReadSource;
@property (retain) CBScalablePipe *pipe;
@property (retain) NSObject<OS_voucher> *voucher;
@property _Bool newProtocol;
@property _Bool versionInfoSent;
@property _Bool versionInfoReceived;
@property _Bool pipeDidConnectSent;
@property unsigned char version;
@property unsigned int supportedFeatures;
@property (retain) PipeDataTransfer *pipeDataTransfer;
@property unsigned char localVersion;
@property unsigned int localSupportedFeatures;
@property _Bool useConnectStatusPDU;
@property _Bool connectionInitiator;

- (void)dealloc;
- (id)description;
- (void)releaseQOSOverride;
- (void)applyQOSOverride;

@end
