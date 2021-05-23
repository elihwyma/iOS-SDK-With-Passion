/*
 Image: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface BCSChatSuggestMessage : PBCodable

{
    long long _phoneHash;
    NSString *_backgroundColor;
    NSString *_bizId;
    NSMutableArray *_callToActions;
    NSMutableArray *_chatOpenHours;
    NSString *_group;
    NSString *_intentId;
    NSString *_name;
    NSMutableArray *_phoneOpenHours;
    NSString *_squareLogoUrl;
    NSString *_timeZone;
    NSString *_tintColor;
    NSMutableArray *_visibilities;
    NSString *_wideLogoUrl;
    _Bool _isVerified;
    struct {
        unsigned int phoneHash:1;
        unsigned int isVerified:1;
    } _has;
}

@property (nonatomic) _Bool hasPhoneHash;
@property (nonatomic) long long phoneHash;
@property (nonatomic, readonly) _Bool hasBizId;
@property (retain, nonatomic) NSString *bizId;
@property (nonatomic, readonly) _Bool hasName;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSMutableArray *chatOpenHours;
@property (retain, nonatomic) NSMutableArray *phoneOpenHours;
@property (nonatomic, readonly) _Bool hasTimeZone;
@property (retain, nonatomic) NSString *timeZone;
@property (nonatomic, readonly) _Bool hasSquareLogoUrl;
@property (retain, nonatomic) NSString *squareLogoUrl;
@property (nonatomic, readonly) _Bool hasWideLogoUrl;
@property (retain, nonatomic) NSString *wideLogoUrl;
@property (nonatomic, readonly) _Bool hasBackgroundColor;
@property (retain, nonatomic) NSString *backgroundColor;
@property (nonatomic, readonly) _Bool hasTintColor;
@property (retain, nonatomic) NSString *tintColor;
@property (nonatomic) _Bool hasIsVerified;
@property (nonatomic) _Bool isVerified;
@property (retain, nonatomic) NSMutableArray *callToActions;
@property (retain, nonatomic) NSMutableArray *visibilities;
@property (nonatomic, readonly) _Bool hasIntentId;
@property (retain, nonatomic) NSString *intentId;
@property (nonatomic, readonly) _Bool hasGroup;
@property (retain, nonatomic) NSString *group;

+ (Class)chatOpenHoursType;
+ (Class)phoneOpenHoursType;
+ (Class)callToActionsType;
+ (Class)visibilitiesType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addChatOpenHours:(id)arg1;
- (void)addPhoneOpenHours:(id)arg1;
- (void)addCallToActions:(id)arg1;
- (void)addVisibilities:(id)arg1;
- (unsigned long long)chatOpenHoursCount;
- (void)clearChatOpenHours;
- (id)chatOpenHoursAtIndex:(unsigned long long)arg1;
- (unsigned long long)phoneOpenHoursCount;
- (void)clearPhoneOpenHours;
- (id)phoneOpenHoursAtIndex:(unsigned long long)arg1;
- (unsigned long long)callToActionsCount;
- (void)clearCallToActions;
- (id)callToActionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)visibilitiesCount;
- (void)clearVisibilities;
- (id)visibilitiesAtIndex:(unsigned long long)arg1;

@end
