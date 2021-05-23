/*
 Image: /System/Library/Frameworks/Accounts.framework/Accounts
 */

#import <ProtocolBuffer/PBCodable.h>

@class ACProtobufDate, ACProtobufURL, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface ACProtobufCredentialItem : PBCodable

{
    NSString *_accountIdentifier;
    NSMutableArray *_dirtyProperties;
    ACProtobufDate *_expirationDate;
    ACProtobufURL *_objectID;
    NSString *_serviceName;
    _Bool _isPersistent;
    struct {
        unsigned int isPersistent:1;
    } _has;
}

@property (retain, nonatomic) NSString *accountIdentifier;
@property (nonatomic, readonly) _Bool hasExpirationDate;
@property (retain, nonatomic) ACProtobufDate *expirationDate;
@property (retain, nonatomic) NSString *serviceName;
@property (nonatomic) _Bool hasIsPersistent;
@property (nonatomic) _Bool isPersistent;
@property (nonatomic, readonly) _Bool hasObjectID;
@property (retain, nonatomic) ACProtobufURL *objectID;
@property (retain, nonatomic) NSMutableArray *dirtyProperties;

+ (Class)dirtyPropertiesType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)clearDirtyProperties;
- (void)addDirtyProperties:(id)arg1;
- (unsigned long long)dirtyPropertiesCount;
- (id)dirtyPropertiesAtIndex:(unsigned long long)arg1;

@end
