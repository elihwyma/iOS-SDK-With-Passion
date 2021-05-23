/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/Swift-Protocol.h>

@class NSArray, NSData, NSString, _SFPBGraphicalFloat, _SFPBText;

@interface _SFPBRichText : PBCodable <Swift>

{
    _SFPBText *_text;
    _SFPBGraphicalFloat *_starRating;
    NSString *_contentAdvisory;
    NSArray *_icons;
    NSArray *_formattedTextPieces;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) _SFPBText *text;
@property (retain, nonatomic) _SFPBGraphicalFloat *starRating;
@property (copy, nonatomic) NSString *contentAdvisory;
@property (copy, nonatomic) NSArray *icons;
@property (copy, nonatomic) NSArray *formattedTextPieces;
@property (nonatomic, readonly) NSData *jsonData;

- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (unsigned long long)iconsCount;
- (void)clearIcons;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (void)addIcons:(id)arg1;
- (void)addFormattedTextPieces:(id)arg1;
- (id)iconsAtIndex:(unsigned long long)arg1;
- (void)clearFormattedTextPieces;
- (unsigned long long)formattedTextPiecesCount;
- (id)formattedTextPiecesAtIndex:(unsigned long long)arg1;

@end
