/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

#import <TSReading/Swift-Protocol.h>

@interface TSWPLineSpacing : NSObject <Swift>

{
    int _mode;
    double _amount;
    double _baselineRule;
}

+ (id)lineSpacing;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (int)mode;
- (double)amount;
- (id)initWithMode:(int)arg1 amount:(double)arg2;
- (id)initWithMode:(int)arg1 amount:(double)arg2 baselineRule:(double)arg3;
- (double)baselineRule;

@end
