/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthKit/Swift-Protocol.h>

@class NSData, NSMutableArray, NSString;

@interface HKHealthWrapCodablePayloadHeader : PBCodable <Swift>

{
    long long _endDate;
    long long _startDate;
    NSData *_applicationData;
    NSString *_channel;
    NSMutableArray *_keyValuePairs;
    NSString *_payloadIdentifier;
    NSString *_payloadType;
    NSData *_subjectUUID;
    struct {
        unsigned int endDate:1;
        unsigned int startDate:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasChannel;
@property (retain, nonatomic) NSString *channel;
@property (nonatomic, readonly) _Bool hasPayloadType;
@property (retain, nonatomic) NSString *payloadType;
@property (nonatomic, readonly) _Bool hasSubjectUUID;
@property (retain, nonatomic) NSData *subjectUUID;
@property (nonatomic) _Bool hasStartDate;
@property (nonatomic) long long startDate;
@property (nonatomic) _Bool hasEndDate;
@property (nonatomic) long long endDate;
@property (nonatomic, readonly) _Bool hasPayloadIdentifier;
@property (retain, nonatomic) NSString *payloadIdentifier;
@property (nonatomic, readonly) _Bool hasApplicationData;
@property (retain, nonatomic) NSData *applicationData;
@property (retain, nonatomic) NSMutableArray *keyValuePairs;

+ (Class)keyValuePairsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addKeyValuePairs:(id)arg1;
- (unsigned long long)keyValuePairsCount;
- (void)clearKeyValuePairs;
- (id)keyValuePairsAtIndex:(unsigned long long)arg1;

@end
