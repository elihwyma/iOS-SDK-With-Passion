/*
 Image: /System/Library/Frameworks/Speech.framework/Speech
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface SFAcousticFeature : NSObject

{
    NSArray *_acousticFeatureValuePerFrame;
    double _frameDuration;
}

@property (copy, nonatomic, readonly) NSArray *acousticFeatureValuePerFrame;
@property (nonatomic, readonly) double frameDuration;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithAcousticFeatureValue:(id)arg1 frameDuration:(double)arg2;

@end
