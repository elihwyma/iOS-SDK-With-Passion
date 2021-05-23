/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface SGM2ContactConfirmed : PBCodable

{
    int _app;
    int _extracted;
    NSString *_key;
    _Bool _firstNameAdj;
    _Bool _isUpdate;
    _Bool _lastNameAdj;
    _Bool _middleNameAdj;
    struct {
        unsigned int app:1;
        unsigned int extracted:1;
        unsigned int firstNameAdj:1;
        unsigned int isUpdate:1;
        unsigned int lastNameAdj:1;
        unsigned int middleNameAdj:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasKey;
@property (retain, nonatomic) NSString *key;
@property (nonatomic) _Bool hasApp;
@property (nonatomic) int app;
@property (nonatomic) _Bool hasFirstNameAdj;
@property (nonatomic) _Bool firstNameAdj;
@property (nonatomic) _Bool hasLastNameAdj;
@property (nonatomic) _Bool lastNameAdj;
@property (nonatomic) _Bool hasMiddleNameAdj;
@property (nonatomic) _Bool middleNameAdj;
@property (nonatomic) _Bool hasIsUpdate;
@property (nonatomic) _Bool isUpdate;
@property (nonatomic) _Bool hasExtracted;
@property (nonatomic) int extracted;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)appAsString:(int)arg1;
- (int)StringAsApp:(id)arg1;
- (id)extractedAsString:(int)arg1;
- (int)StringAsExtracted:(id)arg1;

@end
