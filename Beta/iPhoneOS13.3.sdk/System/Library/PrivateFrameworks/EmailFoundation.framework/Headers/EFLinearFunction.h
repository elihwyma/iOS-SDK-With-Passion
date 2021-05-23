/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <Foundation/NSObject.h>

@interface EFLinearFunction : NSObject

{
    double _slope;
    double _intercept;
}

@property (nonatomic) double slope;
@property (nonatomic) double intercept;

- (id)initWithSlope:(double)arg1 intercept:(double)arg2;
- (id)initWithLineThroughPoints:(id)arg1;
- (double)evaluateX:(double)arg1;
- (double)evaluateReverse:(double)arg1;

@end
