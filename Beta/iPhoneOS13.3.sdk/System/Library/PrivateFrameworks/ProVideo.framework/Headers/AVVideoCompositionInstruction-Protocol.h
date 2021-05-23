/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <ProVideo/Swift-Protocol.h>

@class NSArray;

@protocol AVVideoCompositionInstruction <Swift>

@property (nonatomic, readonly) CDStruct_e83c9415 timeRange;
@property (nonatomic, readonly) _Bool enablePostProcessing;
@property (nonatomic, readonly) _Bool containsTweening;
@property (nonatomic, readonly) NSArray *requiredSourceTrackIDs;
@property (nonatomic, readonly) int passthroughTrackID;

@end
