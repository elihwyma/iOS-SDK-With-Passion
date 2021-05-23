/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@interface HUTriggerActionFlow : NSObject

{
    _Bool _hasChangedState;
    unsigned long long _flowState;
}

@property (nonatomic, readonly) _Bool hasChangedState;
@property (nonatomic, readonly) unsigned long long flowState;
@property (nonatomic, readonly) _Bool isLastState;
@property (nonatomic, readonly) _Bool isFinished;
@property (nonatomic, readonly) _Bool isStandalone;
@property (nonatomic, readonly) _Bool isSingleFlow;

+ (id)selectFlowForState:(unsigned long long)arg1;

- (unsigned long long)_nextState;
- (id)initWithFlowState:(unsigned long long)arg1;
- (id)initWithEditorMode:(unsigned long long)arg1;
- (id)initWithFlowState:(unsigned long long)arg1 hasChangedState:(_Bool)arg2;
- (id)getNextState;

@end
