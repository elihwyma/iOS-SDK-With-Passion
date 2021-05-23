/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/Swift-Protocol.h>

@class BWPortraitHDRStagingNode, BWStillImageCoordinatorNode, BWStillImageSampleBufferSinkNode, NSArray, NSString;

@protocol FigCaptureStillImageSinkPipeline <Swift>

@property (nonatomic, readonly) NSArray *nodes;
@property (nonatomic, readonly) NSString *sinkID;
@property (nonatomic, readonly) BWStillImageCoordinatorNode *stillImageCoordinatorNode;
@property (nonatomic, readonly) BWStillImageSampleBufferSinkNode *stillImageSinkNode;
@property (nonatomic, readonly) BWPortraitHDRStagingNode *portraitHDRStagingNode;

- (unsigned short)enablePrepareTimeAllocationsForDeferredPrepare;

@end
