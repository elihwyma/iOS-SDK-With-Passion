/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, SGDateComponents, SGName, SGRecordId;

@interface SGContact : NSObject

{
    int _updatedFields;
    SGRecordId *_recordId;
    SGName *_name;
    NSArray *_emailAddresses;
    NSArray *_phones;
    NSArray *_postalAddresses;
    NSArray *_instantMessageAddresses;
    NSArray *_socialProfiles;
    SGDateComponents *_birthday;
    NSString *_photoPath;
    unsigned long long _significance;
    unsigned long long _significanceOrigin;
}

@property (copy, nonatomic) SGName *name;
@property (copy, nonatomic) NSArray *emailAddresses;
@property (copy, nonatomic) NSArray *phones;
@property (copy, nonatomic) NSArray *postalAddresses;
@property (copy, nonatomic) NSArray *instantMessageAddresses;
@property (copy, nonatomic) NSArray *socialProfiles;
@property (copy, nonatomic) SGDateComponents *birthday;
@property (nonatomic) unsigned long long significance;
@property (nonatomic) unsigned long long significanceOrigin;
@property (nonatomic) int updatedFields;
@property (nonatomic, readonly) SGRecordId *recordId;
@property (copy, nonatomic, readonly) NSString *photoPath;

+ (_Bool)supportsSecureCoding;
+ (id)contactWithId:(id)arg1 name:(id)arg2 emailAddresses:(id)arg3 phones:(id)arg4 postalAddresses:(id)arg5 instantMessageAddresses:(id)arg6 socialProfiles:(id)arg7;
+ (id)contactWithId:(id)arg1 name:(id)arg2 emailAddresses:(id)arg3 phones:(id)arg4 postalAddresses:(id)arg5 instantMessageAddresses:(id)arg6 socialProfiles:(id)arg7 birthday:(id)arg8 photoPath:(id)arg9;
+ (id)contactWithId:(id)arg1 name:(id)arg2 emailAddresses:(id)arg3 phones:(id)arg4 postalAddresses:(id)arg5;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)addresses;
- (unsigned long long)richness;
- (id)cnContact;
- (_Bool)isEqualToContact:(id)arg1;
- (id)initWithId:(id)arg1 name:(id)arg2 emailAddresses:(id)arg3 phones:(id)arg4 postalAddresses:(id)arg5 instantMessageAddresses:(id)arg6 socialProfiles:(id)arg7 birthday:(id)arg8 photoPath:(id)arg9;
- (_Bool)containsSuggestions;
- (_Bool)containsDetailSuggestions;
- (id)detailForRecordId:(id)arg1;
- (_Bool)hasNonTrivialInfo;

@end
