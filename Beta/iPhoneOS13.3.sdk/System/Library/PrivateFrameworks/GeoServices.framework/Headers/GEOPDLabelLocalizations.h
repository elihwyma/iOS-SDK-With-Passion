/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray;

@interface GEOPDLabelLocalizations : PBCodable

{
    NSMutableArray *_localizedStrings;
}

@property (retain, nonatomic) NSMutableArray *localizedStrings;

+ (_Bool)isValid:(id)arg1;
+ (Class)localizedStringType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (unsigned long long)localizedStringsCount;
- (void)clearLocalizedStrings;
- (id)bestLocalizedName;
- (void)addLocalizedString:(id)arg1;
- (id)localizedStringAtIndex:(unsigned long long)arg1;

@end
