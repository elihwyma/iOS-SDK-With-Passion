/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <ProtocolBuffer/PBCodable.h>

#import <NewsCore/Swift-Protocol.h>

@class NSData, NSString;

@interface FCCKPResponseOperationResultErrorExtension : PBCodable <Swift>

{
    NSString *_extensionName;
    NSData *_extensionPayload;
    unsigned int _typeCode;
    struct {
        unsigned int typeCode:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasExtensionName;
@property (retain, nonatomic) NSString *extensionName;
@property (nonatomic) _Bool hasTypeCode;
@property (nonatomic) unsigned int typeCode;
@property (nonatomic, readonly) _Bool hasExtensionPayload;
@property (retain, nonatomic) NSData *extensionPayload;

- (void)dealloc;
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
