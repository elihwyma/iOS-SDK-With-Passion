/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <AXMediaUtilities/AXMSourceNode.h>

@class AVPlayerItem, AXMVisionAnalysisOptions, NSObject, NSString;

@protocol OS_dispatch_queue;

@interface AXMAVPlayerItemNode : AXMSourceNode

{
    NSObject<OS_dispatch_queue> *_avkit_queue;
    _Bool _triggeringLegibilityEvents;
    AVPlayerItem *_targetPlayerItem;
    AXMVisionAnalysisOptions *_analysisOptions;
}

@property (weak, nonatomic) AVPlayerItem *targetPlayerItem;
@property (retain, nonatomic) AXMVisionAnalysisOptions *analysisOptions;
@property (nonatomic, readonly, getter=isTriggeringLegibilityEvents) _Bool triggeringLegibilityEvents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)title;
+ (_Bool)isSupported;

- (void)outputSequenceWasFlushed:(id)arg1;
- (void)legibleOutput:(id)arg1 didOutputAttributedStrings:(id)arg2 nativeSampleBuffers:(id)arg3 forItemTime:(CDStruct_198678f7)arg4;
- (void)nodeInitialize;
- (void)setShouldProcessRemotely:(_Bool)arg1;
- (id)axmDescription;
- (void)_mainQueue_endAutoTriggerOfLegibilityEvents;
- (void)autoTriggerLegibilityEventsWithAVPlayerItem:(id)arg1;
- (void)endAutoTriggerOfLegibilityEvents;

@end
