/*
 Image: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

#import <PersistentConnection/Swift-Protocol.h>

@class NSString;

@protocol PCInterfaceMonitorProtocol <Swift>

@property (nonatomic, readonly) long long interfaceIdentifier;
@property (nonatomic, readonly) int linkQuality;
@property (nonatomic, readonly) _Bool isInterfaceUsable;
@property (nonatomic, readonly) _Bool isInterfaceHistoricallyUsable;
@property (nonatomic, readonly) _Bool isInternetReachable;
@property (retain, nonatomic, readonly) NSString *linkQualityString;
@property (nonatomic, readonly) _Bool isPoorLinkQuality;
@property (nonatomic, readonly) _Bool isBadLinkQuality;
@property (nonatomic, readonly) _Bool isRadioHot;
@property (nonatomic, readonly) _Bool isNetworkingPowerExpensiveToUse;
@property (nonatomic, readonly) int currentRAT;
@property (nonatomic, readonly) _Bool isLTEWithCDRX;
@property (nonatomic, readonly) struct __CFString *wwanInterfaceName;
@property (nonatomic, readonly) NSString *networkCode;

@end
