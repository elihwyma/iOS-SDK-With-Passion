/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary;

@interface CTDeviceDataUsage : NSObject

{
    unsigned long long _periods;
    NSMutableDictionary *_apps;
    NSMutableDictionary *_uninstalledApps;
    NSMutableDictionary *_proxiedOnlyApps;
    NSMutableDictionary *_systemServices;
    NSArray *_wifiAssist;
}

@property unsigned long long periods;
@property (retain) NSMutableDictionary *apps;
@property (retain) NSMutableDictionary *uninstalledApps;
@property (retain) NSMutableDictionary *proxiedOnlyApps;
@property (retain) NSMutableDictionary *systemServices;
@property (retain) NSArray *wifiAssist;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dataUsage:(id)arg1 forPeriod:(unsigned long long)arg2;
- (id)totalDataUsage:(id)arg1 forPeriod:(unsigned long long)arg2;
- (id)totalDataUsedForPeriod:(unsigned long long)arg1;
- (id)appDataUsageForPeriod:(unsigned long long)arg1;
- (id)uninstalledAppDataUsageForPeriod:(unsigned long long)arg1;
- (id)proxiedOnlyAppDataUsageForPeriod:(unsigned long long)arg1;
- (id)systemServiceDataUsageForPeriod:(unsigned long long)arg1;
- (id)totalAppDataUsedForPeriod:(unsigned long long)arg1;
- (id)totalUninstalledAppDataUsedForPeriod:(unsigned long long)arg1;
- (id)totalProxiedOnlyAppDataUsedForPeriod:(unsigned long long)arg1;
- (id)totalSystemServiceDataUsedForPeriod:(unsigned long long)arg1;
- (id)totalDataUsageForPeriod:(unsigned long long)arg1;
- (id)totalAppDataUsageForPeriod:(unsigned long long)arg1;
- (id)totalUninstalledAppDataUsageForPeriod:(unsigned long long)arg1;
- (id)totalProxiedOnlyAppDataUsageForPeriod:(unsigned long long)arg1;
- (id)totalSystemServiceDataUsageForPeriod:(unsigned long long)arg1;
- (id)totalWifiAssistUsageForPeriod:(unsigned long long)arg1;

@end
