/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

#import <CoreSuggestions/SGObject.h>

@class NSString, SGExtractionInfo;

@interface SGName : SGObject

{
    NSString *_fullName;
    NSString *_firstName;
    NSString *_middleName;
    NSString *_lastName;
    NSString *_prefix;
    NSString *_suffix;
    SGExtractionInfo *_extractionInfo;
}

@property (nonatomic, readonly) NSString *fullName;
@property (nonatomic, readonly) NSString *firstName;
@property (nonatomic, readonly) NSString *middleName;
@property (nonatomic, readonly) NSString *lastName;
@property (nonatomic, readonly) NSString *prefix;
@property (nonatomic, readonly) NSString *suffix;
@property (nonatomic, readonly) SGExtractionInfo *extractionInfo;

+ (_Bool)supportsSecureCoding;
+ (id)nameWithFirstName:(id)arg1 lastName:(id)arg2 middleName:(id)arg3 fullName:(id)arg4 prefix:(id)arg5 suffix:(id)arg6 withRecordId:(id)arg7 origin:(id)arg8;
+ (id)nameWithFirstName:(id)arg1 lastName:(id)arg2 withRecordId:(id)arg3 origin:(id)arg4;
+ (id)nameWithFirstName:(id)arg1 withRecordId:(id)arg2 origin:(id)arg3;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)name;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFirstName:(id)arg1 middleName:(id)arg2 lastName:(id)arg3 fullName:(id)arg4 prefix:(id)arg5 suffix:(id)arg6 recordId:(id)arg7 origin:(id)arg8 extractionInfo:(id)arg9;
- (id)initWithFirstName:(id)arg1 middleName:(id)arg2 lastName:(id)arg3 fullName:(id)arg4 prefix:(id)arg5 suffix:(id)arg6 recordId:(id)arg7 origin:(id)arg8;
- (_Bool)isEqualToName:(id)arg1;

@end
