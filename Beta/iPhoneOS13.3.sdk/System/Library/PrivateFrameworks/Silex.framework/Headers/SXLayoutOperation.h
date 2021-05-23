/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSOperation.h>

@class NSString, SXColumnLayouter, SXLayoutBlueprint, SXLayoutTask;

@protocol SXComponentSizerEngine, SXDOMObjectProviding, SXLayoutBlueprintFactory;

@interface SXLayoutOperation : NSOperation

{
    _Bool _executing;
    _Bool _finished;
    SXLayoutBlueprint *_layoutBlueprint;
    CDUnknownBlockType _beforeBlock;
    CDUnknownBlockType _afterBlock;
    double _duration;
    id <SXComponentSizerEngine> _componentSizerEngine;
    id <SXLayoutBlueprintFactory> _layoutBlueprintFactory;
    id <SXDOMObjectProviding> _DOMObjectProvider;
    SXColumnLayouter *_layouter;
    SXLayoutTask *_task;
    double _startTime;
}

@property (nonatomic, readonly) id <SXComponentSizerEngine> componentSizerEngine;
@property (nonatomic, readonly) id <SXLayoutBlueprintFactory> layoutBlueprintFactory;
@property _Bool executing;
@property _Bool finished;
@property (nonatomic, readonly) id <SXDOMObjectProviding> DOMObjectProvider;
@property (nonatomic, readonly) SXColumnLayouter *layouter;
@property (nonatomic, readonly) SXLayoutTask *task;
@property (nonatomic, readonly) double startTime;
@property (nonatomic, readonly) SXLayoutBlueprint *layoutBlueprint;
@property (copy, nonatomic, setter=beforeLayout:) CDUnknownBlockType beforeBlock;
@property (copy, nonatomic, setter=afterLayout:) CDUnknownBlockType afterBlock;
@property (nonatomic, readonly) double duration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)start;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (_Bool)isAsynchronous;
- (void)layouter:(id)arg1 didFinishLayoutForComponentBlueprint:(id)arg2 layoutBlueprint:(id)arg3 shouldContinueLayout:(_Bool *)arg4;
- (void)startBookKeeping;
- (void)prepareLayoutBlueprint:(id)arg1;
- (id)layoutWithBlueprint:(id)arg1;
- (_Bool)layoutBlueprint:(id)arg1 containsComponents:(id)arg2;
- (void)finishBookKeeping;
- (void)updateLayoutBlueprint:(id)arg1 components:(id)arg2;
- (id)createLayoutBlueprintForComponents:(id)arg1;
- (void)registerComponent:(id)arg1 layoutBlueprint:(id)arg2 componentIndex:(unsigned long long)arg3;
- (id)initWithTask:(id)arg1 layouter:(id)arg2 DOMObjectProvider:(id)arg3 componentSizerEngine:(id)arg4 layoutBlueprintFactory:(id)arg5;

@end
