/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface SGM2EventBannerConfirmed : PBCodable

{
    int _app;
    int _category;
    int _dateAdj;
    int _duraAdj;
    int _extracted;
    NSString *_key;
    int _state;
    int _titleAdj;
    struct {
        unsigned int app:1;
        unsigned int category:1;
        unsigned int dateAdj:1;
        unsigned int duraAdj:1;
        unsigned int extracted:1;
        unsigned int state:1;
        unsigned int titleAdj:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasKey;
@property (retain, nonatomic) NSString *key;
@property (nonatomic) _Bool hasApp;
@property (nonatomic) int app;
@property (nonatomic) _Bool hasCategory;
@property (nonatomic) int category;
@property (nonatomic) _Bool hasExtracted;
@property (nonatomic) int extracted;
@property (nonatomic) _Bool hasState;
@property (nonatomic) int state;
@property (nonatomic) _Bool hasTitleAdj;
@property (nonatomic) int titleAdj;
@property (nonatomic) _Bool hasDateAdj;
@property (nonatomic) int dateAdj;
@property (nonatomic) _Bool hasDuraAdj;
@property (nonatomic) int duraAdj;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)categoryAsString:(int)arg1;
- (int)StringAsCategory:(id)arg1;
- (id)stateAsString:(int)arg1;
- (int)StringAsState:(id)arg1;
- (id)appAsString:(int)arg1;
- (int)StringAsApp:(id)arg1;
- (id)extractedAsString:(int)arg1;
- (int)StringAsExtracted:(id)arg1;
- (id)titleAdjAsString:(int)arg1;
- (int)StringAsTitleAdj:(id)arg1;
- (id)dateAdjAsString:(int)arg1;
- (int)StringAsDateAdj:(id)arg1;
- (id)duraAdjAsString:(int)arg1;
- (int)StringAsDuraAdj:(id)arg1;

@end
