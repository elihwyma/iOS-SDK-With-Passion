/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <AXMediaUtilities/AXMTask.h>

@class AXMSourceNode, AXMVisionPipelineContext, NSUUID;

@interface _AXMVisionEngineAnalysisTask : AXMTask

{
    NSUUID *_identifier;
    AXMVisionPipelineContext *_context;
    AXMSourceNode *_source;
}

@property (retain, nonatomic) NSUUID *identifier;
@property (retain, nonatomic) AXMVisionPipelineContext *context;
@property (retain, nonatomic) AXMSourceNode *source;

+ (id)itemWithSource:(id)arg1 context:(id)arg2;

- (id)initWithSource:(id)arg1 context:(id)arg2;

@end
