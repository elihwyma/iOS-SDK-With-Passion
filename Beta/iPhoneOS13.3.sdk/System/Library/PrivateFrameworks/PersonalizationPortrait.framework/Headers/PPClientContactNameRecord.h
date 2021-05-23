/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
 */

@class NSArray, NSDictionary, NSString;

@interface PPClientContactNameRecord

{
    NSString *_identifier;
    double _score;
    unsigned char _source;
    NSString *_sourceIdentifier;
    unsigned char _changeType;
    NSString *_firstName;
    NSString *_phoneticFirstName;
    NSString *_middleName;
    NSString *_phoneticMiddleName;
    NSString *_lastName;
    NSString *_phoneticLastName;
    NSString *_organizationName;
    NSString *_jobTitle;
    NSString *_nickname;
    NSDictionary *_relatedNames;
    NSArray *_streetNames;
    NSArray *_cityNames;
}

- (id)identifier;
- (unsigned char)source;
- (unsigned char)changeType;
- (id)middleName;
- (id)nickname;
- (double)score;
- (id)organizationName;
- (id)sourceIdentifier;
- (id)firstName;
- (id)lastName;
- (id)phoneticMiddleName;
- (id)jobTitle;
- (id)phoneticFirstName;
- (id)phoneticLastName;
- (id)relatedNames;
- (id)initWithIdentifier:(id)arg1 score:(double)arg2 source:(unsigned char)arg3 sourceIdentifier:(id)arg4 changeType:(unsigned char)arg5 firstName:(id)arg6 phoneticFirstName:(id)arg7 middleName:(id)arg8 phoneticMiddleName:(id)arg9 lastName:(id)arg10 phoneticLastName:(id)arg11 organizationName:(id)arg12 jobTitle:(id)arg13 nickname:(id)arg14 relatedNames:(id)arg15 streetNames:(id)arg16 cityNames:(id)arg17;
- (id)streetNames;
- (id)cityNames;

@end
