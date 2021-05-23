/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <UIKit/UIView.h>

@class CALayer, CAStateController, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface STCAPackageView : UIView

{
    CAStateController *_stateController;
    NSMutableArray *_completionHandlers;
}

@property (retain) CAStateController *stateController;
@property (readonly) NSMutableArray *completionHandlers;
@property (readonly, getter=isInitialState) _Bool initialState;
@property (copy, readonly) NSString *stateName;
@property (readonly) CALayer *packageRootLayer;

+ (id)keyPathsForValuesAffectingPackageRootLayer;

- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)stateController:(id)arg1 transitionDidStop:(id)arg2 completed:(_Bool)arg3;
- (void)_stcaPackageViewCommonInit;
- (id)_newStateControllerWithSuperlayer:(id)arg1;
- (void)_changeAppearance;
- (void)setStateName:(id)arg1;
- (id)_getStateWithName:(id)arg1;
- (void)setInitialState;
- (void)animateToInitialStateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)animateToStateName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
