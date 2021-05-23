/*
 Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <TextInput/TITypologyRecord.h>

@class NSArray, NSString, TIKeyboardLayout;

@interface TITypologyRecordReplacements : TITypologyRecord

{
    NSString *_string;
    TIKeyboardLayout *_keyLayout;
    NSArray *_candidates;
}

@property (copy, nonatomic) NSString *string;
@property (retain, nonatomic) TIKeyboardLayout *keyLayout;
@property (retain, nonatomic) NSArray *candidates;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)shortDescription;
- (void)applyToStatistic:(id)arg1;

@end
