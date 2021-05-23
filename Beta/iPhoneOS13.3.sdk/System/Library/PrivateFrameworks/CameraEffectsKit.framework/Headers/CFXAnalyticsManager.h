/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@protocol OS_dispatch_queue;

@interface CFXAnalyticsManager : NSObject

{
    NSMutableArray *_analyticsDurationData;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) NSMutableArray *analyticsDurationData;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedInstance;

- (id)init;
- (void)trackEventWithName:(id)arg1;
- (void)trackFilterWithEffectId:(id)arg1;
- (void)trackAnimojiWithEffectId:(id)arg1;
- (void)trackShapeWithEffectId:(id)arg1;
- (void)trackLabelWithEffectId:(id)arg1;
- (void)trackMessagesStickerWithEffectId:(id)arg1;
- (void)trackEmojiStickerWithEffectId:(id)arg1;
- (void)trackMediaSentWithAnimoji:(_Bool)arg1 video:(_Bool)arg2 frontCamera:(_Bool)arg3 filterCount:(unsigned long long)arg4 labelCount:(unsigned long long)arg5 messagesStickerCount:(unsigned long long)arg6 shapeCount:(unsigned long long)arg7 emojiStickerCount:(unsigned long long)arg8;
- (_Bool)checkIfEventExistsWithName:(id)arg1;
- (void)persistAnalyticsDataWithEventName:(id)arg1 value:(double)arg2;
- (unsigned long long)roundWithNumber:(unsigned long long)arg1;
- (id)CFX_composedAnalyticsKeyWithAnimoji:(_Bool)arg1 video:(_Bool)arg2 frontCamera:(_Bool)arg3 effectType:(id)arg4;
- (id)appendAppbundleWithEvent:(id)arg1;
- (id)dictionaryWithEventName:(id)arg1 value:(double)arg2;
- (_Bool)isIncrementScalar:(id)arg1;
- (_Bool)isDistribution:(id)arg1;
- (void)trackEventWithName:(id)arg1 count:(unsigned long long)arg2;
- (void)startTrackingTimeIntervalEventWithName:(id)arg1;
- (void)stopTrackingTimeIntervalEventWithName:(id)arg1;

@end
