/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Memories/Swift-Protocol.h>

@class MiroVPIrisRecommendedMetadataRange;

@protocol MiroMetadata <Swift>

@property (nonatomic, readonly) double miro_score;
@property (nonatomic, readonly) unsigned long long miro_flags;
@property (nonatomic, readonly) long long miro_analysisVersion;
@property (nonatomic, readonly) unsigned long long miro_performedAnalysisTypes;
@property (nonatomic, readonly) unsigned long long miro_faceCount;
@property (nonatomic, readonly) unsigned long long miro_voiceCount;
@property (nonatomic, readonly) _Bool miro_isJunk;
@property (nonatomic, readonly) _Bool miro_isBlacklisted;
@property (nonatomic, readonly) _Bool miro_IrisVideoUsable;
@property (nonatomic, readonly) MiroVPIrisRecommendedMetadataRange *miro_IrisUsableRange;
@property (nonatomic, readonly) double miro_IrisVideoUsableDuration;

- (unsigned short)miro_rangesWithType: /* Error: Ran out of types for this method. */;
- (unsigned short)miro_allRanges;
- (unsigned short)miro_setRanges:replaceType: /* Error: Ran out of types for this method. */;
- (unsigned short)miro_deleteRangesWithType: /* Error: Ran out of types for this method. */;
- (unsigned short)miro_transientRangesWithType: /* Error: Ran out of types for this method. */;
- (unsigned short)miro_ingestServerSideAnalysisResults: /* Error: Ran out of types for this method. */;

@end
