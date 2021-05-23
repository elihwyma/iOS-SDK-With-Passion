/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/Swift-Protocol.h>

@class NSArray, NSData, NSString, _SFPBURL;

@interface _SFPBCard : PBCodable <Swift>

{
    _Bool _flexibleSectionOrder;
    int _type;
    int _source;
    NSString *_title;
    NSArray *_cardSections;
    NSData *_intentMessageData;
    NSString *_intentMessageName;
    NSData *_intentResponseMessageData;
    NSString *_intentResponseMessageName;
    NSArray *_dismissalCommands;
    NSString *_cardId;
    NSString *_contextReferenceIdentifier;
    _SFPBURL *_urlValue;
    NSData *_entityIdentifier;
    NSString *_resultIdentifier;
    unsigned long long _queryId;
    NSString *_fbr;
    NSArray *_entityProtobufMessages;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) int type;
@property (copy) NSArray *cardSections;
@property (copy, nonatomic) NSData *intentMessageData;
@property (copy, nonatomic) NSString *intentMessageName;
@property (copy, nonatomic) NSData *intentResponseMessageData;
@property (copy, nonatomic) NSString *intentResponseMessageName;
@property (copy, nonatomic) NSArray *dismissalCommands;
@property (copy, nonatomic) NSString *cardId;
@property (copy, nonatomic) NSString *contextReferenceIdentifier;
@property (retain, nonatomic) _SFPBURL *urlValue;
@property (nonatomic) int source;
@property (copy, nonatomic) NSData *entityIdentifier;
@property (copy, nonatomic) NSString *resultIdentifier;
@property (nonatomic) unsigned long long queryId;
@property (copy, nonatomic) NSString *fbr;
@property (nonatomic) _Bool flexibleSectionOrder;
@property (copy, nonatomic) NSArray *entityProtobufMessages;
@property (nonatomic, readonly) NSData *jsonData;

- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (void)addCardSections:(id)arg1;
- (void)addDismissalCommands:(id)arg1;
- (void)addEntityProtobufMessages:(id)arg1;
- (void)clearCardSections;
- (unsigned long long)cardSectionsCount;
- (id)cardSectionsAtIndex:(unsigned long long)arg1;
- (void)clearDismissalCommands;
- (unsigned long long)dismissalCommandsCount;
- (id)dismissalCommandsAtIndex:(unsigned long long)arg1;
- (void)clearEntityProtobufMessages;
- (unsigned long long)entityProtobufMessagesCount;
- (id)entityProtobufMessagesAtIndex:(unsigned long long)arg1;
- (void)recursiveSetQueryId:(unsigned long long)arg1;

@end
