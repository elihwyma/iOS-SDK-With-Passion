/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary;

@interface CSEndpointerMetrics : NSObject

{
    double _totalAudioRecorded;
    NSArray *_featuresAtEndpoint;
    long long _endpointerType;
    NSDictionary *_serverFeatureLatencyDistribution;
    NSDictionary *_additionalMetrics;
}

@property (nonatomic) double totalAudioRecorded;
@property (retain, nonatomic) NSArray *featuresAtEndpoint;
@property (nonatomic) long long endpointerType;
@property (retain, nonatomic) NSDictionary *serverFeatureLatencyDistribution;
@property (retain, nonatomic) NSDictionary *additionalMetrics;

- (id)initWithTotalAudioRecorded:(double)arg1 featuresAtEndpoint:(id)arg2 endpointerType:(long long)arg3 serverFeatureLatencyDistribution:(id)arg4 additionalMetrics:(id)arg5;

@end
