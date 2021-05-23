/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface MCAPNInfo : NSObject

{
    NSString *_apnName;
    NSString *_username;
    NSString *_password;
    NSString *_proxy;
    NSNumber *_proxyPort;
}

@property (retain, nonatomic) NSString *apnName;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *password;
@property (retain, nonatomic) NSString *proxy;
@property (retain, nonatomic) NSNumber *proxyPort;

- (id)description;
- (id)installationWarnings;
- (id)defaultsRepresentation;
- (id)strippedDefaultsRepresentation;

@end
