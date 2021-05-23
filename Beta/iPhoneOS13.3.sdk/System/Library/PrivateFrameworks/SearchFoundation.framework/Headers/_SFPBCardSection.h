/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/Swift-Protocol.h>

@class NSArray, NSData, NSString, _SFPBCard, _SFPBCardSectionValue, _SFPBUserReportRequest;

@interface _SFPBCardSection : PBCodable <Swift>

{
    int _type;
    _SFPBCardSectionValue *_value;
    _SFPBCard *_nextCard;
    NSArray *_commands;
    NSArray *_parameterKeyPaths;
    NSString *_cardSectionId;
    NSString *_resultIdentifier;
    _SFPBUserReportRequest *_userReportRequest;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) int type;
@property (retain, nonatomic) _SFPBCardSectionValue *value;
@property (retain, nonatomic) _SFPBCard *nextCard;
@property (copy, nonatomic) NSArray *commands;
@property (copy, nonatomic) NSArray *parameterKeyPaths;
@property (copy, nonatomic) NSString *cardSectionId;
@property (copy, nonatomic) NSString *resultIdentifier;
@property (retain, nonatomic) _SFPBUserReportRequest *userReportRequest;
@property (nonatomic, readonly) NSData *jsonData;

- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (void)addCommands:(id)arg1;
- (void)addParameterKeyPaths:(id)arg1;
- (void)clearCommands;
- (unsigned long long)commandsCount;
- (id)commandsAtIndex:(unsigned long long)arg1;
- (void)clearParameterKeyPaths;
- (unsigned long long)parameterKeyPathsCount;
- (id)parameterKeyPathsAtIndex:(unsigned long long)arg1;
- (id)initWithSFCardSection:(id)arg1;

@end
