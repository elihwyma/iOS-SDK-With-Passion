/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/REPredictor.h>

@class NSString, REUpNextTimer;

@interface RESiriEngagementPredictor : REPredictor

{
    REUpNextTimer *_siriDecayTimer;
    NSString *_lastSiriDomain;
    float _siriInfluence;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *lastSiriDomain;
@property (nonatomic, readonly) float siriInfluence;

+ (id)supportedFeatures;

- (id)_init;
- (id)featureValueForFeature:(id)arg1 element:(id)arg2 engine:(id)arg3 trainingContext:(id)arg4;
- (void)siriServer:(id)arg1 receivedCompletedRequestDomain:(id)arg2;

@end
