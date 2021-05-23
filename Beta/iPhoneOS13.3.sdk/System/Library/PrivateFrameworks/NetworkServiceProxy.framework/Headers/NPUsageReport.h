/*
 Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

#import <Foundation/NSObject.h>

@class NSString, NSUUID;

@interface NPUsageReport : NSObject

{
    unsigned char _addressFamily;
    unsigned int _edgeIndex;
    unsigned int _keybagGeneration;
    unsigned int _waldoTimestamp;
    NSString *_signingIdentifier;
    long long _fallbackReason;
    NSUUID *_dayPassUUID;
    unsigned long long _rtt;
    NSString *_geohash;
}

@property (nonatomic, readonly) NSString *signingIdentifier;
@property (nonatomic, readonly) long long fallbackReason;
@property (retain, nonatomic) NSUUID *dayPassUUID;
@property (nonatomic) unsigned long long rtt;
@property (retain, nonatomic) NSString *geohash;
@property (nonatomic) unsigned char addressFamily;
@property (nonatomic) unsigned int edgeIndex;
@property (nonatomic) unsigned int keybagGeneration;
@property (nonatomic) unsigned int waldoTimestamp;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSigningIdentifier:(id)arg1 fallbackReason:(long long)arg2;

@end
