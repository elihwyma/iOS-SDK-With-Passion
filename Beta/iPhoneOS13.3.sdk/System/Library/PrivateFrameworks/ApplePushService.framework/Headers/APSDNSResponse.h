/*
 Image: /System/Library/PrivateFrameworks/ApplePushService.framework/ApplePushService
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface APSDNSResponse : NSObject

{
    NSString *_hostname;
    NSArray *_ipv4Address;
    NSArray *_ipv6Address;
}

@property (nonatomic, readonly) NSString *hostname;
@property (nonatomic, readonly) NSArray *ipv4Address;
@property (nonatomic, readonly) NSArray *ipv6Address;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initResponseForHostname:(id)arg1 ipv4Address:(id)arg2 ipv6Address:(id)arg3;

@end
