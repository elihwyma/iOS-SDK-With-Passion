/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <Foundation/NSObject.h>

@interface LQMPredictionInternalRecord : NSObject

{
    unsigned int _offset;
    unsigned int _length;
    unsigned int _level;
    double _confidence;
}

@property (readonly) unsigned int offset;
@property (readonly) unsigned int length;
@property (readonly) unsigned int level;
@property (readonly) double confidence;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)adjustOffsetTo:(unsigned int)arg1;
- (void)adjustConfidenceTo:(double)arg1;
- (void)adjustLengthTo:(unsigned int)arg1;
- (id)initWithOffset:(unsigned int)arg1 length:(unsigned int)arg2 level:(unsigned int)arg3 confidence:(double)arg4;

@end
