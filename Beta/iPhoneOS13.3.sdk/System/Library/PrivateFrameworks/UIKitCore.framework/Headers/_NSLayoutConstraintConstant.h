/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _NSLayoutConstraintConstant : NSObject <Swift>

{
    NSString *_symbolicValue;
    double _numericValue;
}

@property (copy, nonatomic, readonly) NSString *symbolicValue;
@property (nonatomic, readonly) double numericValue;

+ (id)constantWithSymbolicValue:(id)arg1 numericValue:(double)arg2;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSymbolicValue:(id)arg1 numericValue:(double)arg2;

@end
