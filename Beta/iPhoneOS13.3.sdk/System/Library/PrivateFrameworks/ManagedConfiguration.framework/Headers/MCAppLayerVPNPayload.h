/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <ManagedConfiguration/MCVPNPayloadBase.h>

@class NSArray, NSString;

@interface MCAppLayerVPNPayload : MCVPNPayloadBase

{
    _Bool _restrictDomains;
    NSString *_VPNUUID;
    NSArray *_SafariDomains;
    NSArray *_SMBDomains;
    NSArray *_mailDomains;
    NSArray *_calendarDomains;
    NSArray *_contactsDomains;
}

@property (retain, nonatomic) NSString *VPNUUID;
@property (retain, nonatomic) NSArray *SafariDomains;
@property (retain, nonatomic) NSArray *SMBDomains;
@property (retain, nonatomic) NSArray *mailDomains;
@property (retain, nonatomic) NSArray *calendarDomains;
@property (retain, nonatomic) NSArray *contactsDomains;
@property (nonatomic, readonly) _Bool restrictDomains;

+ (id)typeStrings;
+ (id)localizedSingularForm;
+ (id)localizedPluralForm;

- (id)description;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;
- (id)stubDictionary;
- (id)payloadDescriptionKeyValueSections;
- (id)filterForUserEnrollmentOutError:(id *)arg1;

@end
