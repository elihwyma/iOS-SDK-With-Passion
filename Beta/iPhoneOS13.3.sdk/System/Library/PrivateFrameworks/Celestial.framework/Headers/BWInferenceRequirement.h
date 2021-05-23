/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class BWInferenceConfiguration;

@protocol BWInferenceProvider;

@interface BWInferenceRequirement : NSObject

{
    id <BWInferenceProvider> _provider;
    BWInferenceConfiguration *_configuration;
}

@property (nonatomic, readonly) id <BWInferenceProvider> provider;
@property (nonatomic, readonly) BWInferenceConfiguration *configuration;

- (void)dealloc;
- (id)initWithProvider:(id)arg1 configuration:(id)arg2;

@end
