/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

#import <CoreSuggestions/SGLabeledObject.h>

@class NSDateComponents;

@interface SGDateComponents : SGLabeledObject

{
    NSDateComponents *_dateComponents;
}

@property (nonatomic, readonly) NSDateComponents *dateComponents;

+ (_Bool)supportsSecureCoding;
+ (id)dateComponents:(id)arg1 label:(id)arg2 extractionInfo:(id)arg3 withRecordId:(id)arg4;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDateComponents:(id)arg1 label:(id)arg2 extractionInfo:(id)arg3 recordId:(id)arg4;
- (_Bool)isEqualToDateComponents:(id)arg1;

@end
