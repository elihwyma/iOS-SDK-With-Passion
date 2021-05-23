/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFParameter.h>

@class INCodableAttribute, NSString;

@protocol WFDynamicResolveParameterDataSource, WFDynamicResolveParameterDelegate;

@interface WFDynamicResolveParameter : WFParameter

{
    INCodableAttribute *_codableAttribute;
    id <WFDynamicResolveParameterDataSource> _dataSource;
    id <WFDynamicResolveParameterDelegate> _delegate;
}

@property (retain, nonatomic) INCodableAttribute *codableAttribute;
@property (weak, nonatomic) id <WFDynamicResolveParameterDataSource> dataSource;
@property (weak, nonatomic) id <WFDynamicResolveParameterDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithDefinition:(id)arg1;
- (Class)singleStateClass;
- (id)localizedLabelForState:(id)arg1;
- (void)resolveOptionsForUserInput:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)endResolutionSession;
- (void)localizedDisambiguationPromptForItems:(id)arg1 intent:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
