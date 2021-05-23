/*
 Image: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
 */

#import <Foundation/NSObject.h>

#import <SoundAnalysis/Swift-Protocol.h>

@class MLMultiArray, NSString;

@interface SNFeaturePrint : NSObject <Swift>

{
    long long _featurePrintType;
    MLMultiArray *_featureVector;
    CDStruct_e83c9415 timeRange;
}

@property (nonatomic, readonly) long long featurePrintType;
@property (nonatomic, readonly) MLMultiArray *featureVector;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) CDStruct_e83c9415 timeRange;

- (void)setTimeRange:(CDStruct_e83c9415)arg1;
- (id)initWithFeaturePrintType:(long long)arg1 featureVector:(id)arg2;

@end
