/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface MCAPNConfiguration : NSObject

{
    NSString *_name;
    NSString *_username;
    NSString *_password;
    NSString *_proxyServer;
    NSNumber *_proxyPort;
    NSString *_authenticationType;
    NSNumber *_defaultProtocolMask;
    NSNumber *_allowedProtocolMask;
    NSNumber *_allowedProtocolMaskInRoaming;
    NSNumber *_allowedProtocolMaskInDomesticRoaming;
}

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *password;
@property (retain, nonatomic) NSString *proxyServer;
@property (retain, nonatomic) NSNumber *proxyPort;
@property (retain, nonatomic) NSString *authenticationType;
@property (retain, nonatomic) NSNumber *defaultProtocolMask;
@property (retain, nonatomic) NSNumber *allowedProtocolMask;
@property (retain, nonatomic) NSNumber *allowedProtocolMaskInRoaming;
@property (retain, nonatomic) NSNumber *allowedProtocolMaskInDomesticRoaming;

- (id)description;
- (id)stubDictionary;
- (id)initWithDictionary:(id)arg1 outError:(id *)arg2;
- (id)localizedAuthenticationType;

@end
