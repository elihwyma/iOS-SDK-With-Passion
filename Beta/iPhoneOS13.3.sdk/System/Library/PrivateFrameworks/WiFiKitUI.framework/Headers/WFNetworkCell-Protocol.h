/*
 Image: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
 */

#import <WiFiKitUI/Swift-Protocol.h>

@class NSString, WFHotspotDetails;

@protocol WFNetworkCell <Swift>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (nonatomic) _Bool secure;
@property (nonatomic) long long state;
@property (nonatomic) unsigned long long bars;
@property (nonatomic) _Bool personalHotspot;
@property (retain, nonatomic) WFHotspotDetails *hotspotDetails;
@property (nonatomic) _Bool connectionError;

@end
