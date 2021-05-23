/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <ManagedConfiguration/MCProfile.h>

@class NSArray, NSData, NSString;

@interface MCProfileServiceProfile : MCProfile

{
    NSString *_URLString;
    NSArray *_deviceAttributes;
    id _challenge;
    NSData *_enrollmentIdentityPersistentID;
    _Bool _confirmInstallation;
    _Bool _supportedServerVersion;
    NSArray *_bogusPayloads;
}

@property (retain, nonatomic) NSString *URLString;
@property (retain, nonatomic) NSData *enrollmentIdentityPersistentID;
@property (retain, nonatomic, readonly) NSArray *deviceAttributes;
@property (retain, nonatomic, readonly) id challenge;
@property (nonatomic, readonly) _Bool confirmInstallation;
@property (nonatomic, readonly) _Bool supportedServerVersion;

- (id)description;
- (id)stubDictionary;
- (id)payloads;
- (id)initWithDictionary:(id)arg1 signerCerts:(id)arg2 allowEmptyPayload:(_Bool)arg3 outError:(id *)arg4;
- (id)managedPayloads;
- (id)localizedPayloadSummaryByType;
- (id)localizedManagedPayloadSummaryByType;
- (id)_badDataTypeErrorWithFieldName:(id)arg1;
- (id)_unsupportedValueErrorWithFieldName:(id)arg1 value:(id)arg2;

@end
