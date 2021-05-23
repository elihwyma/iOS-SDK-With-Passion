/*
 Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

#import <Foundation/NSObject.h>

#import <TSUtility/Swift-Protocol.h>

@interface TSUDuration : NSObject <Swift>

{
    double mTimeInterval;
}

+ (id)durationWithTimeInterval:(double)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (double)timeInterval;
- (id)initWithTimeInterval:(double)arg1;

@end
