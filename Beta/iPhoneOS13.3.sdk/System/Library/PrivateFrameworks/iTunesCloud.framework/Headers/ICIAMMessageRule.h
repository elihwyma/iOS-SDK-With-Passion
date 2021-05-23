/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <PBCodable.h>

#import <iTunesCloud/Swift-Protocol.h>

@class ICIAMTriggerCondition, NSMutableArray, NSString;

@interface ICIAMMessageRule : PBCodable <Swift>

{
    NSString *_identifier;
    int _ruleOperator;
    NSMutableArray *_subrules;
    ICIAMTriggerCondition *_triggerCondition;
    NSString *_triggerEventName;
    int _type;
    struct {
        unsigned int ruleOperator:1;
        unsigned int type:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) _Bool hasType;
@property (nonatomic) int type;
@property (nonatomic) _Bool hasRuleOperator;
@property (nonatomic) int ruleOperator;
@property (retain, nonatomic) NSMutableArray *subrules;
@property (nonatomic, readonly) _Bool hasTriggerCondition;
@property (retain, nonatomic) ICIAMTriggerCondition *triggerCondition;
@property (nonatomic, readonly) _Bool hasTriggerEventName;
@property (retain, nonatomic) NSString *triggerEventName;

+ (Class)subrulesType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)typeAsString:(int)arg1;
- (int)StringAsType:(id)arg1;
- (void)addSubrules:(id)arg1;
- (unsigned long long)subrulesCount;
- (void)clearSubrules;
- (id)subrulesAtIndex:(unsigned long long)arg1;
- (id)ruleOperatorAsString:(int)arg1;
- (int)StringAsRuleOperator:(id)arg1;

@end
