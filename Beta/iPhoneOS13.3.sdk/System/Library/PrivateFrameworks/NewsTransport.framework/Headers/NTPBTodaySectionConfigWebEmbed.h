/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

@interface NTPBTodaySectionConfigWebEmbed : PBCodable

{
    unsigned long long _preferredSlotAllocation;
    NSMutableArray *_embedFonts;
    NSString *_urlString;
    struct {
        unsigned int preferredSlotAllocation:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasUrlString;
@property (retain, nonatomic) NSString *urlString;
@property (retain, nonatomic) NSMutableArray *embedFonts;
@property (nonatomic) _Bool hasPreferredSlotAllocation;
@property (nonatomic) unsigned long long preferredSlotAllocation;

+ (Class)embedFontsType;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)addEmbedFonts:(id)arg1;
- (void)clearEmbedFonts;
- (unsigned long long)embedFontsCount;
- (id)embedFontsAtIndex:(unsigned long long)arg1;

@end
