/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@class NSDictionary, NSString, WiFiAwareDiscoveryResult;

__attribute__((visibility("hidden")))
@interface CUNANEndpoint : NSObject

{
    int _port;
    NSString *_identifier;
    NSString *_name;
    NSString *_serviceType;
    NSDictionary *_textInfo;
    WiFiAwareDiscoveryResult *_discoveryResult;
}

@property (retain, nonatomic) WiFiAwareDiscoveryResult *discoveryResult;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) int port;
@property (copy, nonatomic) NSString *serviceType;
@property (copy, nonatomic, readonly) NSDictionary *textInfo;

- (id)description;
- (id)descriptionWithLevel:(int)arg1;
- (unsigned int)updateWithDiscoveryResult:(id)arg1;

@end
