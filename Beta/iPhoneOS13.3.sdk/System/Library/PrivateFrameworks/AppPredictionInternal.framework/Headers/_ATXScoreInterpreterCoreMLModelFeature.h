/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface _ATXScoreInterpreterCoreMLModelFeature : NSObject

{
    NSString *_featureName;
    long long _featureType;
    unsigned long long _multiArraySize;
}

@property (nonatomic, readonly) NSString *featureName;
@property (nonatomic, readonly) long long featureType;
@property (nonatomic, readonly) unsigned long long multiArraySize;

- (id)init;
- (id)initWithFeatureName:(id)arg1 multiArraySize:(unsigned long long)arg2;
- (id)initWithFeatureName:(id)arg1;

@end
