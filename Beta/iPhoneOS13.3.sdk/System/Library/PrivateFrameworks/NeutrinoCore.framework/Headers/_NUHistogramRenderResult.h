/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/_NURenderResult.h>

@class NSString, NUImageHistogram;

@protocol NURenderStatistics;

@interface _NUHistogramRenderResult : _NURenderResult

{
    NUImageHistogram *_histogram;
}

@property (readonly) NUImageHistogram *histogram;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) id <NURenderStatistics> statistics;

- (id)initWithHistogram:(id)arg1;

@end
