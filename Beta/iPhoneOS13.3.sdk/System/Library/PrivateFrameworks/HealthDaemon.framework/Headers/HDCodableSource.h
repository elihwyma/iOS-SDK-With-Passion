/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class NSData, NSString;

@interface HDCodableSource : PBCodable <Swift>

{
    double _modificationDate;
    long long _options;
    NSString *_bundleIdentifier;
    NSString *_name;
    NSString *_owningAppBundleIdentifier;
    NSString *_productType;
    NSData *_uuid;
    _Bool _deleted;
    struct {
        unsigned int modificationDate:1;
        unsigned int options:1;
        unsigned int deleted:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasName;
@property (retain, nonatomic) NSString *name;
@property (nonatomic, readonly) _Bool hasBundleIdentifier;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (nonatomic, readonly) _Bool hasProductType;
@property (retain, nonatomic) NSString *productType;
@property (nonatomic) _Bool hasOptions;
@property (nonatomic) long long options;
@property (nonatomic, readonly) _Bool hasUuid;
@property (retain, nonatomic) NSData *uuid;
@property (nonatomic) _Bool hasModificationDate;
@property (nonatomic) double modificationDate;
@property (nonatomic) _Bool hasDeleted;
@property (nonatomic) _Bool deleted;
@property (nonatomic, readonly) _Bool hasOwningAppBundleIdentifier;
@property (retain, nonatomic) NSString *owningAppBundleIdentifier;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)decodedUUID;
- (id)decodedModificationDate;

@end
