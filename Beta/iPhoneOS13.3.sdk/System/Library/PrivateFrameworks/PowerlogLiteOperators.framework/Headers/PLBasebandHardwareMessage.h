/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <PowerlogLiteOperators/PLBasebandMessage.h>

@interface PLBasebandHardwareMessage : PLBasebandMessage

{
    struct _PLBasebandHWStatsHeader *_header;
    struct _PLBasebandHWStatsSystem *_system;
    struct _PLBasebandHWStatsARMPerf *_armPerf;
    struct _PLBasebandHWStatsMDSP *_mdsp;
    struct _PLBasebandHWOnOffComponentStats *_mdm;
    struct _PLBasebandHWStatsADSP *_adsp;
    struct _PLBasebandHWOnOffComponentStats *_adm;
    struct _PLBasebandHWOnOffComponentStats *_gps;
    struct _PLBasebandHWOnOffComponentStats *_usb;
    struct _PLBasebandHWStatsUART *_uart;
    struct _PLBasebandHWOnOffComponentStats *_spi;
    struct _PLBasebandHWStatsRXRSSI *_rx;
    struct _PLBasebandHWStatsTXPower *_tx;
    unsigned int _duration;
}

@property (nonatomic) struct _PLBasebandHWStatsHeader *header;
@property (nonatomic) struct _PLBasebandHWStatsSystem *system;
@property (nonatomic) struct _PLBasebandHWStatsARMPerf *armPerf;
@property (nonatomic) struct _PLBasebandHWStatsMDSP *mdsp;
@property (nonatomic) struct _PLBasebandHWOnOffComponentStats *mdm;
@property (nonatomic) struct _PLBasebandHWStatsADSP *adsp;
@property (nonatomic) struct _PLBasebandHWOnOffComponentStats *adm;
@property (nonatomic) struct _PLBasebandHWOnOffComponentStats *gps;
@property (nonatomic) struct _PLBasebandHWOnOffComponentStats *usb;
@property (nonatomic) struct _PLBasebandHWStatsUART *uart;
@property (nonatomic) struct _PLBasebandHWOnOffComponentStats *spi;
@property (nonatomic) struct _PLBasebandHWStatsRXRSSI *rx;
@property (nonatomic) struct _PLBasebandHWStatsTXPower *tx;
@property (nonatomic, readonly) unsigned int level;
@property unsigned int logDuration;
@property (nonatomic, readonly) unsigned int revision;

- (id)initWithData:(id)arg1;
- (void)parseData:(id)arg1;
- (void)logRawWithLogger:(id)arg1;
- (void)logHeaderWithLogger:(id)arg1;
- (void)logPeripheralsWithLogger:(id)arg1;
- (id)convertUint32ArrayToNSArray:(unsigned int *)arg1 ofSize:(unsigned int)arg2;
- (id)convertUint64ArrayToNSArray:(unsigned long long *)arg1 ofSize:(unsigned int)arg2;
- (void)logWithLogger:(id)arg1;
- (void)logProcessorWithLogger:(id)arg1;
- (void)logModemAppWithLogger:(id)arg1;
- (void)logRFWithLogger2:(id)arg1;
- (id)convertUint8ArrayToNSArray:(char *)arg1 ofSize:(unsigned int)arg2;
- (id)convertUint16ArrayToNSArray:(unsigned short *)arg1 ofSize:(unsigned int)arg2;
- (unsigned int)sumHardwareStat:(unsigned int *)arg1 ofSize:(unsigned int)arg2;
- (void)formatArray:(unsigned int *)arg1 ofSize:(unsigned int)arg2 inString:(id)arg3;
- (void)formatArray:(unsigned int *)arg1 ofSize:(unsigned int)arg2 inString:(id)arg3 inReverse:(_Bool)arg4;
- (void)formatArray:(unsigned int *)arg1 ofSize:(unsigned int)arg2 withMultiplier:(float)arg3 inString:(id)arg4 inReverse:(_Bool)arg5;
- (id)convertToObjectArray:(unsigned int *)arg1 ofSize:(unsigned int)arg2;
- (void)formatOnOffStates:(struct _PLBasebandHWOnOffComponentStats *)arg1 inString:(id)arg2;
- (void)formatArray:(unsigned int *)arg1 ofSize:(unsigned int)arg2 withMultiplier:(float)arg3 inString:(id)arg4;
- (id)convertUint32ArrayToNSArray:(unsigned int *)arg1 ofSize:(unsigned int)arg2 andFill:(unsigned int)arg3;
- (id)convertToObjectArrayPercentage:(unsigned int *)arg1 ofSize:(unsigned int)arg2;

@end
