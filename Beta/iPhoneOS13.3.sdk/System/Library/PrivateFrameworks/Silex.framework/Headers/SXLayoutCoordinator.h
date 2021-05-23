/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString, SXDOMObjectProvider, SXLayoutBlueprintProvider, SXLayoutOptions, SXLayoutParametersManager;

@protocol SXDocumentProviding, SXLayoutCoordinatorDelegate, SXLayoutInstructionFactory, SXLayoutIntegrator, SXLayoutInvalidationManager, SXLayoutPipeline, SXLayoutPolicyManager;

@interface SXLayoutCoordinator : NSObject

{
    id <SXLayoutCoordinatorDelegate> delegate;
    id <SXLayoutPipeline> _pipeline;
    id <SXLayoutIntegrator> _integrator;
    id <SXLayoutInstructionFactory> _instructionFactory;
    id <SXLayoutInvalidationManager> _invalidationManager;
    SXLayoutBlueprintProvider *_blueprintProvider;
    SXDOMObjectProvider *_DOMObjectProvider;
    SXLayoutParametersManager *_layoutParametersManager;
    id <SXDocumentProviding> _documentProvider;
    id <SXLayoutPolicyManager> _layoutPolicyManager;
    SXLayoutOptions *_layoutOptions;
}

@property (nonatomic, readonly) id <SXLayoutPipeline> pipeline;
@property (nonatomic, readonly) id <SXLayoutIntegrator> integrator;
@property (nonatomic, readonly) id <SXLayoutInstructionFactory> instructionFactory;
@property (nonatomic, readonly) id <SXLayoutInvalidationManager> invalidationManager;
@property (nonatomic, readonly) SXLayoutBlueprintProvider *blueprintProvider;
@property (nonatomic, readonly) SXDOMObjectProvider *DOMObjectProvider;
@property (nonatomic, readonly) SXLayoutParametersManager *layoutParametersManager;
@property (nonatomic, readonly) id <SXDocumentProviding> documentProvider;
@property (nonatomic, readonly) id <SXLayoutPolicyManager> layoutPolicyManager;
@property (retain, nonatomic) SXLayoutOptions *layoutOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <SXLayoutCoordinatorDelegate> delegate;

- (void)startTask:(id)arg1;
- (void)layoutPipeline:(id)arg1 finishedTask:(id)arg2 withResult:(id)arg3;
- (void)layoutWithOptions:(id)arg1;
- (id)initWithPipeline:(id)arg1 integrator:(id)arg2 instructionFactory:(id)arg3 invalidationManager:(id)arg4 blueprintProvider:(id)arg5 DOMObjectProvider:(id)arg6 layoutParametersManager:(id)arg7 documentProvider:(id)arg8 layoutPolicyManager:(id)arg9;
- (id)taskWithOptions:(id)arg1 layoutBlueprint:(id)arg2 instructions:(id)arg3;
- (void)layoutInvalidationManager:(id)arg1 didInvalidateBlueprint:(id)arg2;

@end
