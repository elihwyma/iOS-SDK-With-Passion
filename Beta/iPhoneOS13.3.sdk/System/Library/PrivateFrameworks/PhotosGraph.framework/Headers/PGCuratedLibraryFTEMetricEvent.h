/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, PGGraph, PHPhotoLibrary;

@interface PGCuratedLibraryFTEMetricEvent : NSObject

{
    NSString *_identifier;
    PGGraph *_graph;
    PHPhotoLibrary *_photoLibrary;
    NSDictionary *_payload;
}

@property (nonatomic, readonly) PGGraph *graph;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSDictionary *payload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithGraphManager:(id)arg1;
- (void)gatherMetricsWithProgressBlock:(CDUnknownBlockType)arg1;

@end
