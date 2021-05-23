/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSString, PGGraphRelationshipProcessor;

@interface PGRelationshipHomeAnalyzer : NSObject

{
    PGGraphRelationshipProcessor *_processor;
}

@property (weak, nonatomic, readonly) PGGraphRelationshipProcessor *processor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *name;

- (void)runAnalysisWithProgressBlock:(CDUnknownBlockType)arg1;
- (id)initWithRelationshipProcessor:(id)arg1;

@end
