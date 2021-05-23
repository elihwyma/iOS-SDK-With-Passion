/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <ComponentKit/CKStatefulViewComponentController.h>

@class NSDictionary, NSString;

@interface WFModuleSummaryComponentController : CKStatefulViewComponentController

{
    _Bool _summaryIsEditing;
    _Bool _shouldReflowWhenComponentRemounted;
    _Bool _actionRunning;
    NSDictionary *_stagedParameterStates;
}

@property (nonatomic) _Bool summaryIsEditing;
@property (nonatomic) _Bool shouldReflowWhenComponentRemounted;
@property (retain, nonatomic) NSDictionary *stagedParameterStates;
@property (nonatomic) _Bool actionRunning;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)newStatefulView:(id)arg1;
+ (void)configureStatefulView:(id)arg1 forComponent:(id)arg2;
+ (double)heightForComponent:(id)arg1 withWidth:(double)arg2;

- (void)actionRunningStateDidChange:(id)arg1;
- (void)didAcquireStatefulView:(id)arg1;
- (void)willRelinquishStatefulView:(id)arg1;
- (void)cancelEditingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)reflowWithStagedParameterStates:(id)arg1;
- (void)didUpdateComponent;
- (id)viewControllerContainingSummaryView:(id)arg1;
- (void)summaryViewWillBeginEditing:(id)arg1;
- (void)summaryViewDidEndEditing:(id)arg1;
- (void)summaryViewDidInvalidateSize:(id)arg1;
- (id)summaryView;
- (_Bool)canRelinquishStatefulView;
- (void)updateColorsForRunningStateAnimated:(_Bool)arg1;

@end
