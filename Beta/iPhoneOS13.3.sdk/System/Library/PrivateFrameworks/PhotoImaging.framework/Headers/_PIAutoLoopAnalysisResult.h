/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <NeutrinoCore/_NURenderResult.h>

@class NSDictionary, NSString;

@protocol NURenderStatistics;

@interface _PIAutoLoopAnalysisResult : _NURenderResult

{
    NSDictionary *_recipe;
}

@property (retain) NSDictionary *recipe;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) id <NURenderStatistics> statistics;

@end
