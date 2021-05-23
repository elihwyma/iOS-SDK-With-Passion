/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/PDTimeNode.h>

@class PDParallelTimeNodeBuildInfo;

__attribute__((visibility("hidden")))
@interface PDParallelTimeNode : PDTimeNode

{
    PDParallelTimeNodeBuildInfo *mBuildInfo;
}

@property (retain) PDParallelTimeNodeBuildInfo *buildInfo;

@end
