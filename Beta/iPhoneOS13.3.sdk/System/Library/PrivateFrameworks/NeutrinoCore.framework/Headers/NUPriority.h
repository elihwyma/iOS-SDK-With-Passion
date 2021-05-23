/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

@interface NUPriority : NSObject

{
    long long _level;
    double _order;
}

@property (nonatomic, readonly) long long level;
@property (nonatomic, readonly) double order;
@property (nonatomic, readonly) _Bool isHigh;
@property (nonatomic, readonly) _Bool isLow;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (long long)compare:(id)arg1;
- (id)initWithLevel:(long long)arg1;
- (id)initWithLevel:(long long)arg1 order:(double)arg2;
- (_Bool)isEqualToPriority:(id)arg1;

@end
