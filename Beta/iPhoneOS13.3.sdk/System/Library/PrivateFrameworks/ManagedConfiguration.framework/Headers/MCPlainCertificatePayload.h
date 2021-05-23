/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <ManagedConfiguration/MCCertificatePayload.h>

@class NSData, NSString;

@interface MCPlainCertificatePayload : MCCertificatePayload

{
    NSString *_certificateFileName;
    NSData *_certificateData;
    NSString *_password;
    int _dataEncoding;
}

@property (retain, nonatomic, readonly) NSString *certificateFileName;
@property (retain, nonatomic, readonly) NSData *certificateData;
@property (nonatomic, readonly) int dataEncoding;
@property (retain, nonatomic, readonly) NSString *password;

+ (id)typeStrings;
+ (id)localizedSingularForm;
+ (id)localizedPluralForm;

- (id)description;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;
- (struct __SecCertificate *)copyCertificate;
- (id)installationWarnings;
- (_Bool)isIdentity;
- (_Bool)isSigned;
- (id)persistentResourceID;

@end
