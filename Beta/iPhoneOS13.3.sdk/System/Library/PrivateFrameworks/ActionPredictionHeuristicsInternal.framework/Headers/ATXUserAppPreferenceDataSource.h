/*
 Image: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
 */

#import <NSObject.h>

@class ATXHeuristicDevice;

@interface ATXUserAppPreferenceDataSource : NSObject

{
    ATXHeuristicDevice *_device;
}

- (id)initWithDevice:(id)arg1;
- (_Bool)parametersExistInValidCombinationsForParameters:(id)arg1 andValidCombinations:(id)arg2;
- (_Bool)appSupportsParameterCombination:(id)arg1 forIntent:(id)arg2 forBundleId:(id)arg3;
- (void)preferredAppForIntentName:(id)arg1 andParameterCombination:(id)arg2 callback:(CDUnknownBlockType)arg3;

@end
