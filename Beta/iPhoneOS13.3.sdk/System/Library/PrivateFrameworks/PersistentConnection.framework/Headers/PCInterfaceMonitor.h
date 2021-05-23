/*
 Image: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

#import <Foundation/NSObject.h>

#import <PersistentConnection/Swift-Protocol.h>

@class NSMapTable, NSString;

@protocol PCInterfaceUsabilityMonitorProtocol;

@interface PCInterfaceMonitor : NSObject <Swift>

{
    id <PCInterfaceUsabilityMonitorProtocol> _internal;
    NSMapTable *_delegateMap;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
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

+ (id)sharedInstanceForIdentifier:(long long)arg1;
+ (_Bool)isNetworkingPowerExpensiveToUse;
+ (_Bool)isBadLinkQuality:(int)arg1;
+ (id)stringForLinkQuality:(int)arg1;
+ (_Bool)isPoorLinkQuality:(int)arg1;

- (void)dealloc;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (void)interfaceLinkQualityChanged:(id)arg1 previousLinkQuality:(int)arg2;
- (void)interfaceReachabilityChanged:(id)arg1;
- (void)interfaceRadioHotnessChanged:(id)arg1;
- (id)initWithInterfaceIdentifier:(long long)arg1;

@end
