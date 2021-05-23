/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VCNetworkAddress : NSObject

{
    NSString *_ip;
    NSString *_interfaceName;
    unsigned short _port;
    unsigned short _ipVersion;
}

@property (copy, nonatomic) NSString *ip;
@property (nonatomic) unsigned short port;
@property (nonatomic) unsigned short ipVersion;
@property (copy, nonatomic) NSString *interfaceName;

- (void)dealloc;
- (_Bool)isIPv6;

@end
