/*
 Image: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
 */

#import <NSObject.h>

@class NSDictionary;

@interface ETOptimizerDefinition : NSObject

{
    long long _type;
    NSDictionary *_optimizationParameters;
}

@property (readonly) long long type;
@property (nonatomic, readonly) NSDictionary *optimizationParameters;

- (id)initWithOptimizationAlgorithm:(long long)arg1 parameters:(id)arg2 error:(id *)arg3;

@end
