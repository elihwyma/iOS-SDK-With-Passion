/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@protocol FCDerivedPersonalizationData;

@interface FCReadonlyPersonalizationAggregateStore : NSObject

{
    id <FCDerivedPersonalizationData> _derivedPersonalizationData;
    NSMutableDictionary *_overrideAggregatesByFeatureKey;
}

@property (retain, nonatomic) id <FCDerivedPersonalizationData> derivedPersonalizationData;
@property (retain, nonatomic) NSMutableDictionary *overrideAggregatesByFeatureKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)aggregatesForFeatures:(id)arg1;
- (id)baselineAggregateWithConfigurableValues:(id)arg1;
- (void)modifyLocalAggregatesForFeatureKeys:(id)arg1 withAction:(unsigned long long)arg2 actionCount:(unsigned long long)arg3 defaultClicks:(double)arg4 defaultImpressions:(double)arg5 impressionBias:(double)arg6 configurableValues:(id)arg7;
- (void)updateFeatures:(id)arg1 withAction:(unsigned long long)arg2 displayRank:(long long)arg3 groupRank:(long long)arg4 individually:(_Bool)arg5 configurableValues:(id)arg6;
- (void)processTodayPersonalizationUpdates:(id)arg1 withConfigurableValues:(id)arg2;
- (id)initWithDerivedPersonalizationData:(id)arg1;

@end
