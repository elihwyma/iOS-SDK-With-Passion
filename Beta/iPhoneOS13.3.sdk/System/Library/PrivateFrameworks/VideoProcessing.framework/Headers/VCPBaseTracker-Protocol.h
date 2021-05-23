/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@protocol VCPBaseTracker

@property struct CGPoint *box;
@property _Bool stableInd;
@property _Bool lostTrackInd;

- (unsigned short)init;
- (unsigned short)setupTrackerWithReferenceFrame:withROI: /* Error: Ran out of types for this method. */;
- (unsigned short)trackInFrame: /* Error: Ran out of types for this method. */;

@end
