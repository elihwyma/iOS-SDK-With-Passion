/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <ManagedConfiguration/MCPayload.h>

@class NSNumber, NSString;

@interface MCCalDAVAccountPayload : MCPayload

{
    NSString *_accountDescription;
    NSString *_hostname;
    NSString *_username;
    NSString *_password;
    NSString *_principalURL;
    _Bool _useSSL;
    int _port;
    NSString *_accountPersistentUUID;
    NSNumber *_useSSLNum;
    NSNumber *_portNum;
}

@property (nonatomic, readonly) NSNumber *useSSLNum;
@property (nonatomic, readonly) NSNumber *portNum;
@property (retain, nonatomic, readonly) NSString *accountDescription;
@property (retain, nonatomic, readonly) NSString *hostname;
@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *password;
@property (retain, nonatomic, readonly) NSString *principalURL;
@property (nonatomic, readonly) _Bool useSSL;
@property (nonatomic, readonly) int port;
@property (copy, nonatomic) NSString *accountPersistentUUID;

+ (id)typeStrings;
+ (id)localizedSingularForm;
+ (id)localizedPluralForm;

- (id)description;
- (id)title;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;
- (id)stubDictionary;
- (id)payloadDescriptionKeyValueSections;
- (id)subtitle1Label;
- (id)subtitle1Description;
- (_Bool)containsSensitiveUserInformation;
- (id)subtitle2Label;
- (id)subtitle2Description;

@end
