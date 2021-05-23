/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <NeutrinoCore/NUAutoCalculator.h>

@interface PIRedEyeAutoCalculator : NUAutoCalculator

{
    _Bool _force;
}

@property _Bool force;

- (id)_options;
- (void)submit:(CDUnknownBlockType)arg1;
- (void)_configureRequest:(id)arg1;

@end
