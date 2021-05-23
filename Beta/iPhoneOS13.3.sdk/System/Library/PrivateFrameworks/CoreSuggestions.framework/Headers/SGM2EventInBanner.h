/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface SGM2EventInBanner : PBCodable

{
    int _app;
    int _category;
    int _extracted;
    NSString *_key;
    int _state;
    struct {
        unsigned int app:1;
        unsigned int category:1;
        unsigned int extracted:1;
        unsigned int state:1;
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

@end
