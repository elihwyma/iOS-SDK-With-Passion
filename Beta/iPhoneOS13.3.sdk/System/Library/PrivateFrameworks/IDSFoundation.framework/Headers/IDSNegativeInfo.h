/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

#import <IDSFoundation/Swift-Protocol.h>

@interface IDSNegativeInfo : NSObject <Swift>

{
    double _time;
    long long _count;
}

@property (nonatomic, readonly) double time;
@property (nonatomic, readonly) long long count;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTime:(double)arg1 count:(long long)arg2;

@end
