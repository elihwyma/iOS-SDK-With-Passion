/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
 */

#import <NSObject.h>

@class NSString;

@protocol NSCopying><NSSecureCoding;

@interface PPLabeledValue : NSObject

{
    NSString *_label;
    NSObject<NSCopying><NSSecureCoding> *_value;
}

@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) NSObject<NSCopying><NSSecureCoding> *value;

+ (_Bool)supportsSecureCoding;
+ (id)labeledValueWithLabel:(id)arg1 value:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLabel:(id)arg1 value:(id)arg2;
- (_Bool)isEqualToLabeledValue:(id)arg1;

@end
