/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/Swift-Protocol.h>

@class NSArray, NSData, NSString, _SFPBImage, _SFPBPunchout, _SFPBText;

@interface _SFPBMediaItem : PBCodable <Swift>

{
    NSString *_title;
    _SFPBText *_subtitleText;
    _SFPBImage *_thumbnail;
    _SFPBImage *_reviewGlyph;
    _SFPBImage *_overlayImage;
    NSString *_reviewText;
    _SFPBPunchout *_punchout;
    NSArray *_subtitleCustomLineBreakings;
    NSArray *_buyOptions;
    NSString *_contentAdvisory;
    _SFPBImage *_contentAdvisoryImage;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) _SFPBText *subtitleText;
@property (retain, nonatomic) _SFPBImage *thumbnail;
@property (retain, nonatomic) _SFPBImage *reviewGlyph;
@property (retain, nonatomic) _SFPBImage *overlayImage;
@property (copy, nonatomic) NSString *reviewText;
@property (retain, nonatomic) _SFPBPunchout *punchout;
@property (copy, nonatomic) NSArray *subtitleCustomLineBreakings;
@property (copy, nonatomic) NSArray *buyOptions;
@property (copy, nonatomic) NSString *contentAdvisory;
@property (retain, nonatomic) _SFPBImage *contentAdvisoryImage;
@property (nonatomic, readonly) NSData *jsonData;

- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (void)setSubtitleCustomLineBreaking:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (void)addSubtitleCustomLineBreaking:(id)arg1;
- (void)addBuyOptions:(id)arg1;
- (void)clearSubtitleCustomLineBreaking;
- (unsigned long long)subtitleCustomLineBreakingCount;
- (id)subtitleCustomLineBreakingAtIndex:(unsigned long long)arg1;
- (void)clearBuyOptions;
- (unsigned long long)buyOptionsCount;
- (id)buyOptionsAtIndex:(unsigned long long)arg1;

@end
