/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

#import <TSReading/Swift-Protocol.h>

@interface TSWPRuleOffset : NSObject <Swift>

{
    double _dX;
    double _dY;
}

@property (nonatomic, readonly) double dX;
@property (nonatomic, readonly) double dY;

+ (id)ruleOffset;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct CGPoint)pointValue;
- (struct CGSize)sizeValue;
- (id)initWithDX:(double)arg1 dY:(double)arg2;

@end
