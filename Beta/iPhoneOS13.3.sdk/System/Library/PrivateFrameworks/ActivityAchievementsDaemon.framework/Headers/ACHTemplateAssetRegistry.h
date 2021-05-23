/*
 Image: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
 */

#import <NSObject.h>

@class ACHVisibilityEvaluator, NSMutableDictionary;

@protocol ACHTemplateAssetRegistryDelegate, OS_dispatch_queue;

@interface ACHTemplateAssetRegistry : NSObject

{
    NSObject<ACHTemplateAssetRegistryDelegate> *_delegate;
    ACHVisibilityEvaluator *_visibilityEvaluator;
    NSMutableDictionary *_templateSourcesByIdentifier;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (retain, nonatomic) ACHVisibilityEvaluator *visibilityEvaluator;
@property (retain, nonatomic) NSMutableDictionary *templateSourcesByIdentifier;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (weak, nonatomic) NSObject<ACHTemplateAssetRegistryDelegate> *delegate;

- (id)init;
- (id)initWithVisibilityEvaluator:(id)arg1;
- (void)_setBundleURLsForAchievemnt:(id)arg1;
- (void)templateSourceDidUpdateAssets:(id)arg1;
- (void)registerTemplateSource:(id)arg1;
- (void)deregisterTemplateSource:(id)arg1;
- (void)populateResourcePropertiesForAchievement:(id)arg1;

@end
