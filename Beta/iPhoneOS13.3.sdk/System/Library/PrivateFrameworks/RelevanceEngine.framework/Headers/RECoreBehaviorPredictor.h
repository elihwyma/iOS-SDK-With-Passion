/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/REPredictor.h>

#import <RelevanceEngine/Swift-Protocol.h>

@class BMBehaviorRetriever, NSArray, NSMapTable, NSString;

@interface RECoreBehaviorPredictor : REPredictor <Swift>

{
    BMBehaviorRetriever *_retriever;
    NSArray *_rules;
    NSMapTable *_locations;
    unsigned long long _dayValue;
    unsigned long long _hourValue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (double)updateInterval;
+ (id)supportedFeatures;

- (id)_init;
- (void)pause;
- (void)resume;
- (void)update;
- (id)featureValueForFeature:(id)arg1 element:(id)arg2 engine:(id)arg3 trainingContext:(id)arg4;
- (void)predictorDidUpdate:(id)arg1;
- (id)_bmtypeForShortcutType:(unsigned long long)arg1 filterLevel:(unsigned long long)arg2;
- (id)_retrieveFeatureValueForItemType:(id)arg1 shortcutIdentifier:(struct NSString *)arg2 antecedentType:(id)arg3 antecedentValue:(id)arg4;

@end
