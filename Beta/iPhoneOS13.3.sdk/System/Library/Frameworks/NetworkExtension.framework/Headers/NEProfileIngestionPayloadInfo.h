/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface NEProfileIngestionPayloadInfo : NSObject

{
    _Bool _isSetAside;
    _Bool _applicationCreated;
    NSString *_payloadProtocolType;
    NSString *_payloadUUID;
    NSString *_payloadOrganization;
    NSString *_profileOrganization;
    NSString *_profileIdentifier;
    NSString *_profileUUID;
    NSDate *_profileIngestionDate;
    NSString *_systemVersion;
    long long _profileSource;
}

@property long long profileSource;
@property (copy) NSString *payloadProtocolType;
@property (copy) NSString *payloadUUID;
@property (copy) NSString *payloadOrganization;
@property (copy) NSString *profileOrganization;
@property (copy) NSString *profileIdentifier;
@property (copy) NSString *profileUUID;
@property (copy) NSDate *profileIngestionDate;
@property (copy) NSString *systemVersion;
@property _Bool isSetAside;
@property _Bool applicationCreated;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (id)copyLegacyDictionary;
- (id)initFromLegacyDictionary:(id)arg1;

@end
