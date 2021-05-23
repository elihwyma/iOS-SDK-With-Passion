/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <PowerlogLiteOperators/PLBasebandHardwareMessage.h>

@interface PLMav4BasebandHardwareMessage : PLBasebandHardwareMessage

{
    struct _PLMav4BasebandHWStatsHeader *_mav4_header;
    struct _PLMav4BasebandHWStatsSystem *_mav4_system;
    struct _PLMav4BasebandHWStatsARMPerf *_mav4_armPerf;
    struct _PLMav4BasebandHWStatsMDSP *_mav4_mdsp;
    struct _PLMav4BasebandHWOnOffComponentStats *_mav4_mdm;
    struct _PLMav4BasebandHWStatsQDSP *_mav4_qdsp;
    struct _PLMav4BasebandHWOnOffComponentStats *_mav4_adm;
    struct _PLMav4BasebandHWOnOffComponentStats *_mav4_gps;
    struct _PLMav4BasebandHWOnOffComponentStats *_mav4_usb;
    struct _PLMav4BasebandHWOnOffComponentStats *_mav4_uart;
    struct _PLMav4BasebandHWOnOffComponentStats *_mav4_spi;
    struct _PLMav4BasebandHWStatsRX *_mav4_rx;
    struct _PLMav4BasebandHWStatsTX *_mav4_tx;
    struct _PLMav4BasebandHWSleepVeto *_mav4_sleep_qdsp;
    struct _PLMav4BasebandHWSleepVeto *_mav4_sleep_arm;
    unsigned int _mav4_duration;
}

@property (nonatomic) struct _PLMav4BasebandHWOnOffComponentStats *usb;
@property (nonatomic) struct _PLMav4BasebandHWStatsMDSP *mdsp;
@property (nonatomic) struct _PLMav4BasebandHWOnOffComponentStats *mdm;
@property (nonatomic) struct _PLMav4BasebandHWStatsQDSP *qdsp;
@property (nonatomic) struct _PLMav4BasebandHWStatsRX *rx;
@property (nonatomic) struct _PLMav4BasebandHWStatsTX *tx;
@property unsigned int logDuration;
@property (nonatomic, readonly) unsigned char level;
@property (nonatomic, readonly) unsigned short hw_rev;
@property (nonatomic, readonly) unsigned short sw_rev;
@property (nonatomic) struct _PLMav4BasebandHWStatsHeader *header;
@property (nonatomic) struct _PLMav4BasebandHWStatsSystem *system;
@property (nonatomic) struct _PLMav4BasebandHWStatsARMPerf *armPerf;
@property (nonatomic) struct _PLMav4BasebandHWOnOffComponentStats *adm;
@property (nonatomic) struct _PLMav4BasebandHWOnOffComponentStats *gps;
@property (nonatomic) struct _PLMav4BasebandHWOnOffComponentStats *uart;
@property (nonatomic) struct _PLMav4BasebandHWOnOffComponentStats *spi;
@property (nonatomic) struct _PLMav4BasebandHWSleepVeto *sleep_qdsp;
@property (nonatomic) struct _PLMav4BasebandHWSleepVeto *sleep_arm;

- (id)initWithData:(id)arg1;
- (void)parseData:(id)arg1;
- (void)logHeaderWithLogger:(id)arg1;
- (void)logPeripheralsWithLogger:(id)arg1;
- (void)logWithLogger:(id)arg1;
- (void)logProcessorWithLogger:(id)arg1;
- (void)logModemAppWithLogger:(id)arg1;
- (void)logRFWithLogger2:(id)arg1;
- (id)indexToRAT:(unsigned long long)arg1;
- (void)logSleepWithLogger:(id)arg1;

@end
