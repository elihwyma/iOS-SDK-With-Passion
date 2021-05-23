/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <PowerlogLiteOperators/PLBasebandMessage.h>

@class NSData;

@interface PLBasebandEurekaMessage : PLBasebandMessage

{
    unsigned char _skip;
    struct _PLBasebandEventHeader *_header;
    NSData *_payload;
    struct _PLBasebandSystemSelectionEvent *_ssevent;
    char *_ssaction;
    char *_ssstate;
}

@property struct _PLBasebandEventHeader *header;
@property (retain) NSData *payload;
@property struct _PLBasebandSystemSelectionEvent *ssevent;
@property char *ssaction;
@property char *ssstate;
@property unsigned char skip;
@property (readonly) unsigned int eventCode;

- (id)initWithData:(id)arg1;
- (void)parseData:(id)arg1;
- (void)logWithLogger:(id)arg1;
- (id)payloadString;
- (id)tooShortErrorString;
- (id)eventSystemSelection;
- (id)actionSystemSelection;
- (id)stateSystemSelection;
- (id)cellularSystemStringSystemSelection:(char *)arg1;
- (id)convertCMCallConnectPayloadToDictionary:(struct _CMCallConnectPayload *)arg1;
- (id)convertCMCallOrigPayloadToDictionary:(struct _CMCallOrigPayload *)arg1;
- (id)convertCMCallConnectV2PayloadToDictionary:(struct _NewCMCallConnectPayload *)arg1;
- (id)convertCMCallOrigV2PayloadToDictionary:(struct _NewCMCallOrigPayload *)arg1;
- (id)cdmaExitString:(char *)arg1;
- (id)stateStringGSM:(char *)arg1;
- (id)stateStringWCDMA:(char *)arg1;
- (id)scanTypeStartWCDMA:(char *)arg1;
- (id)scanTypeStopWCDMA:(char *)arg1;
- (id)stateStringHSDPA:(char *)arg1;
- (id)stateStringHSPAPLUS_DC:(char *)arg1;
- (id)stateStringLTE:(char *)arg1;
- (id)estCauseLTE:(char *)arg1;
- (id)relCauseLTE:(char *)arg1;
- (id)iratStringLTE:(char *)arg1;
- (id)stateStringUTRANL1:(char *)arg1;
- (id)stateStringMotion:(char *)arg1;
- (id)stringForUnknownBytes:(unsigned int)arg1;
- (id)stateStringOOS:(char *)arg1;
- (id)eventStringOOS:(char *)arg1;
- (id)stateStringACC:(char *)arg1;
- (id)callTypeString:(char *)arg1;
- (id)eventStringACC:(char *)arg1;
- (id)stateStringHSUPA:(char *)arg1;
- (id)soCallTypeString:(char *)arg1;
- (id)termStringSystemSelection:(char *)arg1;
- (id)establishmentCauseStringWCDMA:(char *)arg1;
- (id)releaseCauseStringWCDMA:(char *)arg1;
- (id)pagingTypeWCDMA:(char *)arg1;
- (id)pagingCauseWCDMA:(char *)arg1;
- (id)searchPhaseStringPSSI:(char *)arg1;
- (id)ratStringPSSI:(char *)arg1;
- (id)procedureStringPSSI:(char *)arg1;
- (id)iratHOStringLTE:(char *)arg1;
- (id)smgmmEventType:(char *)arg1;
- (id)cellUpdateCause:(char *)arg1;

@end
