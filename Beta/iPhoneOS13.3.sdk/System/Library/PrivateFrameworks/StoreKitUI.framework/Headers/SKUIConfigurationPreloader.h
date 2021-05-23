/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableArray, NSOperationQueue, NSString, SKUIReloadConfigurationOperation;

@interface SKUIConfigurationPreloader : NSObject

{
    NSString *_configurationCachePath;
    NSOperationQueue *_workQueue;
    NSMutableArray *_completionBlocks;
    SKUIReloadConfigurationOperation *_pendingReloadOperation;
    NSDictionary *_loadedConfiguration;
}

@property (readonly) _Bool hasExistingConfigurationCache;
@property (nonatomic, readonly) NSOperationQueue *workQueue;
@property (nonatomic, readonly) NSMutableArray *completionBlocks;
@property (retain, nonatomic) SKUIReloadConfigurationOperation *pendingReloadOperation;
@property (retain, nonatomic) NSDictionary *loadedConfiguration;
@property (copy, nonatomic, readonly) NSString *configurationCachePath;

- (id)init;
- (id)initWithConfigurationCachePath:(id)arg1;
- (id)newReloadConfigurationOperation;
- (void)finishPreloadingConfiguration:(id)arg1 error:(id)arg2;
- (void)preloadConfigurationForPurpose:(long long)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;

@end
