/*
 Image: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString, NSURL;

@interface ASTEnvironment : NSObject

{
    unsigned long long _environmentType;
    unsigned long long _server;
    NSURL *_serverURL;
    NSString *_SOCKSProxyServer;
    NSNumber *_SOCKSProxyPort;
}

@property (nonatomic) unsigned long long environmentType;
@property (nonatomic) unsigned long long server;
@property (retain, nonatomic) NSURL *serverURL;
@property (retain, nonatomic) NSString *SOCKSProxyServer;
@property (retain, nonatomic) NSNumber *SOCKSProxyPort;

+ (_Bool)isInternalBuild;
+ (id)currentEnvironment;
+ (id)environmentWithEnvironmentType:(unsigned long long)arg1;

- (id)init;
- (id)_defaultServerURL;
- (id)initWithEnvironmentType:(unsigned long long)arg1;
- (unsigned long long)_defaultServerSelection;
- (id)_generateServerURL;
- (id)_environmentServerString;

@end
