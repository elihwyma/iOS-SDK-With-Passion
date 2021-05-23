/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <HealthToolbox/WDStoredDataByCategoryViewController.h>

@class HKSource;

__attribute__((visibility("hidden")))
@interface WDSourceStoredDataViewController : WDStoredDataByCategoryViewController

{
    HKSource *_source;
}

@property (nonatomic, readonly) _Bool sourceIsInstalled;
@property (nonatomic, readonly) _Bool sourceHasData;
@property (retain, nonatomic) HKSource *source;

- (id)storedDataPredicate;
- (id)storedDataDisplayName;
- (_Bool)shouldShowDeleteAllDataButton;
- (void)deleteAllStoredData;
- (void)deleteSource;
- (void)deleteAllSourceData;

@end
