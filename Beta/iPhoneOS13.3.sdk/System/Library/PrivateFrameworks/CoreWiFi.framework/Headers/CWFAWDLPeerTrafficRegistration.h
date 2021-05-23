/*
 Image: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface CWFAWDLPeerTrafficRegistration : NSObject

{
    _Bool _active;
    int _sessionFlags;
    NSString *_serviceName;
    unsigned long long _desiredBandwidth;
    unsigned long long _desiredLatency;
    unsigned long long _preferredChannel;
    unsigned long long _secondaryPreferredChannel;
    NSArray *_peerContextList;
}

@property (copy, nonatomic) NSString *serviceName;
@property (nonatomic, getter=isActive) _Bool active;
@property (nonatomic) int sessionFlags;
@property (nonatomic) unsigned long long desiredBandwidth;
@property (nonatomic) unsigned long long desiredLatency;
@property (nonatomic) unsigned long long preferredChannel;
@property (nonatomic) unsigned long long secondaryPreferredChannel;
@property (copy, nonatomic) NSArray *peerContextList;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToAWDLPeerTrafficRegistration:(id)arg1;

@end
