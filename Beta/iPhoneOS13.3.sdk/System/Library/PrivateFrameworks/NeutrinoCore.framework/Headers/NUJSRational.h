/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

@interface NUJSRational : NSObject

{
    long long _numerator;
    long long _denominator;
}

@property long long numerator;
@property long long denominator;

- (id)init;
- (double)toDouble;
- (id)initWithNumerator:(long long)arg1 denominator:(long long)arg2;

@end
