/*
 Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, RPCompanionLinkClient;

@protocol _TVRCRapportDeviceQueryDelegate;

@interface _TVRCRapportDeviceQuery : NSObject

{
    RPCompanionLinkClient *_companionLinkClient;
    NSMutableDictionary *_wrapperToIdentifierMapping;
    NSMutableDictionary *_deviceRecords;
    _Bool _unpairedBLEDevicesReported;
    id <_TVRCRapportDeviceQueryDelegate> _delegate;
}

@property (weak, nonatomic) id <_TVRCRapportDeviceQueryDelegate> delegate;

- (void)dealloc;
- (void)stop;
- (void)start;
- (void)_disconnectAllDevices;
- (void)_deviceFound:(id)arg1 unpairedBLE:(_Bool)arg2;
- (_Bool)_shouldReportDevice:(id)arg1;
- (void)_deviceLost:(id)arg1;
- (_Bool)_recordExistsForIDS:(id)arg1;
- (void)_updateRecordForIDS:(id)arg1 addTransportForFlag:(unsigned long long)arg2;
- (void)_updateRecordForIDS:(id)arg1 removeTransportForFlag:(unsigned long long)arg2;
- (unsigned long long)_transportForStatusFlag:(unsigned long long)arg1;

@end
