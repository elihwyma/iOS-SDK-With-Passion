/*
 Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

#import <NSObject.h>

@interface _DPRandomizedBit : NSObject

{
    unsigned long long _index;
    long long _value;
}

@property (nonatomic, readonly) unsigned long long index;
@property (nonatomic, readonly) long long value;

+ (id)randomizedBit:(long long)arg1 atIndex:(unsigned long long)arg2;

- (id)init;
- (id)description;
- (id)initBit:(long long)arg1 atIndex:(unsigned long long)arg2;

@end
