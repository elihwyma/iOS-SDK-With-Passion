/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Memories/Swift-Protocol.h>

@protocol MiroBlueprintEditStyleProtocol, MiroBlueprintMusicInfoProtocol, MiroBlueprintTitleStyleProtocol;

@protocol MiroBlueprintProtocol <Swift>

@property (nonatomic, readonly) double videoMinDuration;
@property (nonatomic, readonly) double videoIdealDuration;
@property (nonatomic, readonly) double videoMaxDuration;
@property (nonatomic, readonly) double photoMinDuration;
@property (nonatomic, readonly) double photoIdealDuration;
@property (nonatomic, readonly) double photoMaxDuration;
@property (nonatomic, readonly) double titleMinDuration;
@property (nonatomic, readonly) double titleIdealDuration;
@property (nonatomic, readonly) double irisMinDuration;
@property (nonatomic, readonly) double irisIdealDuration;
@property (nonatomic, readonly) double irisMaxDuration;
@property (nonatomic, readonly) double burstMinDuration;
@property (nonatomic, readonly) double burstIdealDuration;
@property (nonatomic, readonly) double sloMoMinDuration;
@property (nonatomic, readonly) double sloMoIdealDuration;
@property (nonatomic, readonly) double timelapseMinDuration;
@property (nonatomic, readonly) double timelapseIdealDuration;
@property (nonatomic, readonly) double halfBarDuration;
@property (nonatomic, readonly) unsigned long long toneTreatment;
@property (nonatomic, readonly) id <MiroBlueprintMusicInfoProtocol> musicInfo;
@property (nonatomic, readonly) id <MiroBlueprintTitleStyleProtocol> titleStyle;
@property (nonatomic, readonly) id <MiroBlueprintEditStyleProtocol> editStyle;

- (unsigned short)idealDurationForAsset: /* Error: Ran out of types for this method. */;
- (unsigned short)panoMinDurationWithMultiplier: /* Error: Ran out of types for this method. */;
- (unsigned short)panoMaxDurationWithMultiplier: /* Error: Ran out of types for this method. */;
- (unsigned short)panoIdealDurationWithMultiplier: /* Error: Ran out of types for this method. */;
- (unsigned short)minimumDurationForAsset: /* Error: Ran out of types for this method. */;
- (unsigned short)durationIsNearVideoIdeal: /* Error: Ran out of types for this method. */;
- (unsigned short)maximumDurationForAsset: /* Error: Ran out of types for this method. */;

@end
