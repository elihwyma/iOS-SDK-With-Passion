/*
 Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, WFNetworkProfile;

@interface WFANQPQueryResponse : NSObject

{
    WFNetworkProfile *_profile;
    NSArray *_cellNetworkInfo;
    NSArray *_roamingConsortium;
    NSArray *_domains;
    NSString *_ssid;
    NSString *_bssid;
    NSString *_operatorName;
    long long _channel;
}

@property (copy, nonatomic) NSArray *cellNetworkInfo;
@property (retain, nonatomic) NSArray *roamingConsortium;
@property (retain, nonatomic) NSArray *domains;
@property (copy, nonatomic) WFNetworkProfile *profile;
@property (copy, nonatomic) NSString *ssid;
@property (copy, nonatomic) NSString *bssid;
@property (copy, nonatomic) NSString *operatorName;
@property long long channel;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithProfile:(id)arg1 ANQPResponse:(id)arg2;
- (_Bool)isEqualToWFANQPResponse:(id)arg1;

@end
