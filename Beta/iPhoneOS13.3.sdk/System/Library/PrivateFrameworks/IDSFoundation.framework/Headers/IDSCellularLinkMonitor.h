/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

@class CoreTelephonyClient, NSHashTable, NSMutableDictionary, NSString;

@protocol CoreTelephonyClientDataDelegate;

@interface IDSCellularLinkMonitor : NSObject

{
    struct __CTServerConnection *_ctServerConnection;
    CoreTelephonyClient *_ctClient;
    id <CoreTelephonyClientDataDelegate> _ctClientDataDelegate;
    _Bool _dataUsable;
    NSString *_dataIndicator;
    NSString *_cellularDataInterfaceName;
    unsigned int _radioAccessTechnology;
    unsigned int _cellularMTU;
    NSHashTable *_cellularLinkDelegates;
    NSMutableDictionary *_notificationRegInfo;
}

@property (readonly) _Bool dataUsable;
@property (readonly) NSString *cellularDataInterfaceName;
@property (readonly) unsigned int radioAccessTechnology;
@property (readonly) unsigned int cellularMTU;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)reset;
- (void)_setupCTServerConnection;
- (void)processCTConnectionStateChangeNotification:(id)arg1 connectionStatus:(id)arg2;
- (_Bool)_updateCellularDataInterface:(_Bool)arg1;
- (_Bool)_updateRadioAccessTechnology;
- (_Bool)_updateCellularMTU;
- (void)_updateDataStatus;
- (id)_getCurrentDataSimContext:(id)arg1 inContextArray:(id)arg2;
- (id)_getCTXPCServiceSubscriptionContext;
- (_Bool)_updateCellularDataInterfaceNameByConnectionState:(int)arg1 isStateActiveRequired:(_Bool)arg2 interfaceName:(id)arg3;
- (_Bool)_dataContextUsable:(id)arg1 dataStatus:(id)arg2;
- (void)removePacketNotificationFilter;
- (void)addCellularLinkDelegate:(id)arg1;
- (void)removeCellularLinkDelegate:(id)arg1;
- (_Bool)setPacketNotificationFilter:(struct sockaddr *)arg1 remote:(struct sockaddr *)arg2 uniqueTag:(unsigned int)arg3 callType:(unsigned char)arg4;
- (_Bool)dropIPPackets:(id)arg1 localAddress:(struct sockaddr *)arg2 remoteAddress:(struct sockaddr *)arg3 isRelay:(_Bool)arg4 channelNumberMSB:(unsigned char)arg5;
- (void)updateProtocolQualityOfService:(_Bool)arg1 localAddress:(struct sockaddr *)arg2;
- (void)currentCellularSignalStrength:(int *)arg1 signalStrength:(int *)arg2 signalGrade:(int *)arg3;
- (void)registerCellularDataStatusNotification:(_Bool)arg1;

@end
