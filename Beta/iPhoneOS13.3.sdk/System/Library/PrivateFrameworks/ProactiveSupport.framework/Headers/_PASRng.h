/*
 Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
 */

#import <Foundation/NSObject.h>

@interface _PASRng : NSObject

{
    struct {
        unsigned long long s[2];
    } _state;
}

- (id)init;
- (unsigned long long)next;
- (id)initWithSeed:(unsigned long long)arg1;
- (float)nextFloat;
- (double)nextDouble;

@end
