/*
 Image: /System/Library/PrivateFrameworks/EAFirmwareUpdater.framework/EAFirmwareUpdater
 */

#import <Foundation/NSObject.h>

@class FirmwareBundle, HSModel, NSMutableData;

@protocol OS_dispatch_queue, iAUPServerDelegate;

@interface iAUPServer : NSObject

{
    id <iAUPServerDelegate> _delegate;
    int _serverState;
    int _parserState;
    _Bool _escapeInProgress;
    _Bool _byteEscape;
    _Bool _ackAppReentry;
    FirmwareBundle *_firmwareBundle;
    HSModel *_hsModel;
    unsigned int _telegramLength;
    unsigned char _telegramChecksum;
    NSMutableData *_telegramDataIn;
    unsigned short objectBlockTransferSizes[4];
    unsigned int _firmwareImageBaseTransferAddress;
    unsigned short _accessoryCapabilities;
    unsigned int _totalBytesDownloadedInCurrentSession;
    _Bool _startEventSent;
    _Bool _restartRequired;
    _Bool _sleepWakeRequired;
    _Bool _urgentUpdate;
    unsigned char _iAUPVersion;
    unsigned char _currentAsset;
    NSObject<OS_dispatch_queue> *_dispatchQ;
}

@property id <iAUPServerDelegate> delegate;
@property (retain, nonatomic) FirmwareBundle *firmwareBundle;
@property (nonatomic) _Bool byteEscape;
@property (nonatomic) _Bool ackAppReentry;
@property (nonatomic) int serverState;
@property (nonatomic) int parserState;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQ;
@property (nonatomic) unsigned char iAUPVersion;
@property (nonatomic) unsigned char currentAsset;
@property (nonatomic, readonly) _Bool restartRequired;
@property (nonatomic, readonly) _Bool sleepWakeRequired;
@property (nonatomic, readonly) _Bool urgentUpdate;

- (void)dealloc;
- (void)appendToLog:(id)arg1;
- (void)setHSModel:(id)arg1 fallbackModel:(id)arg2 error:(id)arg3;
- (id)initInstanceWithByteEscape:(_Bool)arg1;
- (_Bool)personalizationComplete;
- (id)getNumberOfBytesDownloadedInCurrentSession;
- (void)processInByte:(unsigned char)arg1;
- (void)resetParser;
- (char *)serverStateString:(int)arg1;
- (char *)parserStateString:(int)arg1;
- (char *)commandString:(int)arg1;
- (void)processInTelegram;
- (void)logCommand:(unsigned char)arg1 payload:(char *)arg2 length:(unsigned int)arg3;
- (void)processPersonalizationInfo:(char *)arg1 length:(unsigned int)arg2;
- (id)sendCommand:(unsigned char)arg1 payload:(char *)arg2 payload_length:(unsigned short)arg3;
- (void)setResumeInfo:(char *)arg1 length:(unsigned int)arg2;
- (void)processIdentifyCommand:(char *)arg1 length:(unsigned int)arg2;
- (void)processRequestDownloadCommand:(char *)arg1 length:(unsigned int)arg2;
- (void)processDownloadCompleteCommand:(char *)arg1 length:(unsigned int)arg2;
- (void)processNotifyAccessoryErrorCommand:(char *)arg1 length:(unsigned int)arg2;
- (unsigned char)appendByteWithEscaping:(unsigned char)arg1 toObject:(id *)arg2;
- (id)processManifestProperties:(char *)arg1 length:(unsigned int)arg2;
- (unsigned int)supportedTargetProductIDCode;
- (void)processDataFromAccessory:(id)arg1;
- (void)setBootloaderEntry;
- (char *)assetTypeString:(int)arg1;

@end
