/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary, NSString, NSURL, REDataSourceLoader, REFeatureSet, RELocationManager, RERelevanceProviderManagerLoader;

@protocol OS_dispatch_queue, RERelevanceEngineMetricsRecorder;

@interface RERelevanceEngineConfiguration : NSObject

{
    NSMutableDictionary *_values;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *engineQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *observerQueue;
@property (copy, nonatomic, readonly) NSURL *modelFileURL;
@property (copy, nonatomic, readonly) NSURL *baseModelFileURL;
@property (nonatomic, readonly) unsigned long long modelVersion;
@property (nonatomic, readonly) _Bool allowsUpdatingModelFile;
@property (copy, nonatomic, readonly) REDataSourceLoader *dataSourceLoader;
@property (copy, nonatomic, readonly) RERelevanceProviderManagerLoader *relevanceProviderManagerLoader;
@property (nonatomic, readonly) unsigned long long trainingBehavior;
@property (nonatomic, readonly) unsigned long long modelStorageBehavior;
@property (copy, nonatomic, readonly) NSArray *sectionDescriptors;
@property (copy, nonatomic, readonly) NSArray *interactionDescriptors;
@property (nonatomic, readonly) RELocationManager *locationManager;
@property (copy, nonatomic, readonly) REFeatureSet *primaryFeatures;
@property (nonatomic, readonly) _Bool wantsImmutableContent;
@property (nonatomic, readonly) NSString *preferenceDomain;
@property (nonatomic, readonly) _Bool allowsRemoteTraining;
@property (nonatomic, readonly) _Bool wantsBackup;
@property (nonatomic, readonly) _Bool ignoreDeviceLockState;
@property (nonatomic, readonly) _Bool allowsDiagnosticExtension;
@property (nonatomic, readonly) id <RERelevanceEngineMetricsRecorder> metricsRecorder;
@property (nonatomic, readonly) _Bool ignoresInstalledApplications;

+ (id)defaultConfiguration;
+ (id)_defaultModelFileURL;
+ (id)defaultUpNextConfiguration;
+ (id)sampleUpNextConfiguration;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)descriptionWithIndent:(unsigned long long)arg1;
- (id)valueForKey:(id)arg1 ofClass:(Class)arg2 defaultValue:(id)arg3;
- (void)setValue:(id)arg1 forKey:(id)arg2 ofClass:(Class)arg3;

@end
