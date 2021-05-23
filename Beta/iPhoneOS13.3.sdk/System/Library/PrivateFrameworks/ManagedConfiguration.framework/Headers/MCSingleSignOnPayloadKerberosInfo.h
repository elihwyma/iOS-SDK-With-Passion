/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface MCSingleSignOnPayloadKerberosInfo : NSObject

{
    NSString *_principalName;
    NSString *_realm;
    NSString *_certificateUUID;
    NSArray *_URLPrefixMatches;
    NSArray *_appIdentifierMatches;
    NSString *_accountGUID;
    NSString *_accountTypeGUID;
}

@property (retain, nonatomic) NSString *principalName;
@property (retain, nonatomic) NSString *realm;
@property (retain, nonatomic) NSString *certificateUUID;
@property (retain, nonatomic) NSArray *URLPrefixMatches;
@property (retain, nonatomic) NSArray *appIdentifierMatches;
@property (retain, nonatomic) NSString *accountGUID;
@property (retain, nonatomic) NSString *accountTypeGUID;

- (id)description;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;
- (id)stubDictionary;
- (_Bool)validateAppIdentifierMatch:(id)arg1 outError:(id *)arg2;
- (_Bool)validateURLPrefixMatch:(id)arg1 outNormalizedString:(id *)arg2 outError:(id *)arg3;

@end
