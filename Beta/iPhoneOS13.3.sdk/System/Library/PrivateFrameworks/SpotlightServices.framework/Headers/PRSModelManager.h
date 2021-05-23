/*
 Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSNumber;

@interface PRSModelManager : NSObject

{
    _Bool _disablePolicy;
    NSNumber *_modelVersion;
    NSNumber *_shadowVersion;
    NSMutableDictionary *_shadowModels;
    NSMutableDictionary *_models;
    unsigned long long _activeCount;
}

@property (retain, nonatomic) NSNumber *modelVersion;
@property (retain, nonatomic) NSNumber *shadowVersion;
@property (retain, nonatomic) NSMutableDictionary *shadowModels;
@property (retain, nonatomic) NSMutableDictionary *models;
@property (nonatomic) unsigned long long activeCount;
@property (nonatomic) _Bool disablePolicy;

+ (id)sharedModelManager;
+ (void)cannedInfoForType:(unsigned long long)arg1 directivesPath:(id *)arg2 modelName:(id *)arg3;
+ (id)directivesFromFilePath:(id)arg1;
+ (void)pathsFor:(unsigned long long)arg1 withParentPath:(id)arg2 modelPath:(id *)arg3 directivesPath:(id *)arg4;
+ (void)loadModelWithURL:(id)arg1 type:(unsigned long long)arg2 directivesPath:(id)arg3 intoModelDict:(id)arg4 error:(id *)arg5;
+ (_Bool)loadModelsWithDirectory:(id)arg1 intoModelDict:(id)arg2;

- (id)init;
- (void)dealloc;
- (void)activate;
- (void)deactivate;
- (id)getL2ModelVersionForClientBundle:(id)arg1;
- (void)updateModelsAccordingToHierarchy:(id)arg1 updateEnabled:(_Bool)arg2 disablePendingUpdates:(_Bool)arg3;
- (void)updateModelsAccordingToHierarchy;
- (void)loadCannedModelWithType:(unsigned long long)arg1 error:(id *)arg2;
- (id)loadIfNecessaryModelOfResourceType:(unsigned long long)arg1 nowTime:(double)arg2 intoModelDict:(id)arg3 currentVersion:(id)arg4;
- (void)loadCannedModels;
- (float *)computeScoresForFeatures:(id)arg1 withBundleFeatures:(id)arg2 serverBundleFeatures:(id)arg3 usingModelContext:(id)arg4 qos:(unsigned int)arg5 shouldCancel:(_Bool *)arg6 filterBundle:(id)arg7;
- (void)triggerUpdate;
- (float *)computeL2ScoresForVectors:(id)arg1 secondVector:(id)arg2 withServerFeatures:(id)arg3 withBundleFeatures:(id)arg4 experimentalWeight1:(double)arg5 experimentalWeight2:(double)arg6 forShadow:(_Bool)arg7 shouldCancel:(_Bool *)arg8 clientBundle:(id)arg9 hasMail:(_Bool)arg10;
- (double)testL2WithData:(id)arg1 experimental:(_Bool)arg2;

@end
