/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface AVCNetworkAddress : NSObject

{
    NSString *ip;
    NSString *interfaceName;
    unsigned short port;
    _Bool isIPv6;
}

@property (copy, nonatomic) NSString *ip;
@property (nonatomic) unsigned short port;
@property (nonatomic) _Bool isIPv6;
@property (copy, nonatomic) NSString *interfaceName;

- (id)init;
- (void)dealloc;

@end
