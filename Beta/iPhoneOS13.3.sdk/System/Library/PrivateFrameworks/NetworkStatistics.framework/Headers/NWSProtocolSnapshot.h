/*
 Image: /System/Library/PrivateFrameworks/NetworkStatistics.framework/NetworkStatistics
 */

#import <NetworkStatistics/NWSSnapshot.h>

@class NSData, NSDate, NSString;

@interface NWSProtocolSnapshot : NWSSnapshot

{
    _Bool _interfaceUnknown;
    _Bool _interfaceLoopback;
    _Bool _interfaceCellular;
    _Bool _interfaceCellularViaFallback;
    _Bool _interfaceWifi;
    _Bool _interfaceWired;
    _Bool _interfaceAWDL;
    _Bool _interfaceExpensive;
    _Bool _interfaceCompanionLink;
    _Bool _countsIncludeHeaderOverhead;
    unsigned int _interfaceIndex;
    unsigned int _receiveBufferSize;
    unsigned int _receiveBufferUsed;
    unsigned int _trafficClass;
    int _processID;
    int _epid;
    NSDate *_flowStartTimestamp;
    double _flowDuration;
    unsigned long long _flowStartContinuousTime;
    unsigned long long _uniqueProcessID;
    NSString *_processName;
    unsigned long long _eupid;
    NSString *_uuid;
    NSString *_euuid;
    NSString *_vuuid;
    NSData *_localAddress;
    NSData *_remoteAddress;
    unsigned long long _networkActivityMapStartTime;
    unsigned long long _networkActivityMapPart1;
    unsigned long long _networkActivityMapPart2;
    unsigned long long _eventFlags;
}

@property (readonly) NSDate *flowStartTimestamp;
@property (readonly) double flowDuration;
@property (readonly) unsigned long long flowStartContinuousTime;
@property (readonly) unsigned int interfaceIndex;
@property (readonly) unsigned int receiveBufferSize;
@property (readonly) unsigned int receiveBufferUsed;
@property (readonly) unsigned int trafficClass;
@property (readonly) unsigned long long uniqueProcessID;
@property (readonly) int processID;
@property (readonly) NSString *processName;
@property (readonly) unsigned long long eupid;
@property (readonly) int epid;
@property (readonly) NSString *uuid;
@property (readonly) NSString *euuid;
@property (readonly) NSString *vuuid;
@property (readonly) NSData *localAddress;
@property (readonly) NSData *remoteAddress;
@property (readonly) _Bool interfaceUnknown;
@property (readonly) _Bool interfaceLoopback;
@property (readonly) _Bool interfaceCellular;
@property (readonly) _Bool interfaceCellularViaFallback;
@property (readonly) _Bool interfaceWifi;
@property (readonly) _Bool interfaceWired;
@property (readonly) _Bool interfaceAWDL;
@property (readonly) _Bool interfaceExpensive;
@property (readonly) _Bool interfaceCompanionLink;
@property (readonly) _Bool countsIncludeHeaderOverhead;
@property (readonly) unsigned long long networkActivityMapStartTime;
@property (readonly) unsigned long long networkActivityMapPart1;
@property (readonly) unsigned long long networkActivityMapPart2;
@property (readonly) unsigned long long eventFlags;

+ (void)initialize;

- (id)_createNSUUIDForBytes:(unsigned char [16])arg1;
- (double)_intervalWithContinuousTime:(unsigned long long)arg1;
- (id)_dateWithContinuousTime:(unsigned long long)arg1;
- (double)_referenceIntervalWithContinuousTime:(unsigned long long)arg1;

@end
