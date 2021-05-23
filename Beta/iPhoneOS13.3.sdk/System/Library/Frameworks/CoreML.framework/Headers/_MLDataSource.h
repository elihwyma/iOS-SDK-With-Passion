/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <NSObject.h>

@class NSDictionary;

@interface _MLDataSource : NSObject

{
    NSDictionary *_dataTensorDictionary;
}

@property (retain, nonatomic) NSDictionary *dataTensorDictionary;

- (id)dataPointAtIndex:(unsigned long long)arg1 error:(id *)arg2;
- (unsigned long long)numberOfDataPoints;
- (id)initWithMLFeatureProvider:(id)arg1 forPrediction:(_Bool)arg2 neuralNetworkEngine:(id)arg3 error:(id *)arg4;

@end
