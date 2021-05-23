/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <NSObject.h>

#import <CoreML/Swift-Protocol.h>

@class MLFeatureDescription;

@interface MLSequenceConstraint : NSObject <Swift>

{
    MLFeatureDescription *_valueDescription;
    struct _NSRange _countRange;
}

@property (nonatomic, readonly) MLFeatureDescription *valueDescription;
@property (nonatomic, readonly) struct _NSRange countRange;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isAllowedValue:(id)arg1 error:(id *)arg2;
- (id)initWithValueDescription:(id)arg1 countRange:(struct _NSRange)arg2;

@end
