/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NWHostEndpoint;

@interface NENetworkRule : NSObject

{
    NWHostEndpoint *_matchRemoteEndpoint;
    unsigned long long _matchRemotePrefix;
    NWHostEndpoint *_matchLocalNetwork;
    unsigned long long _matchLocalPrefix;
    long long _matchProtocol;
    long long _matchDirection;
}

@property (readonly) NWHostEndpoint *matchRemoteEndpoint;
@property (readonly) unsigned long long matchRemotePrefix;
@property (readonly) NWHostEndpoint *matchLocalNetwork;
@property (readonly) unsigned long long matchLocalPrefix;
@property (readonly) long long matchProtocol;
@property (readonly) long long matchDirection;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDestinationNetwork:(id)arg1 prefix:(unsigned long long)arg2 protocol:(long long)arg3;
- (_Bool)checkValidityAndCollectErrors:(id)arg1;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (id)initWithDestinationHost:(id)arg1 protocol:(long long)arg2;
- (id)initWithRemoteNetwork:(id)arg1 remotePrefix:(unsigned long long)arg2 localNetwork:(id)arg3 localPrefix:(unsigned long long)arg4 protocol:(long long)arg5 direction:(long long)arg6;

@end
