/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <ProtocolBuffer/PBCodable.h>

@interface _MRTextInputTraitsProtobuf : PBCodable

{
    struct {
        unsigned long long *list;
        unsigned long long count;
        unsigned long long size;
    } _pINEntrySeparatorIndexes;
    unsigned long long _validTextRangeLength;
    unsigned long long _validTextRangeLocation;
    int _autocapitalizationType;
    int _keyboardType;
    int _returnKeyType;
    _Bool _autocorrection;
    _Bool _enablesReturnKeyAutomatically;
    _Bool _secureTextEntry;
    _Bool _spellchecking;
    struct {
        unsigned int validTextRangeLength:1;
        unsigned int validTextRangeLocation:1;
        unsigned int autocapitalizationType:1;
        unsigned int keyboardType:1;
        unsigned int returnKeyType:1;
        unsigned int autocorrection:1;
        unsigned int enablesReturnKeyAutomatically:1;
        unsigned int secureTextEntry:1;
        unsigned int spellchecking:1;
    } _has;
}

@property (nonatomic) _Bool hasAutocapitalizationType;
@property (nonatomic) int autocapitalizationType;
@property (nonatomic) _Bool hasKeyboardType;
@property (nonatomic) int keyboardType;
@property (nonatomic) _Bool hasReturnKeyType;
@property (nonatomic) int returnKeyType;
@property (nonatomic) _Bool hasAutocorrection;
@property (nonatomic) _Bool autocorrection;
@property (nonatomic) _Bool hasSpellchecking;
@property (nonatomic) _Bool spellchecking;
@property (nonatomic) _Bool hasEnablesReturnKeyAutomatically;
@property (nonatomic) _Bool enablesReturnKeyAutomatically;
@property (nonatomic) _Bool hasSecureTextEntry;
@property (nonatomic) _Bool secureTextEntry;
@property (nonatomic) _Bool hasValidTextRangeLocation;
@property (nonatomic) unsigned long long validTextRangeLocation;
@property (nonatomic) _Bool hasValidTextRangeLength;
@property (nonatomic) unsigned long long validTextRangeLength;
@property (nonatomic, readonly) unsigned long long pINEntrySeparatorIndexesCount;
@property (nonatomic, readonly) unsigned long long *pINEntrySeparatorIndexes;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)clearPINEntrySeparatorIndexes;
- (unsigned long long)pINEntrySeparatorIndexesAtIndex:(unsigned long long)arg1;
- (void)addPINEntrySeparatorIndexes:(unsigned long long)arg1;
- (id)autocapitalizationTypeAsString:(int)arg1;
- (int)StringAsAutocapitalizationType:(id)arg1;
- (id)keyboardTypeAsString:(int)arg1;
- (int)StringAsKeyboardType:(id)arg1;
- (id)returnKeyTypeAsString:(int)arg1;
- (int)StringAsReturnKeyType:(id)arg1;
- (void)setPINEntrySeparatorIndexes:(unsigned long long *)arg1 count:(unsigned long long)arg2;

@end
