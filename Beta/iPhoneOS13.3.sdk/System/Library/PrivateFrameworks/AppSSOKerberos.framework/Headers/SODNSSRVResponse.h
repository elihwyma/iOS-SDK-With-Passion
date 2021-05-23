/*
 Image: /System/Library/PrivateFrameworks/AppSSOKerberos.framework/AppSSOKerberos
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SODNSSRVResponse : NSObject

{
    unsigned short _port;
    NSString *_host;
}

@property (retain, nonatomic) NSString *host;
@property (nonatomic) unsigned short port;

- (id)init;
- (id)description;

@end
