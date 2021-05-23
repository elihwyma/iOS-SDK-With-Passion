/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSOperationQueue, NSString;

@protocol SXDOMObjectProviderFactory, SXLayoutOperationFactory, SXLayoutPipelineDelegate;

@interface SXLayoutPipeline : NSObject

{
    id <SXLayoutPipelineDelegate> delegate;
    id <SXLayoutOperationFactory> _layoutOperationFactory;
    id <SXDOMObjectProviderFactory> _DOMObjectProviderFactory;
    NSOperationQueue *_layoutOperationQueue;
    NSMutableArray *_preProcessors;
    NSMutableArray *_postProcessors;
}

@property (nonatomic, readonly) id <SXLayoutOperationFactory> layoutOperationFactory;
@property (nonatomic, readonly) id <SXDOMObjectProviderFactory> DOMObjectProviderFactory;
@property (nonatomic, readonly) NSOperationQueue *layoutOperationQueue;
@property (nonatomic, readonly) NSMutableArray *preProcessors;
@property (nonatomic, readonly) NSMutableArray *postProcessors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <SXLayoutPipelineDelegate> delegate;

- (void)layoutWithTask:(id)arg1;
- (void)addProcessor:(id)arg1 type:(unsigned long long)arg2;
- (void)removeProcessor:(id)arg1 type:(unsigned long long)arg2;
- (void)cancelTasks;
- (void)finalizeLayoutForLayoutOperation:(id)arg1 task:(id)arg2 DOMObjectProvider:(id)arg3;
- (id)initWithLayoutOperationFactory:(id)arg1 DOMObjectProviderFactory:(id)arg2;

@end
