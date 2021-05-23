/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NTPBColor, NTPBColorGradient;

@interface NTPBCardStyle : PBCodable

{
    NTPBColor *_callToActionBackgroundColor;
    NTPBColor *_callToActionForegroundColor;
    NTPBColor *_cardBackgroundColor;
    NTPBColor *_cardForegroundColor;
    NTPBColor *_eyebrowForegroundColor;
    NTPBColorGradient *_sauceGradient;
    NTPBColor *_titleForegroundColor;
}

@property (nonatomic, readonly) _Bool hasTitleForegroundColor;
@property (retain, nonatomic) NTPBColor *titleForegroundColor;
@property (nonatomic, readonly) _Bool hasEyebrowForegroundColor;
@property (retain, nonatomic) NTPBColor *eyebrowForegroundColor;
@property (nonatomic, readonly) _Bool hasCardBackgroundColor;
@property (retain, nonatomic) NTPBColor *cardBackgroundColor;
@property (nonatomic, readonly) _Bool hasCardForegroundColor;
@property (retain, nonatomic) NTPBColor *cardForegroundColor;
@property (nonatomic, readonly) _Bool hasSauceGradient;
@property (retain, nonatomic) NTPBColorGradient *sauceGradient;
@property (nonatomic, readonly) _Bool hasCallToActionBackgroundColor;
@property (retain, nonatomic) NTPBColor *callToActionBackgroundColor;
@property (nonatomic, readonly) _Bool hasCallToActionForegroundColor;
@property (retain, nonatomic) NTPBColor *callToActionForegroundColor;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
