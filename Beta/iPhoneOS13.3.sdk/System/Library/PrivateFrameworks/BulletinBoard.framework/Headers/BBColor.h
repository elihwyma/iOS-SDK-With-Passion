/*
 Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import <Foundation/NSObject.h>

@interface BBColor : NSObject

{
    double _red;
    double _green;
    double _blue;
    double _alpha;
}

@property (nonatomic, readonly) double red;
@property (nonatomic, readonly) double green;
@property (nonatomic, readonly) double blue;
@property (nonatomic, readonly) double alpha;

+ (_Bool)supportsSecureCoding;
+ (id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)replacementObjectForCoder:(id)arg1;
- (id)awakeAfterUsingCoder:(id)arg1;
- (id)_initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;

@end
