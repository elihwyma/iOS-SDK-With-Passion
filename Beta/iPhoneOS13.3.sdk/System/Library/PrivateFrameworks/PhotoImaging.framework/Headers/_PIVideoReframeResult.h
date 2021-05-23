/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <NeutrinoCore/_NURenderResult.h>

@class NSArray, NSString;

@protocol NURenderStatistics;

@interface _PIVideoReframeResult : _NURenderResult

{
    NSArray *_keyframes;
    double _confidence;
    CDStruct_996ac03c _stabCropRect;
}

@property (copy, nonatomic, readonly) NSArray *keyframes;
@property (nonatomic, readonly) CDStruct_996ac03c stabCropRect;
@property (nonatomic, readonly) double confidence;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) id <NURenderStatistics> statistics;

- (id)initWithKeyframes:(id)arg1 confidence:(double)arg2 stabCropRect:(CDStruct_996ac03c)arg3;

@end
