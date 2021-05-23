/*
 Image: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
 */

#import <WiFiKitUI/Swift-Protocol.h>

@class NSString;

@protocol WFNetworkListRecord;

@protocol WFNetworkListing <Swift>

@property (nonatomic) _Bool showOtherNetwork;
@property float currentNetworkScaledRSSI;
@property (retain) id <WFNetworkListRecord> currentNetwork;
@property long long currentNetworkState;
@property unsigned long long currentNetworkSignalBars;
@property (nonatomic) long long deviceCapability;
@property (copy, nonatomic) NSString *currentNetworkSubtitle;
@property (nonatomic) _Bool disabled;
@property (nonatomic) _Bool userAutoJoinEnabled;

- (unsigned short)refresh;
- (unsigned short)setNetworks: /* Error: Ran out of types for this method. */;
- (unsigned short)setListDelegate: /* Error: Ran out of types for this method. */;
- (unsigned short)powerStateDidChange: /* Error: Ran out of types for this method. */;

@end
