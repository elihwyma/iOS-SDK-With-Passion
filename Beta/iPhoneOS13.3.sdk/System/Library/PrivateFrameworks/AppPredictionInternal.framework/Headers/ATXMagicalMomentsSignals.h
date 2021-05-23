/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface ATXMagicalMomentsSignals : NSObject

{
    unsigned long long _predictionSource;
    long long _reason;
    NSDictionary *_reasonMetadata;
    double _confidence;
    long long _anchorType;
    unsigned long long _predictionIndex;
}

@property (nonatomic, readonly) unsigned long long predictionSource;
@property (nonatomic, readonly) long long reason;
@property (nonatomic, readonly) NSDictionary *reasonMetadata;
@property (nonatomic, readonly) double confidence;
@property (nonatomic, readonly) long long anchorType;
@property (nonatomic, readonly) unsigned long long predictionIndex;

- (id)init;
- (id)initWithPredictionSource:(unsigned long long)arg1 reason:(long long)arg2 reasonMetadata:(id)arg3 confidence:(double)arg4 anchorType:(long long)arg5 index:(unsigned long long)arg6;

@end
