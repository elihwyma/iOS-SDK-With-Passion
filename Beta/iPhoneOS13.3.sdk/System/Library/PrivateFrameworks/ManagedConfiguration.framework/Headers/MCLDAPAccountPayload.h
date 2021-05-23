/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <ManagedConfiguration/MCPayload.h>

@class NSArray, NSDictionary, NSNumber, NSString;

@interface MCLDAPAccountPayload : MCPayload

{
    NSString *_accountDescription;
    NSString *_hostname;
    NSString *_username;
    NSString *_password;
    _Bool _useSSL;
    NSArray *_searchSettings;
    NSString *_accountPersistentUUID;
    NSDictionary *_communicationServiceRules;
    NSNumber *_useSSLNum;
}

@property (nonatomic, readonly) NSNumber *useSSLNum;
@property (retain, nonatomic, readonly) NSString *accountDescription;
@property (retain, nonatomic, readonly) NSString *hostname;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *password;
@property (retain, nonatomic, readonly) NSArray *searchSettings;
@property (nonatomic, readonly) _Bool useSSL;
@property (nonatomic, readonly) NSDictionary *communicationServiceRules;
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
- (id)restrictions;
- (_Bool)containsSensitiveUserInformation;
- (id)subtitle2Label;
- (id)subtitle2Description;

@end
