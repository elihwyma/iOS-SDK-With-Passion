/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <ManagedConfiguration/MCCertificatePayload.h>

@class NSArray, NSData, NSDictionary, NSString;

@interface MCSCEPPayload : MCCertificatePayload

{
    NSString *_URLString;
    NSString *_CAInstanceName;
    NSString *_challenge;
    NSArray *_subject;
    unsigned long long _keySize;
    int _usageFlags;
    NSData *_CAFingerprint;
    NSArray *_CACaps;
    NSDictionary *_subjectAltName;
    unsigned long long _retries;
    unsigned long long _retryDelay;
}

@property (retain, nonatomic, readonly) NSString *URLString;
@property (retain, nonatomic, readonly) NSString *CAInstanceName;
@property (retain, nonatomic, readonly) NSData *CAFingerprint;
@property (retain, nonatomic, readonly) NSArray *CACaps;
@property (retain, nonatomic, readonly) NSString *challenge;
@property (retain, nonatomic, readonly) NSArray *subject;
@property (nonatomic, readonly) unsigned long long keySize;
@property (nonatomic, readonly) int usageFlags;
@property (retain, nonatomic, readonly) NSDictionary *subjectAltName;
@property (nonatomic, readonly) unsigned long long retries;
@property (nonatomic, readonly) unsigned long long retryDelay;

+ (id)typeStrings;
+ (id)localizedSingularForm;
+ (id)localizedPluralForm;

- (id)description;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;
- (id)stubDictionary;
- (id)payloadDescriptionKeyValueSections;
- (_Bool)isIdentity;
- (_Bool)isRoot;

@end
