/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSString, PGGraphNamingProcessor;

@interface PGNamingCMMAnalyzer : NSObject

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
- (void)findCMMMatchesFromSharingRecords:(id)arg1 graph:(id)arg2 withProgressBlock:(CDUnknownBlockType)arg3;

@end
