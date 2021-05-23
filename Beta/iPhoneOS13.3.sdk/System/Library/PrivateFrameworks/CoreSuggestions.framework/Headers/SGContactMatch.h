/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

#import <Foundation/NSObject.h>

@class NSArray, SGContact, SGMatchedDetails, SGObject, SGRecordId;

@interface SGContactMatch : NSObject

{
    SGRecordId *_matchingFieldRecordId;
    long long _matchingFieldType;
    SGContact *_contact;
    NSArray *_matchTokens;
    SGMatchedDetails *_matchedDetails;
}

@property (nonatomic, readonly) SGContact *contact;
@property (nonatomic, readonly) SGObject *matchingField;
@property (nonatomic, readonly) long long matchingFieldType;
@property (nonatomic, readonly) NSArray *matchTokens;
@property (nonatomic, readonly) SGMatchedDetails *matchedDetails;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContact:(id)arg1 matchTokens:(id)arg2 matchInfo:(id)arg3;
- (id)initWithContact:(id)arg1 matchingFieldRecordId:(id)arg2 matchTokens:(id)arg3;
- (id)initWithContact:(id)arg1 matchingEmailAddressRecordId:(id)arg2;
- (id)initWithContact:(id)arg1 matchingNameRecordId:(id)arg2;
- (id)initWithContact:(id)arg1 matchingNameRecordId:(id)arg2 matchTokens:(id)arg3;
- (id)initWithContact:(id)arg1 matchingEmailAddressRecordId:(id)arg2 matchTokens:(id)arg3;
- (id)initWithContact:(id)arg1 matchingPhoneRecordId:(id)arg2 matchTokens:(id)arg3;
- (_Bool)isEqualToContactMatch:(id)arg1;

@end
