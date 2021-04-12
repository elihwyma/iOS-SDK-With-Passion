//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray, NSString;

@interface _MRLanguageOptionProtobuf : PBCodable <NSCopying>
{
    NSMutableArray *_characteristics;
    NSString *_displayName;
    NSString *_identifier;
    NSString *_languageTag;
    int _type;
    struct {
        unsigned int type:1;
    } _has;
}

+ (Class)characteristicsType;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSMutableArray *characteristics; // @synthesize characteristics=_characteristics;
@property(retain, nonatomic) NSString *languageTag; // @synthesize languageTag=_languageTag;
@property(nonatomic) int type; // @synthesize type=_type;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasIdentifier;
@property(readonly, nonatomic) BOOL hasDisplayName;
- (id)characteristicsAtIndex:(NSUInteger)arg1;
- (NSUInteger)characteristicsCount;
- (void)addCharacteristics:(id)arg1;
- (void)clearCharacteristics;
@property(readonly, nonatomic) BOOL hasLanguageTag;
@property(nonatomic) BOOL hasType;

@end

