/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, PBUnknownFields;

@interface GEORPFeedbackConversation : PBCodable

{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_messages;
}

@property (retain, nonatomic) NSMutableArray *messages;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)messageType;
+ (_Bool)isValid:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addMessage:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
- (unsigned long long)messagesCount;
- (void)clearMessages;
- (id)messageAtIndex:(unsigned long long)arg1;

@end
