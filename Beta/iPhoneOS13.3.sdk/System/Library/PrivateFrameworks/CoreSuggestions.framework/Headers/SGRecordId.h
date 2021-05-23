/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

#import <Foundation/NSObject.h>

@interface SGRecordId : NSObject

{
    long long _internalEntityId;
}

+ (_Bool)supportsSecureCoding;
+ (id)recordIdWithInternalEntityId:(long long)arg1;
+ (id)recordIdWithNumericValue:(long long)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)numericValue;
- (id)initWithInternalEntityId:(long long)arg1;
- (long long)internalEntityId;
- (_Bool)isEqualToRecordId:(id)arg1;

@end
