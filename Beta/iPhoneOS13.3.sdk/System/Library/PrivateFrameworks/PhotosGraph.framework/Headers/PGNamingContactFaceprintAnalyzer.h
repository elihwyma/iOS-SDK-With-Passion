/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSString, PGGraphNamingProcessor;

@interface PGNamingContactFaceprintAnalyzer : NSObject

{
    PGGraphNamingProcessor *_processor;
}

@property (weak, nonatomic, readonly) PGGraphNamingProcessor *processor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)name;
- (id)initWithNamingProcessor:(id)arg1;
- (void)runAnalysisWithProgressBlock:(CDUnknownBlockType)arg1;

@end
