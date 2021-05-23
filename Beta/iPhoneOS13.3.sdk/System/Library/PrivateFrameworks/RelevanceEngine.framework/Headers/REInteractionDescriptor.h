/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSString, REFeature;

@interface REInteractionDescriptor : NSObject

{
    _Bool _enableExploreExploit;
    float _weight;
    float _exploreBias;
    float _trainingSimulationExploreBias;
    float _initialProbability;
    float _varianceEpsilon;
    NSString *_name;
    REFeature *_identificationFeature;
    REFeature *_selectionFeature;
    REFeature *_biasFeature;
}

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) REFeature *identificationFeature;
@property (retain, nonatomic) REFeature *selectionFeature;
@property (retain, nonatomic) REFeature *biasFeature;
@property (nonatomic) float weight;
@property (nonatomic) _Bool enableExploreExploit;
@property (nonatomic) float exploreBias;
@property (nonatomic) float trainingSimulationExploreBias;
@property (nonatomic) float initialProbability;
@property (nonatomic) float varianceEpsilon;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
