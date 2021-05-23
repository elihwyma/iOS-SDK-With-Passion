/*
 Image: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BCSCallToAction : PBCodable

{
    NSString *_body;
    NSString *_language;
    NSString *_subtitle;
    NSString *_title;
    _Bool _isDefault;
    struct {
        unsigned int isDefault:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasLanguage;
@property (retain, nonatomic) NSString *language;
@property (nonatomic, readonly) _Bool hasTitle;
@property (retain, nonatomic) NSString *title;
@property (nonatomic, readonly) _Bool hasSubtitle;
@property (retain, nonatomic) NSString *subtitle;
@property (nonatomic) _Bool hasIsDefault;
@property (nonatomic) _Bool isDefault;
@property (nonatomic, readonly) _Bool hasBody;
@property (retain, nonatomic) NSString *body;

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
