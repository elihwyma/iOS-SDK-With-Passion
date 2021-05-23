/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

#import <CoreSuggestions/SGLabeledObject.h>

@class NSString;

@interface SGEmailAddress : SGLabeledObject

{
    NSString *_emailAddress;
}

@property (nonatomic, readonly) NSString *emailAddress;

+ (_Bool)supportsSecureCoding;
+ (id)emailAddress:(id)arg1 label:(id)arg2 extractionInfo:(id)arg3 withRecordId:(id)arg4;
+ (id)emailAddress:(id)arg1 label:(id)arg2 extractionType:(unsigned long long)arg3 withRecordId:(id)arg4 origin:(id)arg5;
+ (id)emailAddress:(id)arg1 label:(id)arg2 extractionType:(unsigned long long)arg3 withRecordId:(id)arg4;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEmailAddress:(id)arg1 label:(id)arg2 extractionInfo:(id)arg3 recordId:(id)arg4;
- (_Bool)isEqualToEmailAddress:(id)arg1;

@end
