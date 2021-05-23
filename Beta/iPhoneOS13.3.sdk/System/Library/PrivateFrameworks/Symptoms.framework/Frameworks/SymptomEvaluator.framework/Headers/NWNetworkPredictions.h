/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <Foundation/NSObject.h>

@class NSDate;

@interface NWNetworkPredictions : NSObject

{
    NSDate *_changePointAt;
    long long _toQuality;
    double _confidence;
    long long _resolutionSeconds;
}

@property (readonly) NSDate *changePointAt;
@property (readonly) long long toQuality;
@property (readonly) double confidence;
@property (readonly) long long resolutionSeconds;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSpec:(id)arg1 toQuality:(long long)arg2 withConfidence:(double)arg3 resolutionSeconds:(unsigned int)arg4;

@end
