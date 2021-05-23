/*
 Image: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CWFAWDLPeerAssistedDiscoveryParameters : NSObject

{
    int _peerSupportedChannelFlags;
    unsigned long long _localMasterChannel;
    unsigned long long _localPreferredChannel;
    unsigned long long _localSecondaryPreferredChannel;
    unsigned long long _localAssistedDiscoveryMetric;
    NSString *_peerMACAddress;
    unsigned long long _peerMasterChannel;
    unsigned long long _peerPreferredChannel;
    unsigned long long _peerSecondaryPreferredChannel;
    unsigned long long _peerAssistedDiscoveryMetric;
}

@property (nonatomic) unsigned long long localMasterChannel;
@property (nonatomic) unsigned long long localPreferredChannel;
@property (nonatomic) unsigned long long localSecondaryPreferredChannel;
@property (nonatomic) unsigned long long localAssistedDiscoveryMetric;
@property (copy, nonatomic) NSString *peerMACAddress;
@property (nonatomic) unsigned long long peerMasterChannel;
@property (nonatomic) unsigned long long peerPreferredChannel;
@property (nonatomic) unsigned long long peerSecondaryPreferredChannel;
@property (nonatomic) unsigned long long peerAssistedDiscoveryMetric;
@property (nonatomic) int peerSupportedChannelFlags;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToAWDLParameters:(id)arg1;

@end
