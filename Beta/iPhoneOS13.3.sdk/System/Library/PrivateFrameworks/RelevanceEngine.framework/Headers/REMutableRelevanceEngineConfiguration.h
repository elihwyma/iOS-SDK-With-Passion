/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/RERelevanceEngineConfiguration.h>

@class NSObject, NSString, NSURL, REDataSourceLoader, REFeatureSet, RELocationManager, RERelevanceProviderManagerLoader;

@protocol OS_dispatch_queue, RERelevanceEngineMetricsRecorder;

@interface REMutableRelevanceEngineConfiguration : RERelevanceEngineConfiguration

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *engineQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *observerQueue;
@property (copy, nonatomic) NSURL *modelFileURL;
@property (copy, nonatomic) NSURL *baseModelFileURL;
@property (nonatomic) unsigned long long modelVersion;
@property (nonatomic) _Bool allowsUpdatingModelFile;
@property (copy, nonatomic) REDataSourceLoader *dataSourceLoader;
@property (copy, nonatomic) RERelevanceProviderManagerLoader *relevanceProviderManagerLoader;
@property (nonatomic) unsigned long long trainingBehavior;
@property (nonatomic) unsigned long long modelStorageBehavior;
@property (retain, nonatomic) RELocationManager *locationManager;
@property (copy, nonatomic) REFeatureSet *primaryFeatures;
@property (nonatomic) _Bool wantsImmutableContent;
@property (copy, nonatomic) NSString *preferenceDomain;
@property (nonatomic) _Bool allowsRemoteTraining;
@property (nonatomic) _Bool wantsBackup;
@property (nonatomic) _Bool ignoreDeviceLockState;
@property (nonatomic) _Bool allowsDiagnosticExtension;
@property (retain, nonatomic) id <RERelevanceEngineMetricsRecorder> metricsRecorder;
@property (nonatomic) _Bool ignoresInstalledApplications;

+ (id)defaultConfiguration;
+ (id)defaultUpNextConfiguration;
+ (id)sampleUpNextConfiguration;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)removeSectionAtIndex:(unsigned long long)arg1;
- (void)removeAllSections;
- (void)insertSectionWithDescriptor:(id)arg1 atIndex:(unsigned long long)arg2;
- (long long)_indexOfSectionWithName:(id)arg1;
- (void)insertInteractionWithDescriptor:(id)arg1 atIndex:(unsigned long long)arg2;
- (long long)_indexOfInteractionWithName:(id)arg1;
- (void)removeInteractionAtIndex:(unsigned long long)arg1;
- (void)addSectionWithDescriptor:(id)arg1;
- (void)removeSectionWithName:(id)arg1;
- (void)addInteractionWithDescriptor:(id)arg1;
- (void)removeAllInteractions;

@end
