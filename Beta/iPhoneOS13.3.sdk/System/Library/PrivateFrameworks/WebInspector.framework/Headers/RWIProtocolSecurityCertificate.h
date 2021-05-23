/*
 Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSArray, NSString;

@interface RWIProtocolSecurityCertificate : RWIProtocolJSONObject

@property (copy, nonatomic) NSString *subject;
@property (nonatomic) double validFrom;
@property (nonatomic) double validUntil;
@property (copy, nonatomic) NSArray *dnsNames;
@property (copy, nonatomic) NSArray *ipAddresses;

@end
