/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

#import <CoreSuggestions/SGLabeledObject.h>

@class NSString;

@interface SGPhoneNumber : SGLabeledObject

{
    NSString *_phoneNumber;
}

@property (nonatomic, readonly) NSString *phoneNumber;

+ (_Bool)supportsSecureCoding;
+ (id)phoneNumber:(id)arg1 label:(id)arg2 extractionInfo:(id)arg3 recordId:(id)arg4;
+ (id)phoneNumber:(id)arg1 label:(id)arg2 extractionType:(unsigned long long)arg3 recordId:(id)arg4 origin:(id)arg5;
+ (id)phoneNumber:(id)arg1 label:(id)arg2 extractionType:(unsigned long long)arg3 recordId:(id)arg4;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPhoneNumber:(id)arg1 label:(id)arg2 extractionInfo:(id)arg3 recordId:(id)arg4;
- (_Bool)isEqualToPhoneNumber:(id)arg1;

@end
