/*
 Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

@class WFNetworkScanRecord;

@interface WFStubInterface

{
    _Bool _currentNetworkIsDirected;
    _Bool _ipv4SelfAssigned;
    _Bool _hasNoGatewayIP;
    WFNetworkScanRecord *_currentNetwork;
}

@property _Bool currentNetworkIsDirected;
@property _Bool ipv4SelfAssigned;
@property _Bool hasNoGatewayIP;

- (void)setCurrentNetwork:(id)arg1;
- (id)currentNetwork;
- (id)interfaceName;

@end
