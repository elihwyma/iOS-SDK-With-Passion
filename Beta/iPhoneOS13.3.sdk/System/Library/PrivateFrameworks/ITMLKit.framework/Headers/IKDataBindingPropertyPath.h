/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKDataBindingValue.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface IKDataBindingPropertyPath : IKDataBindingValue

{
    NSString *_string;
    NSArray *_accessorSequence;
}

@property (copy, nonatomic, readonly) NSString *string;
@property (copy, nonatomic, readonly) NSArray *accessorSequence;

+ (id)pathStringForAccessorSequence:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithString:(id)arg1;
- (id)propertyPathByRemovingFirstAccessor;
- (id)initWithAccessorSequence:(id)arg1;
- (id)_initWithAccessorSequence:(id)arg1;
- (id)propertyPathByCombiningAccessorSequence:(id)arg1;

@end
