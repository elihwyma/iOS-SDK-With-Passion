/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthKit/Swift-Protocol.h>

@class NSData, NSString;

@interface HKHealthWrapCodableMessageHeader : PBCodable <Swift>

{
    long long _version;
    NSData *_encryptedHMACKey;
    NSData *_encryptedMessageKey;
    NSData *_encryptionIdentity;
    NSString *_studyIdentifier;
    NSData *_studyUUID;
    int _trailingHMACLength;
    int _trailingSHALength;
    NSData *_uploadUUID;
    _Bool _compressed;
    struct {
        unsigned int version:1;
        unsigned int trailingHMACLength:1;
        unsigned int trailingSHALength:1;
        unsigned int compressed:1;
    } _has;
}

@property (nonatomic) _Bool hasVersion;
@property (nonatomic) long long version;
@property (nonatomic, readonly) _Bool hasEncryptedMessageKey;
@property (retain, nonatomic) NSData *encryptedMessageKey;
@property (nonatomic, readonly) _Bool hasEncryptionIdentity;
@property (retain, nonatomic) NSData *encryptionIdentity;
@property (nonatomic, readonly) _Bool hasUploadUUID;
@property (retain, nonatomic) NSData *uploadUUID;
@property (nonatomic, readonly) _Bool hasStudyIdentifier;
@property (retain, nonatomic) NSString *studyIdentifier;
@property (nonatomic, readonly) _Bool hasEncryptedHMACKey;
@property (retain, nonatomic) NSData *encryptedHMACKey;
@property (nonatomic) _Bool hasTrailingHMACLength;
@property (nonatomic) int trailingHMACLength;
@property (nonatomic) _Bool hasTrailingSHALength;
@property (nonatomic) int trailingSHALength;
@property (nonatomic) _Bool hasCompressed;
@property (nonatomic) _Bool compressed;
@property (nonatomic, readonly) _Bool hasStudyUUID;
@property (retain, nonatomic) NSData *studyUUID;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;

@end
