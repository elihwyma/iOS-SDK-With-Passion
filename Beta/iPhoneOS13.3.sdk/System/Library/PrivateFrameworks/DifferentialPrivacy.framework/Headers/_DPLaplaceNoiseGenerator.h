/*
 Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

#import <NSObject.h>

@interface _DPLaplaceNoiseGenerator : NSObject

{
    double _b;
}

@property (nonatomic, readonly) double b;

+ (id)zeroMeanLaplaceNoiseGenerator:(double)arg1;

- (id)init;
- (id)description;
- (id)initWithScale:(double)arg1;
- (double)sample;

@end
