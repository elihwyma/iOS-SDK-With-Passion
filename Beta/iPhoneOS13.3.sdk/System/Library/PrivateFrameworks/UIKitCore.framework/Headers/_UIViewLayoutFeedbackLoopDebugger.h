/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSMutableSet, UIView;

__attribute__((visibility("hidden")))
@interface _UIViewLayoutFeedbackLoopDebugger : NSObject

{
    long long _debuggingState;
    UIView *_rootView;
    NSMutableSet *_viewsWithChangingGeometry;
    NSMutableSet *_viewsWithVariableChangesTriggeringLayout;
    NSMutableSet *_turningPointViews;
    NSMutableSet *_involvedViews;
    NSMutableArray *_layoutList;
    NSArray *_reducedLayoutList;
    _Bool _rootViewConfirmed;
    _Bool _feedbackLoopConfirmed;
    long long _rootViewLayoutCount;
    UIView *_currentLayoutView;
}

@property (retain, nonatomic) UIView *currentLayoutView;

+ (id)layoutFeedbackLoopDebugger;
+ (void)createLayoutFeedbackLoopDebuggerForUnitTests;
+ (void)destroyLayoutFeedbackLoopDebuggerForUnitTests;

- (id)description;
- (void)willSendSetNeedsLayoutToView:(id)arg1 becauseOfChangeInVariable:(id)arg2 inLayoutEngine:(id)arg3;
- (void)willSendSetPosition:(struct CGPoint)arg1 toLayerOfView:(id)arg2;
- (void)willSendSetFrame:(struct CGRect)arg1 toLayerOfView:(id)arg2;
- (void)willSendSetBounds:(struct CGRect)arg1 toLayerOfView:(id)arg2;
- (void)didSendSetNeedsLayoutToLayerOfView:(id)arg1;
- (void)willSendSetNeedsLayoutToLayerOfView:(id)arg1;
- (void)didEnterLayoutSublayersOfLayerForView:(id)arg1;
- (void)willSendViewWillLayoutSubviewsToViewControllerOfView:(id)arg1;
- (void)didSendViewWillLayoutSubviewsToViewControllerOfView:(id)arg1;
- (void)willSendLayoutSubviewsToView:(id)arg1;
- (void)didSendLayoutSubviewsToView:(id)arg1;
- (void)willSendViewDidLayoutSubviewsToViewControllerOfView:(id)arg1;
- (void)didSendViewDidLayoutSubviewsToViewControllerOfView:(id)arg1;
- (void)willExitLayoutSublayersOfLayerForView:(id)arg1;
- (void)dumpInfoWithInfoCollectionSuccess:(_Bool)arg1;
- (id)viewsWithVariableChangesTriggeringLayoutCreateIfNecessary;
- (id)turningPointViewsCreateIfNecessary;
- (void)_recordSetNeedsLayoutToLayerOfView:(id)arg1;
- (void)willChangeGeometryForLayerOfView:(id)arg1;
- (id)viewsWithChangingGeometryCreateIfNecessary;
- (id)topLevelViewHierarchyTrace;

@end
