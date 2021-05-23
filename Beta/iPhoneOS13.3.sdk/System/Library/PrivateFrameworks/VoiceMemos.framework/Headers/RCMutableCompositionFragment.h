/*
 Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

#import <VoiceMemos/RCCompositionFragment.h>

@class NSURL;

@interface RCMutableCompositionFragment : RCCompositionFragment

@property (retain, nonatomic) NSURL *AVOutputURL;
@property (nonatomic) double contentDuration;
@property (nonatomic) CDStruct_73a5d3ca timeRangeInContentToUse;
@property (nonatomic) CDStruct_73a5d3ca timeRangeInComposition;

- (_Bool)intersectWithTimeRange:(CDStruct_73a5d3ca)arg1;

@end
