/*
 Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <TextInput/TITypologyRecord.h>

@class NSString;

@interface TITypologyRecordSetOriginalInput : TITypologyRecord

{
    NSString *_originalInput;
}

@property (copy, nonatomic) NSString *originalInput;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)shortDescription;
- (void)applyToStatistic:(id)arg1;

@end
