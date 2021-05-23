/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKDataBindingValue.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface IKDataBindingLiteral : IKDataBindingValue

{
    NSString *_literal;
}

@property (nonatomic, readonly) NSString *literal;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithLiteral:(id)arg1;

@end
