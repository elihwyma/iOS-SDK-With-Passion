/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class NSNumber, NSString;

@interface EDAMClientAccessEntry : FATObject

{
    NSNumber *_accessTime;
    NSString *_appName;
    NSString *_deviceName;
    NSString *_ipAddress;
    NSString *_location;
    NSNumber *_browserType;
    NSNumber *_apiKeyId;
    NSNumber *_longSessionCreated;
    NSNumber *_userId;
    NSNumber *_authenticatedClientUserId;
    NSNumber *_businessAdmin;
}

@property (retain, nonatomic) NSNumber *accessTime;
@property (retain, nonatomic) NSString *appName;
@property (retain, nonatomic) NSString *deviceName;
@property (retain, nonatomic) NSString *ipAddress;
@property (retain, nonatomic) NSString *location;
@property (retain, nonatomic) NSNumber *browserType;
@property (retain, nonatomic) NSNumber *apiKeyId;
@property (retain, nonatomic) NSNumber *longSessionCreated;
@property (retain, nonatomic) NSNumber *userId;
@property (retain, nonatomic) NSNumber *authenticatedClientUserId;
@property (retain, nonatomic) NSNumber *businessAdmin;

+ (id)structName;
+ (id)structFields;

@end
