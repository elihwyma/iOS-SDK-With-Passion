/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/Swift-Protocol.h>

@class NSArray, NSData, NSString;

@interface _SFPBTextColumnSection : PBCodable <Swift>

{
    _Bool _textNoWrap;
    unsigned int _textWeight;
    NSArray *_textLines;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSArray *textLines;
@property (nonatomic) _Bool textNoWrap;
@property (nonatomic) unsigned int textWeight;
@property (nonatomic, readonly) NSData *jsonData;

- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (void)addTextLines:(id)arg1;
- (void)clearTextLines;
- (unsigned long long)textLinesCount;
- (id)textLinesAtIndex:(unsigned long long)arg1;

@end
