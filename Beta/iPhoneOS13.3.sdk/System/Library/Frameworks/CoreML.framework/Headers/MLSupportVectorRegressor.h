/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <CoreML/MLRegressor.h>

@class MLSVREngine;

@interface MLSupportVectorRegressor : MLRegressor

{
    MLSVREngine *_engine;
}

@property (retain) MLSVREngine *engine;

- (id)regress:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)initWithEngine:(id)arg1 interface:(id)arg2 metadata:(id)arg3 error:(id *)arg4;

@end
