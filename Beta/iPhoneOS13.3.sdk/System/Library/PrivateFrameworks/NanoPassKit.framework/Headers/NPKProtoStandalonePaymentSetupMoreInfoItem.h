/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

@interface NPKProtoStandalonePaymentSetupMoreInfoItem : PBCodable

{
    NSString *_body;
    NSData *_imageData;
    NSString *_imageURL;
    NSString *_linkText;
    NSString *_linkURL;
    NSString *_title;
}

@property (nonatomic, readonly) _Bool hasTitle;
@property (retain, nonatomic) NSString *title;
@property (nonatomic, readonly) _Bool hasBody;
@property (retain, nonatomic) NSString *body;
@property (nonatomic, readonly) _Bool hasLinkText;
@property (retain, nonatomic) NSString *linkText;
@property (nonatomic, readonly) _Bool hasLinkURL;
@property (retain, nonatomic) NSString *linkURL;
@property (nonatomic, readonly) _Bool hasImageURL;
@property (retain, nonatomic) NSString *imageURL;
@property (nonatomic, readonly) _Bool hasImageData;
@property (retain, nonatomic) NSData *imageData;

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
