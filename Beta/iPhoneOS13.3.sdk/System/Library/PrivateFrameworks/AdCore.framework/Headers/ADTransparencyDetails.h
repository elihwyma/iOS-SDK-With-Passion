/*
 Image: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface ADTransparencyDetails : PBCodable

{
    NSString *_transparencyDetailsUnavailableMessage;
    NSString *_transparencyRendererPayload;
    NSString *_transparencyRendererURL;
}

@property (nonatomic, readonly) _Bool hasTransparencyDetailsUnavailableMessage;
@property (retain, nonatomic) NSString *transparencyDetailsUnavailableMessage;
@property (nonatomic, readonly) _Bool hasTransparencyRendererPayload;
@property (retain, nonatomic) NSString *transparencyRendererPayload;
@property (nonatomic, readonly) _Bool hasTransparencyRendererURL;
@property (retain, nonatomic) NSString *transparencyRendererURL;

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
