/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface AXMVisionFeatureColorInfo : NSObject

{
    double _remainingColorWeight;
    NSArray *_mainColors;
    NSArray *_mainColorWeights;
}

@property (retain, nonatomic) NSArray *mainColors;
@property (retain, nonatomic) NSArray *mainColorWeights;
@property (nonatomic) double remainingColorWeight;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setMainColors:(id)arg1 weights:(id)arg2;
- (void)enumerateMainColors:(CDUnknownBlockType)arg1;

@end
