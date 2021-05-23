/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngineUI.framework/RelevanceEngineUI
 */

#import <RelevanceEngineUI/REUITrainingContext.h>

@protocol _REUIControllerTrainingContextDelegate;

@interface _REUIControllerTrainingContext : REUITrainingContext

{
    double _maximumNegativeDwellTime;
    double _minimumPositiveDwellTime;
    unsigned long long _onScreenElementCount;
    id <_REUIControllerTrainingContextDelegate> _delegate;
}

@property (nonatomic) double maximumNegativeDwellTime;
@property (nonatomic) double minimumPositiveDwellTime;
@property (nonatomic) unsigned long long onScreenElementCount;
@property (weak, nonatomic) id <_REUIControllerTrainingContextDelegate> delegate;

- (id)elementsOrdered:(unsigned long long)arg1 relativeToElement:(id)arg2;
- (_Bool)elementIsAvailable:(id)arg1;
- (id)interactionTypeForElement:(id)arg1;

@end
