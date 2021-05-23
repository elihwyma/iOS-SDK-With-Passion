/*
 Image: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
 */

#import <ProtocolBuffer/PBCodable.h>

@class BCSChatSuggestMessage, NSString;

__attribute__((visibility("hidden")))
@interface BCSChatSuggestWrapper : PBCodable

{
    BCSChatSuggestMessage *_message;
    NSString *_phone;
}

@property (nonatomic, readonly) _Bool hasPhone;
@property (retain, nonatomic) NSString *phone;
@property (nonatomic, readonly) _Bool hasMessage;
@property (retain, nonatomic) BCSChatSuggestMessage *message;

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
