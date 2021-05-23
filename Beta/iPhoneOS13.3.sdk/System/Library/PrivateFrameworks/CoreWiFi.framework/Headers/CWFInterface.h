/*
 Image: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
 */

#import <Foundation/NSObject.h>

@class CWFClient, NSString;

@interface CWFInterface : NSObject

{
    CWFClient *_client;
    NSString *_interfaceName;
}

@property (retain, nonatomic) CWFClient *client;
@property (copy, nonatomic) NSString *interfaceName;

+ (id)interfaceWithClient:(id)arg1 interfaceName:(id)arg2;

- (id)countryCode;
- (id)channel;
- (unsigned long long)securityType;
- (id)IPv6Addresses;
- (id)IPv4Addresses;
- (id)capabilities;
- (_Bool)wakeOnWirelessEnabled;
- (id)MACAddress;
- (id)SSID;
- (id)networkName;
- (id)BSSID;
- (long long)RSSI;
- (long long)noise;
- (_Bool)setChannel:(id)arg1 error:(id *)arg2;
- (_Bool)setAWDLPeerTrafficRegistration:(id)arg1 error:(id *)arg2;
- (long long)WEPSubtype;
- (long long)WAPISubtype;
- (id)DNSServerAddresses;
- (unsigned int)EAP8021XSupplicantState;
- (unsigned int)EAP8021XControlMode;
- (unsigned int)EAP8021XControlState;
- (int)EAP8021XClientStatus;
- (int)PHYMode;
- (id)__authDataFromClient;
- (int)__flagsForChannelWidth:(int)arg1;
- (id)supportedChannelsWithCountryCode:(id)arg1;
- (id)virtualInterfaceWithRole:(int)arg1;
- (id)virtualInterfaceNames;
- (id)parentInterfaceName;
- (int)virtualInterfaceRole;
- (_Bool)setPower:(_Bool)arg1 error:(id *)arg2;
- (id)performScanWithParameters:(id)arg1 error:(id *)arg2;
- (id)performScanWithParameters:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)performANQPWithParameters:(id)arg1 error:(id *)arg2;
- (id)performANQPWithParameters:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (_Bool)associateWithParameters:(id)arg1 error:(id *)arg2;
- (id)associateWithParameters:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)disassociateWithReason:(long long)arg1;
- (id)currentScanResult;
- (id)currentKnownNetworkProfile;
- (_Bool)powerOn;
- (id)SSIDHash;
- (id)BSSIDHash;
- (double)txRate;
- (double)txPower;
- (id)authType;
- (int)opMode;
- (int)supportedPHYModes;
- (id)supportedChannel:(unsigned long long)arg1 width:(int)arg2 countryCode:(id)arg3;
- (unsigned long long)MCSIndex;
- (unsigned long long)guardInterval;
- (unsigned long long)numberOfSpatialStreams;
- (unsigned long long)DTIMInterval;
- (id)AWDLInterface;
- (id)APSTAInterface;
- (id)IO80211ControllerInfo;
- (id)IO80211InterfaceInfo;
- (id)roamStatus;
- (id)joinStatus;
- (id)autoJoinStatus;
- (id)linkDownStatus;
- (id)networkServiceID;
- (id)networkServiceName;
- (_Bool)isNetworkServiceEnabled;
- (id)IPv4RouterAddress;
- (id)IPv6RouterAddress;
- (id)DHCPLeaseStartedAt;
- (id)DHCPLeaseExpiresAt;
- (_Bool)startAWDLPeerAssistedDiscoveryWithParameters:(id)arg1 error:(id *)arg2;
- (void)stopAWDLPeerAssistedDiscovery;
- (id)systemAWDLPeerTrafficRegistrations;
- (id)AWDLPreferredChannels;
- (id)AWDLSyncEnabled;
- (id)AWDLSyncState;
- (id)AWDLSyncChannelSequence;
- (id)AWDLStrategy;
- (id)AWDLElectionParameters;
- (id)AWDLPeerDatabase;
- (id)AWDLSocialTimeSlots;
- (id)AWDLElectionID;
- (id)AWDLElectionRSSIThresholds;
- (id)AWDLMasterChannel;
- (id)AWDLSecondaryMasterChannel;
- (id)AWDLOpMode;
- (id)AWDLSyncParameters;
- (id)AWDLStatistics;
- (id)AWDLSidecarDiagnostics;
- (id)rangingCapabilities;
- (_Bool)setRangeable:(_Bool)arg1 peerList:(id)arg2 error:(id *)arg3;
- (id)performRangingWithPeerList:(id)arg1 timeout:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;
- (id)performRangingWithPeerList:(id)arg1 timeout:(unsigned long long)arg2 error:(id *)arg3;

@end
