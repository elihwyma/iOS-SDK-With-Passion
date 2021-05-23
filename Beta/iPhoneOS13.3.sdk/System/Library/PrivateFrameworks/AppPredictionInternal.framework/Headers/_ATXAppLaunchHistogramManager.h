/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary, _ATXDataStore;

@protocol OS_dispatch_queue;

@interface _ATXAppLaunchHistogramManager : NSObject

{
    _ATXDataStore *_datastore;
    NSObject<OS_dispatch_queue> *_backgroundSaverQueue;
    NSDictionary *_parameters;
    NSMutableDictionary *_histograms;
    NSMutableDictionary *_categoricalHistograms;
    long long _SSIDPruningMethod;
    int _maxSSIDCount;
    long long _aprConfirmsRejectsPruningMethod;
    int _maxAprConfirmsRejectsIntentCount;
    long long _aprIntentDonationPruningMethod;
    int _maxAprIntentDonationIntentCount;
    long long _actionConfirmsRejectsPruningMethod;
    int _maxActionConfirmsRejectsActionCount;
    long long _appJointContextPruningMethod;
    int _maxAppJointContextKeyCount;
    _Bool _persistentStore;
}

@property (nonatomic, readonly) _Bool persistentStore;

+ (id)sharedInstance;
+ (void)resetSharedInstance;
+ (void)useTemporarySharedInstance:(id)arg1;
+ (void)releaseTemporarySharedInstance;

- (id)init;
- (id)initWithPersistentStore;
- (id)initWithInMemoryStore;
- (unsigned long long)getHistogramPruningMethodFromAsset:(id)arg1;
- (int)getHistogramMaxCategoryCountFromAsset:(id)arg1;
- (id)initAndPersist:(_Bool)arg1;
- (void)exchangeDatastore:(id)arg1;
- (id)histogramForLaunchType:(long long)arg1;
- (id)categoricalHistogramForLaunchType:(long long)arg1;

@end
